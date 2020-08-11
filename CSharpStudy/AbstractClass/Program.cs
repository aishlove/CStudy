using System;

namespace AbstractClass
{
    abstract class AbstractBase
    { 
        protected void PrivateMethodA() // 메소드
        {
            Console.WriteLine("AbstactBase.PrivateMethodA()");
        }

        public void PublicMethodA() // 메소드
        {
            Console.WriteLine("AbstactBase.PublicMethodA()");
        }

        public abstract void AbstractMethodA(); // 추상메소드

    }

    class Derived : AbstractBase
    {
        public override void AbstractMethodA()  // 추상메소드를 override 해서 사용.
        {
            Console.WriteLine("Derived.AbstractMethodA()");
            PrivateMethodA();
        }

    }


    class MainApp
    {
        static void Main(string[] args)
        {
            AbstractBase obj = new Derived();   // 상속받은 추상클래스를 통해서 AbstactBase 인스턴스를 생성했다.
            obj.AbstractMethodA();
            obj.PublicMethodA();
        }
    }
}
