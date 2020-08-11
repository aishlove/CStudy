using Microsoft.VisualBasic.CompilerServices;
using System;
using System.Collections.Generic;

namespace CSharp10_Generic
{
    // 당장 몰라도 상관 없지만, 알면 인생이 조금 더 편해지는 문법들... 훑어보는 느낌으로 보면 된다.

    /*
     * Generic < 일반화 >
     * 
     * 우리만의 자료구조를 만든다. 나만의 특별한 리스트를 만들어보고 싶다고 가정한다.
     * 데이터 형식을 여러가지 지원해줘야 할것이다.
     */

    
    class Program
    {
        class MyList<T> // Type의 약자
        {
            T[] arr = new T[10];
        }

        static void Main(string[] args)
        {
            MyList<int> myIntList = new MyList<int>();
            MyList<float> myFloatList = new MyList<float>();
            MyList<int> myIntLinst = new MyList<int>();


            var obj3 = 3;
            var obj4 = "hello world";

            object obj = 3;
            object obj2 = "hello world";
            int num = (int)obj;
            string str = (string)obj2;
            // 오브젝트의 장점 : 어떤 타입이든 소화가 가능하다..!
            // var 와 object의 차이는?
            // 완전히 개념이 다르다... var는 string을 명시적으로 얘기안해도 컴파일러가 어떤 타입이겠거니 하고 때려맞춘다.
            // object는 정말로 타입이 object라는 형식이 되는 것. 이게 둘의 차이점이다.
            // 어떻게 생겨먹은 애길래 이러느냐... >> 상속때문임.
            // string, int같은 애들이 궁극적으로는 object를 상속받기 때문이다.
            // 
        }
    }
}
