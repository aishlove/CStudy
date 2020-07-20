using System;

namespace CSharp12_Event
{
    class Program
    {
        static void OnInputTest()
        {
            Console.WriteLine("키가 눌렸따!!!");
        }

        static void Main(string[] args)
        {
            InputManager inputManager = new InputManager();

            inputManager.InputKey += OnInputTest; // += 구독    -= 구독취소

            while(true)
            {
                inputManager.Update();
            }    

        }
    }
}


// 인풋매니저 - 중간매개역할. 어떤 버튼이 눌렸는지 입력을 감지해서 다른 클래스에게 정보를 알려주는.

// 이벤트는 실행해주는 애의 방송을 구독하는 형태임.
// 델리게이트는 중간애한테 일을 시켜서 연락다시해주게끔(콜백) 만들지만
// 이벤트는 실행을 직접 시키지는 못하고 그저 하는지 안하는지 알려주게만 하는 것이다.