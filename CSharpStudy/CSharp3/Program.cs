using System;

namespace CSharp3
{
    /* OOP (은닉성 / 상속성 / 다형성)
     * 
     * 자동차
     * 핸들 페달 차문
     *      전기장치 엔진 기름 <-> 외부 노출 
     *      
     * (외부에서 사용하는 외관적인 기능들... 조금 더 치명적인 기능들은 숨겨져 있을거고 사용자한테 외부 노출 할 필요가 없는 부분이다) >> 은닉성에 대한 부분.
     * 
     */

    class Knight
    {
        // public protected private
        protected int hp;
        // 상속을 받은 아이면 접근이 가능. 사실은 외부에 노출하면 안되는데 나의 자식들에게는 상속시켜주고 싶다. 할때 사용.
        private int hp2;
        // 접근안됨. 이런 경우에는 함수를 public으로 별도로 빼줘서 밖에서는 public 함수를 통해 접근할 수 있게끔 해주는 경우가 있다.

        public void SetHP(int hp2)
        {
            this.hp2 = hp2;
        }
        public int hp3;


    }

    class SuperKnight : Knight
    {
        void Test()
        {
            hp = 10;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Knight knight = new Knight();
            knight.SetHP(100);

        }
    }
}
