using System;

namespace Inheritence
{
    class Mammal
    {
        public void Nurse()
        { }        
    }

    class ZooKeeper
    {
        public void Wash(Mammal mammal)
        {
            // 씻겨라앙
        }
    }

    class Dog : Mammal
    {
        public void Bark() { }
    }

    class Cat : Mammal
    {
        public void Meow() { }
    }

    class MainApp
    {
        static void Main(string[] args)
        {
            Mammal mammal = new Mammal();   // 인스턴스 생성
            mammal.Nurse();

            Dog dog = new Dog();
            dog.Nurse();
            dog.Bark();

            Cat cat = new Cat();
            cat.Nurse();
            cat.Meow();

            Mammal mammal_d = new Dog();
            Dog dog2;

            // is 문법
            if(mammal_d is Dog) // 만약 mammal_d 가 Dog에서 태어난 애라면,
            {
                dog2 = (Dog)mammal;    // dog_2 를 (Dog)로 형변환해줘라.
                dog.Bark();
            }

            Mammal mammal_c = new Cat();
            
            Cat cat2 = mammal_c as Cat;    // cat으로써(as) 생성해줘라
            if(cat2 != null)
            {
                cat2.Meow();
            }

        }
    }
}

