using System;

namespace CSharp
{
    class Program
    {
        // 덧셈함수
        static void AddOne(ref int number)
        {
            number += 1;
        }
        static void Main(string[] args)
        {
            int a = 0;
            AddOne(ref a);
            Console.WriteLine(a);
        }
    }
}
