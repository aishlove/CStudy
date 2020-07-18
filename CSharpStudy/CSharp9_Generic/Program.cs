using System;
using System.Collections.Generic;

namespace CSharp9_Generic
{
    class Program
    {
        class MyList<T> where T : struct //(값형식) class(참조형식)    
            // templete, type 의 약자로 사용<T>. 이름 다르게 써도 된다.
        {
            T[] arr = new T[10];

            public T GetItem(int i)
            {
                return arr[i];
            }
            

            class Monster
            {

            }

            static void Test<T> (T input) // 어떤 type을 넣어도 잘 동작함.
            {
                Test<int>(3);
                Test<float>(3);
            }



        }
        static void Main(string[] args)
        {

            object obj = 3; // 32bit integer
            object obj2 = "Hello World!";  // string

            var obj3 = "Hello World!!";  // 컴파일러로 유추

            MyList<int> myIntList = new MyList<int>();
            int item = myIntList.GetItem(0);
            
            MyList<short> myShortList= new MyList<short>();
            MyList<float> myFloatList = new MyList<float>();

            //Dictionary<int, Monster>;
        }
    }
}
