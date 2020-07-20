using System;

namespace CSharp10_Property
{
    class Program
    {

        // 1. 프로퍼티
        // 2. 자동 구현 프로퍼티 

        class Knight
        {
            protected int hp;
            
            
            // get 하는 함수하나, set 하는 함수 하나 사용하는 패턴을 굉장히 자주 사용하게 되는데,

            // Getter Get 함수             
            public int GetHP() { return hp; }

            // Setter Set 함수
            public void SetHP(int hp) { this.hp = hp; }
            // 라고 부른다.




            /* c++ 이라면 다른 방법이 없어서 이렇게 써야 겠지만,
             * C#에서는 이를 위해 프로퍼티라는 문법이 존재한다. */


            //public int Hp
            //{ 
            //    get { return hp; }
            //    set { hp = value; }    // 프로퍼티에서는 기본으로 value라는 값을사용한다.
            //}

            // 자동 구현 프로퍼티
            public int Hp
            {
                get; set;
            } = 100;
            /*
             
            private int _hp;
            public int GetHp() { return _hp;}
            public void SetHp(int value) {_hp = value;}     // 와 같은 형태라고 볼 수 있다.
             
             */


            // 내부에서는 그냥 사용해도 정상 작동 한다.
            void Test()
            {
            
            Hp = 200;
            }
        }


        /* 사용 의의 : 굳이 함수 2개를 안만들고 하나로 get set을 사용할 수 있다는게 편리한 점.
         */



        static void Main(string[] args)
        {
            //Knight knight = new Knight();
            //knight.SetHP(100);

            //// 프로퍼티

            Knight knight = new Knight();
            knight.Hp = 100;

            // 프로퍼티를 사용하면 이렇게 value값을 set해주는게 가능하다. (프로퍼티 문법)


        }
    }
}
