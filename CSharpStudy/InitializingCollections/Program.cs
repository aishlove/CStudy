using System;
using System.Collections;
using static System.Console;

namespace InitializingCollections
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 123, 456, 789 };

            ArrayList list = new ArrayList(arr);
            foreach (object item in list)
                WriteLine($"ArrayList : {item}");

            Stack stack = new Stack(arr);
            foreach (object item in stack)
                WriteLine($"Stack : {item}");
            WriteLine();

            Queue queue = new Queue(arr);
            foreach (object item in stack)
                WriteLine($"Queue : {item}");
            WriteLine();

            ArrayList list2 = new ArrayList() { 11, 22, 33 };
            foreach (object Item in list2)
                WriteLine($"ArrayList2 : {Item}");
            WriteLine();

            int[][] arr2 = { new int[] { 1000, 2000 }, new int[] { 123, 345, 345 } };
        }
    }
}
