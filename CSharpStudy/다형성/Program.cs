using System;

namespace CSharp5
{
    // 다형성 Poly Morph - 여러가지 형태를 가지고 있다. 가상 함수를 일단 만들어 준다 (virtual - override) : 오버로딩과 오버라이드는 완전 다른것임.

    // 오버로딩 (함수 이름의 재사용) - 이름은 같지만 인자를 다르게 만든 것.
    // 오버라이딩 - 다형성에서 사용하는 문법. 어떤 함수에다가 실제 타입에 따라서 다양한 형태로 동작을 하겠다.

    class Player
    {
        protected int hp;
        protected int attack;

        public virtual void Move()
        {
            Console.WriteLine("Player 이동!");
        }
    }

    class Knight : Player
    {
        public override void Move()
        {
            Console.WriteLine("Knight 이동!");
        }
    }

    class Mage : Player
    {
        public int mp;
        public override void Move()
        {
            Console.WriteLine("Mage 이동!");
        }
    }

    class Program
    {
        static void EnterGame(Player player)
            
        {
            player.Move();

            Mage mage = (player as Mage);
            if(mage != null)
            {
                mage.mp = 10;
                mage.Move();
            }

            Knight knight = (player as Knight);
            if (knight != null)
            {
                knight.Move();
            }
        }


        static void Main(string[] args)
        {
            Knight knight = new Knight();
            Mage mage = new Mage();

            EnterGame(knight);

        }
    }
}
