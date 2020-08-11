using System;
using System.Xml.Schema;

namespace CSharp16_널러블          // Nullable -> Null + able
{
    class Program
    {
        // 여기서 Null 을 반환할 수 있는 이유 : class(참조)를 사용하기 때문에.
        //class Monster
        //{

        //}

        //static Monster FindMonster(int id)
        //{
        //    // for()
        //    // return monster;
        //    return null;
        //}

        // 하지만 그냥 int값을 반환하는 경우라면? Null 값을 반환할수가 없다. (값형식이므로)
        // 이럴 때 사용하는 것이 널러블으로, 일반적인 변수를 사용하는 것과 비슷하다.
        static int Find()
        {
            return 0;
        }

        class Monster
        {
            public int Id { get; set; }
        }
        

        static void Main(string[] args)
        {
            Monster monster = null;

            if(monster != null)
            {
                int monsterId = monster.Id;
            }
            int? id = monster?.Id;

            // ^ 위의 한줄식이 이거랑 같은 내용을 줄인 것.
            if(monster == null)
            {
                id = null;
            }
            else
            {
                id = monster.Id;
            }

            //Monster monster = FindMonster(101);
            //if (monster != null)
            //{

            //}

            //int? number = null;    // ?를 붙여주면 null 도 될 수 있다는 문ㅂ법이 된다.
            int? number = 9;
            int b = number ?? 0;
            // number가 null이 아니라면, number.Value를 뽑아와서 넣어주고, 아니면 초기값으로 입력한 ?? 뒤의 값을 넣어줘라.
            Console.WriteLine(b);


            number = 3;
            // 3을 넣어도 문제없이 들어간다.

            //꺼내와보자.
            //  int a = number; //못꺼낸다. int형식과 nullable형식을 변환불가능하다.
            //int a = number.Value;   // value를 직접 꺼내서 사용하면 잘 실행된다.
            Console.WriteLine(b);

            // number에 3을 넣지 않고, 실행을 하면 (null상태이면) 프로그램이 뻗어버린다.
            // 반드시 nul인지 아닌지 체크해야 되는 것이다.

            if(number != null)
            {

            }

            if(number.HasValue) // 값이 있는지 없는지 체크하는 아이
            {
                int a = number.Value;
                Console.WriteLine(a);
            }
        }
    }
}


/*
 * Nullabe 을 많이 사용하지는 않는데, DB 작업이나 그럴떄 사용하는 경우가 종종있다.
 * 삼항연산자 활용한 문법.
 * 
 * null
 * ??
 * ?.   null 체크하기가 귀찮으니까 한줄에 한번에 사용가능하게 만든 문법.
 * int? id = monster?.id;
 */
