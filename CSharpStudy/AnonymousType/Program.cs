using System;

namespace AnonymousType
{
    class Program
    {
        static void Main(string[] args)
        {
            var a = new { Name = "도경수", Age = 28 };
            Console.WriteLine($"Name : {a.Name}, Age : {a.Age}");

            var b = new { Subject = "음악", Scores = new int[] { 90, 80, 70, 60 } };
            Console.WriteLine($"Subject : {b.Subject}, Scores: ");
            foreach (var score in b.Scores)
                Console.WriteLine($"{score} ");

            Console.WriteLine();
        }
    }
}
