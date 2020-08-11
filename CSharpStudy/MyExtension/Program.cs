using System;
using MyExtension;

namespace MyExtension
{
    public static class IntegerExtension { 
    public static int Square(this int myInt)
    {
        return myInt * myInt;   // 제곱(Square)
    }

    public static int Power(this int myInt, int exponent)   // 지수곱하기
        {
            int result = myInt;
            for (int i = 1; i < exponent; i++)
                result = result * myInt;

            return result;
        }

    }

    // 275 쪽 예제 작성해본 것
    public static class StringExtension
    {
        public static string Append(this string myString, string yourString)
        {
            return myString + yourString;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"3^2 : {3.Square()}");
            Console.WriteLine($"3^4 : {3.Power(4)}");
            Console.WriteLine($"2^10 : {2.Power(10)}");

            string hello = "Hello";
            Console.WriteLine(hello.Append(", World!"));
        }
    }
}
