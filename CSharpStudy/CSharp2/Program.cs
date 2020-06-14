using System;

namespace CSharp2
{
    /* 객체지향 vs 절차지향
     * 
     * 절차지향 (procedual/ procedure) 
     * 
     * 함수(프로시져)를 기반으로 뭔가를 만들어 보겠다... 텍스트 알피지가 정말 전형적인 예라고 할 수 있겠다. 
     * 모든것을 함수 기반으로 만들었기에. 어떤 기능을 만들라면 함수를 하나 새로 파서 다른 함수들과 조립을 했었다.
     * 
     * * 간단한 프로그램이거나, 작은 규모의 툴을 만들 때는 이런 식으로 빨리빨리 만드는 것이 상당히 직관적이라 장점이 있지만.
     * 프로그램이 커질수록 이런 방식으로 구현하면 유지보수가 힘들다는 치명적인 문제가 생긴다. 함수의 호출 순서가 가장 큰 문제가 된다.
     * 
     * 
     * 객체지향 (OOP : Obejct Oriented Programming)   - 속성 : [ 은닉성 ] / [ 상속성 ] / [ 다형성 ] 
     * 
     * 객체란, <코드 내의 모든 것들 / 게임 세상에 존재하는 눈에 보이지 않는 모든 것들> 을 얘기한다.
     * 객체의 설계에 대해서 해보겠다.
     * 객체를 어떤 방식으로라도 묘사할 수 있어야 한다. 결국 <속성>과 <기능>으로 분류하게 된다.
     * 
     * ex) Knignt(기사)
     * 
     * 속성(.Data) : hp, attack, pos, 
     * 기능        : Move, Attack, Die
     * 
     * 객체를 묘사할 때 사용하는 문법은 바로 >클래스< 라고 한다.
     
     */


    // 각 몬스터마다 클래스를 생성하고 복붙해서 만드는 것은 비효율 적일것... 상속이라는 개념을 익혀야 한다.
    // 일단 상속을 하려면 부모와 자식 대칭 관계를 정리를 해야 한다.
    class Player     // 부모클래스 / 기반클래스 
    {
        static public int counter = 1;

        public int id;
        public int hp;
        public int attack;

        public Player()
        {
            Console.WriteLine("Player 생성자 호출!");
        }
    }

    class Mage : Player     // 상속 키워드로 상속을 받았으므로 내부의 재산을 이어받아서 사용 가능함.
                    // 자식클래스 / 파생클래스
    {

    }


    class Archer : Player
    {
        }


    class Knight : Player    // 안에 나이트라는 객체를 묘사할 수 있다. 실제로 사용할 떄에는 묘사한 애들을 환생을 시키게 된다. 붕어빵 틀... 설계도 같은 애임. 
    {
        public Knight()
        {
            Console.WriteLine("Knight 생성자 호출!");
        }
        // 필드
        static public int counter =1; // 오로지 1개만 존재!

        // 속성은 데이터
        public int id;
        public int hp;
        public int attack;

        public void test()
        { 
            // 이 상태로는 각 인스턴스(생성자로 생성된 애들)에 종속되는 함수가 된다.
        }
        static public void Test2()
        {
            // Knight 클래스에 종속되기 때문에 유일성이 보장된다.
            // static 함수 안에서는 static 키워드만 사용할 수 있다.
            // 애초에 공용 함수가 개인정보에 접근할 수 있는게 말이 안되잖음
            counter++;
        }


        // 그렇다고 static을 붙였을 때 일반 인스턴스에 접근을 못한다는 것은 아니다.

        //static public Knight CreateKnight()
        //{
        //    Knight knight = new Knight();
        //    knight.hp = 100;
        //    knight.attack = 1;
        //    return knight;
        //}



        // 생성자
        //public Knight()
        //{
        //    id = counter;
        //    counter++;

        //    hp = 100;
        //    attack = 10;
        //    Console.WriteLine("생성자 호출!");
        //}

        // 생성자에 값을 넣어서 셋팅을 하고 싶은 경우
        //public Knight(int hp) // hp를 넣어서 셋팅을 하고 싶다.
        //{
        //    this.hp = hp;   // 내 hp를 이 hp로 셋팅을 해주세요.
        //    Console.WriteLine("int 생성자 호출!");
        //}
        // 이렇게 생성자 코드가 두개가 있을 경우, 아래에서 인자값을 넣어준다면, 값을 넣어준 버전만 호출하게 된다.

