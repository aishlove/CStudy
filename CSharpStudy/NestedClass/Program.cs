using NestedClass;
using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;

namespace NestedClass
{
    class Configuration // 뭔가를 설정해주려고 하나 보다.
    {
        List<ItemValue> listConfig = new List<ItemValue>(); // 리스트 선언

        public void SetConfig(string item, string value)    // 설정 셋팅
        {
            ItemValue iv = new ItemValue(); // 아이템밸류 클래스의 인스턴스를 iv라는 이름으로 생성해주었다.
            iv.SetValue(this, item, value); // iv인스턴스에서 SetValue를 Configuration 클래스와, item 변수, value 변수를 통해 초기화해준다. (얘들 다 ItemValue 클래스소속)
        }

        public string GetConfig(string item)                // 설정 얻어오기
        {
            foreach (ItemValue iv in listConfig)    //listConfig 라는 리스트 안의 ItemValue형식의 iv 인스턴스 에 도달할때까지 
            { if (iv.GetItem() == item)         // 만일 iv가 가지고 온 아이템이 아이템이라면,
                    return iv.GetValue();       // iv.GetValue() 값으로 돌려줘라. 
            }
            return "";  // string""으로 돌려줘라. 
        }

        // 중첩 클래스
        private class ItemValue // 아이템 밸류 값을 중첩해서 숨겨뒀다
        {
            private string item;
            private string value;

            public void SetValue(Configuration config, string item, string value)   // 밸류를 셋팅해주는 함수 config, item, value를 받아온다
            {
                this.item = item;   // 지금 이 클래스(ItemValue)의 item 변수
                this.value = value; // 지금 이 클래스(ItemValue)의 value 변수

                bool found = false; // found 라는 bool값을 false 상태로 선언. 뭔가를 체크하려고 하는 듯.
                for (int i = 0; i < config.listConfig.Count; i++)   // Configuration의 config.listConfig.Count
                {
                    if (config.listConfig[i].item == item)  // listConfig의 배열을 하나씩 넘기며,item 이 item이라면,
                    {
                        config.listConfig[i] = this;    // config.listConfig에 이 클래스(ItemValue)를 넘겨준다.
                        found = true;                   // 찾았다 found = true 대입
                        break;                          // for문을 나간다.
                    }
                }
                    if (found == false)                 // 만약 찾았다 found == false
                        config.listConfig.Add(this);    // config.listConfig.Add(this) ItemValue 클래스를 리스트에 더해준다.
                   
                }

            public string GetItem() // string 타입으로 반환받는 GetItem()
            { return item; }

            public string GetValue() // string 타입으로 반환받는 GetValue()
            { return value; }

            }
        }
    }

    class MainApp
    {
    static void Main(string[] args)
    {
        Configuration config = new Configuration(); // 새로운 config 인스턴스 생성
        config.SetConfig("Version", "V 5.0");
        config.SetConfig("Size", "655,324KB");

        Console.WriteLine(config.GetConfig("Version"));
        Console.WriteLine(config.GetConfig("Size"));

        config.SetConfig("Version", "V 5.0.1");
        Console.WriteLine(config.GetConfig("Version")); }
    }

