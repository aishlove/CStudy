using System;

namespace CSharp4
{
    // 상속성의 가장 좋은 점 - 코드의 재사용

    class Player
    {
        protected int hp;
        protected int attack;
    }
    class Knight : Player
    {
    }
    class Mage : Player
    {
        public int mp;
    }
    class Program
    {
        //static void EnterGame(Knight knight) 
        //{

        //}
        //static void EnterGame(Mage mage)    // 오버로딩 : 코드가 반복되고. 같은 형식의 함수를 계속 늘려줘야 해서 별로다. 어떤 방법이 가능하냐면... 상속이겠지.
        //{

        //}

        static void EnterGame(Player player)    // 상속을 해주고 나면, 상위의 부모되는 클래스로 붕어빵 틀을 형성해주면, 이 함수에다가 자식 클래스들을 찍어내면 부모 클래스 모양으로 나옴.
        {

            // 부모 클래스 인스턴스가 자식 클래스 인스턴스인지 1차적으로 먼저 검증해보는? 보호막? 같은 구문이 있다. 
            // 1. is - < xx is oo > 불타입으로 반환.

            //bool isMage = (player is Mage);
            //if (isMage)     // 만약 Mage라면
            //{
            //    Mage mage = (Mage)player;   // 억지로 형변환을 해라.
            //    mage.mp = 10;
            //}

            // 2. as - < xx as oo > 불타입으로 반환하지 않고 아예 캐스팅까지 해줌.
            // 대부분의 경우 as를 사용한다. 코드가 깔끔해서요. 

            Mage mage = (player as Mage);
            if(mage != null)    // knight여서 mage가 될수 없는 경우 null값이 반환 (패스되는것)
            {
                mage.mp = 10;
            }


            // mage한테만 있는 mp를 불러오려면 어떻게 해야하는가?
            //Mage mage = (Mage)player;   // 억지로 형변환을 해라.
            //mage.mp = 10;

        }

        static void Main(string[] args)
        {
            Knight knight = new Knight();   // stack 메모리에 knight 라는 변수가 선언되는데. new Knight라고 하는 순간 Heap 메모리 영역에 Knight본체가 생성이 되고. stack메모리에서는 Heap메모리의 Knight를 새로 참조하게 되는 형태.
            //knight. // 하면 주소로 가서 실제 본체를 건드린다.
            Mage mage = new Mage();

            // Mage 타입 -> Player 타입 o
            // Player 타입 -> Mage 타입 ? // 꼭 그렇지는 않다. knight타입이 변환된것일수 있으므로. 한번 더 안심시켜줘야함.
            Player magePlayer = mage;
            Mage mage2 = (Mage)magePlayer;

            // 강제로 변환할떄의 문제점... 안심시켜서 어떻게든 변환을 억지로 했는데, 만약 아니었다면?

            EnterGame(knight);
            //EnterGame(mage);

        }
    }
}