        public Knight(int hp) : this()  // 이 키워드를 넣어주는 경우에는 위의 생성자를 한번 호출한 뒤, 아래 생성자 (int hp 셋팅버전)을 추가로 호출한다.
        {
            this.hp = hp;
            Console.WriteLine("int 생성자 호출!!");
        }

        public Knight(int hp, int attack) : this(hp)  // 이 키워드를 넣어주는 경우에는 위의 생성자를 한번 호출한 뒤, 아래 생성자 (int hp 셋팅버전)을 추가로 호출한다.
        {
            this.hp = hp;
            this.attack = attack;
            Console.WriteLine("int, int 생성자 호출!!");
        }

        // 깊은 복사 Deep Copy
        public Knight Clone()   // Clone()을 호출하면, 복사를 해주고 리턴한다. 얘는 진퉁 짝퉁 이런게 아니라 아예 새로운 아이를 만들어서 떠나보내는 것.
        {
            Knight knight2 = new Knight();
            knight2.hp = hp;
            knight2.attack = attack;
            return knight2;
            // 자기 값을 다 넣어준다음에 knight2로 반환해주세요.
        }

        // 기능은 함수
        public void Move()
        {
            Console.WriteLine("Knight Move");
        }

        public void Attack()
        {
            Console.WriteLine("Knight Attack");
        }

    }

    // struct 도 비슷한 모양으로 사용할 수 있었는데. class로 선언된애랑 struct로 선언된 애가 뭐가 다를까?
    // : struct 는 복사를 하는거고, class는 참조 ref를 하는거다.

    //struct Mage {
    //    public int hp;
    //    public int attack;
    //}


    class Program
    {
        static void KillMage(Mage mage)
        {
            mage.hp = 0;
        }

        static void KillKnight(Knight knight)
        {
            knight.hp = 0;
        }


        static void Main(string[] args)
        {
            //// 복사와 참조... 짝퉁으로 할거냐 진퉁으로 할거냐
            //// 얕은복사 깊은복사
            //Mage mage;
            //mage.hp = 100;
            //mage.attack = 50;

            //Mage mage2 = mage;
            //mage2.hp = 0;

            //KillMage(mage);
            ///* 클래스로 선언될때는 기본적으로 Ref 참조로 값을 넘기고,
            //   구조체는 복사로 값을 넘기기 때문에 이런 일이 일어난 것이다. 
            //   구조체에서는 ref를 따로 붙이지 않는 이상 복사본을 넘기는 것이다. (본체에게는 영향을 주지 않는다)*/

            Knight knight = new Knight(50, 40);
            // 만약 까먹고 객체를 생성하지 않았다면?
            // 클래스를 묘사했다면 반드시 생성을 해줘야 한다.
            // 실재하는 나이트로 만들어 주었다.

            //knight.hp = 100;
            //knight.attack = 10;
            //KillKnight(knight);

            ////Knight knight2 = new Knight();
            ////knight2.hp = knight.hp;
            ////knight2.attack = knight.attack;
            //// 여기까지는 얕은 복사.

            //// Deep copy 깊은 복사
            //// 별도의 객체를 만들어서, 값만 똑같이 넣어주는 것을 하고 싶은 것.

            //Knight knight2 = knight.Clone();
            //knight2.hp = 0;

            Knight staticKnight = Knight.CreateKnight(); // static 함수는 클래스에 종속적이기 때문에, 얘가 정적으로 붙어있는 본체 클래스를 통해서 접근해줘야 한다.
            // staticKnight.attack(); // static은 이런건 못함.
            knight.Move();      // 일반 함수로는 가능.

            Console.WriteLine();    // Console.으로 접근.. 얘는 static 타입이다.

            Random rand = new Random();
            rand.Next(0,2);                // 생성자로 생성해서 접근... 얘는 일반 함수 타입이다.


            knight.Move();
            knight.Attack();


            /* 생성자 : 무조건 클래스 이름과 이름이 같아야 한다. 반환하는 타입을 아무것도 적으면 안된다. */
        }
    }
}
