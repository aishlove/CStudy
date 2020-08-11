using System;

namespace Indexer
    // 인덱서
{
    class MyList
    {
        private int[] array;
        
        public MyList()
        {
            array = new int[3];
        }

        public int this[int index]
        {
            get { return array[index]; }
            set { if (index >= array.Length)
                { Array.Resize<int>(ref array, index + 1);
                    Console.WriteLine($"Array Resized : {array.Length}");
                }
                array[index] = value;
            }
        }

        public int Length
        {
            get { return array.Length; }
        }
    }



    class Program
    {        
        static void Main(string[] args)
        {
            MyList list = new MyList();
            for (int i = 0; i < 5; i++)
                list[i] = i;    // 인덱스를 통해 데이터 입력

            for(int i = 0; i<list.Length; i++)
                Console.WriteLine(list[i]);
        }
    }
}
