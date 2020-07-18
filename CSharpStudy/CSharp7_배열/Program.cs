using System;
using System.ComponentModel.DataAnnotations;

namespace CSharp7_배열
{
    class Program
    {
        static void Main(string[] args)            
        {
            static int GetHighestScore(int[] scores)
            {
                int maxScore = 0;

                
                    for(int i=0; i<5; i++)
                    {
                        if (scores[i] > maxScore)
                        {
                            maxScore = scores[i];
                        }
                    }
                
                Console.WriteLine($"제일 큰 숫자는{maxScore} 입니다.");
                return 0;
            }

            static int GetAverageSocre(int[] scores)
            {
                int sum = 0;
                int averageInt = 0;
                int i = 0;
               // int index;

                for (i = 0; i < 5; i++)
                {
                    sum += scores[i];
                }
                averageInt = sum / i;
                Console.WriteLine($"평균 값은 {averageInt} 입니다.");

                return 0;
            }
            static int GetIndexOf(int[] scores, int value)
            {
                for(int i = 0; i<5; i++)
                {
                    if (value == scores[i]) 
                    {
                        //int IndexNumber = scores[i];
                        Console.WriteLine($"찾았다 {scores[i]}!");
                    }
                }

                return -1;
            }
            // 내가 찾는 값이 있으면 해당 값의 인덱스를 반환.
            // 없으면 -1을 반환.

            static void Sort(int[] scores)
            {
                /* 소팅 알고리즘엔 종류가 상당히많다.
                 * 왕을 뽑는 것. 이게 가장 직관적인 알고리즘이 아닐까...
                 * 이건 뭔가 할때마다 헷갈리는듯
                 */

                for (int i =0; i < scores.Length; i++)
                {
                    // [i~scores.Length -1] 제일 작은 숫자가 있는 인덱스를 찾는다.
                    int minIndex = i ;
                    for (int j = i; j < scores.Length; j++)
                    {
                        if(scores[j] < scores[minIndex])
                        {
                            minIndex = j;
                        }
                    }

                    // swap
                    int temp = scores[i];   
                    // 값을 직접 덮어씌우지 않게끔 임시값으로 저장해줌
                    scores[i] = scores[minIndex];
                    scores[minIndex] = temp;
                    // 값을 토스할거니깐 일단 가장 작던 값을 temp에 다시넣어줌

                }

            }
            // 소팅 함수.


            // 배열은 참조타입
            int[] scores = new int[5] { 50, 30, 20, 40, 10 };
            int[] scores2 = scores;
            // 나중에 바꾸더라도, 앞의 값도 바뀌어 있다.

            GetHighestScore(scores);
            GetAverageSocre(scores);
            GetIndexOf(scores, 50);
            Sort(scores);
            for (int i = 0; i < scores.Length; i++)
            {
                Console.WriteLine(scores[i]);
            }

            //scores[0] = 10;
            //scores[1] = 20;
            //scores[2] = 30;
            //scores[3] = 40;
            //scores[4] = 50;

            //for (int i = 0; i < scores.Length; i++)
            //{
            //    Console.WriteLine(scores[i]);

            //}
            //// c++ 초기 스타일

            //foreach(int score in scores)
            //{
            //    Console.WriteLine(score);
            //}
            // 가독성이 좋음

            // 아랫버전을 사용한다면 인덱스 실수를 예방할 수 있다는 장점이 있다.

        }



    }
}
