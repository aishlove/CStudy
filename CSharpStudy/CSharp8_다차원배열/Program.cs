using System;

namespace CSharp8_다차원배열
{
    class Program
    {
        class Map
        {
            int[,] tiles =
            {
                {1,0,0,0,0 },
                {1,1,1,1,1 },
                {0,0,0,0,1 },
                {0,0,0,0,1 },
                {1,0,0,0,0 }
            };

            public void Render()
            {
                var defaultColor = Console.ForegroundColor;

                for (int y = 0; y<tiles.GetLength(1); y++)
                {
                    for(int x = 0; x < tiles.GetLength(0); x++)
                    {
                        if (tiles[y, x] == 1)
                            Console.ForegroundColor = ConsoleColor.Red;
                        else
                            Console.ForegroundColor = ConsoleColor.Green;
                        Console.Write('\u25cf');
                    }
                    Console.WriteLine();
                }

                Console.ForegroundColor = defaultColor;
            }
        }
        static void Main(string[] args)
        {
            //int[] scores = new int[5] { 10, 30, 40, 20, 50 };

            //int[,] arr = new int[2, 3] { {1,2,3 },{1,2,3 } };     // 2 x 3
            //int[,] arr2 = new int[,] { { 1, 2, 3 }, { 1, 2, 3 } };
            //int[,] arr3 = { { 1, 2, 3 }, { 1, 2, 3 } };

            //// 2F {  ,  ,  ,  }
            //// 1F {  ,  ,  ,  }

            //arr[0, 0] = 1;
            //arr[1, 0] = 1;
            // 좌표 두개를 사용해서 접근한다.

            Map map = new Map();
            map.Render();


            ////////////////
            int[,] map2 = new int[2, 3];

            // [ , , ]
            // [ , , , , , , ]
            // [ , , , ]
            int[][] a = new int[3][];
            a[0] = new int[3];
            a[1] = new int[6];
            a[2] = new int[2];

            a[0][0] = 1;
            

        }
    }
}
