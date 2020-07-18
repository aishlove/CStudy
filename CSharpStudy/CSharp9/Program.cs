using System;
using System.Collections.Generic;

namespace CSharp9
{
    class Program
    {
        class Monster
        {
            public int id;

            public Monster(int id) { this.id = id; }
        }
        static void Main(string[] args)
        {
            List<int> list = new List<int>();

            // ID 식별자
            // 10(공격) 103(몬스터아이디) ID 몬스터
            // 이런식으로 해서 클라랑 서버랑 통신하면서 정보를 교류함.

            // Dictionary - 실제로 사전을 찾는 것처럼 굉장히 빠르게 작동함. 두가지의 값을 넣게 된다.

            Dictionary<int, Monster> dic = new Dictionary<int, Monster>();
            // 키만 알면 뒤의 밸류를 굉장히 빨리 찾을 수 있다는 특징이 있다.


            for (int i = 0; i<10000; i++)
            {
                dic.Add(i, new Monster(i));
            }

            Monster mon = dic[5000];

            //dic.Add(1, new Monster(1));

            //dic[5] = new Monster(5);

            Monster mon2;
            bool found = dic.TryGetValue(20000, out mon2);

            dic.Remove(7777);
            dic.Clear();
            

            /* 딕셔너리는 어떻게 생겨먹었길래 이렇게 빠르게 데이터를 찾을 수 있는가?
             * Hashtable
             * 아주 큰 박스 [ . . . . . ... . . ] 1만개 (1~1만)
             * 박스 여러개를 쪼개 놓는다 [ 1`10 ]  [11~20] [ ] [ ] [ ] [ ][ ] [ ]  1천개. 공들을 잘 배분해서 10개씩 집어넣는 개념. 
             *                          이렇게 쪼개놓으면 그냥 있는것보다 훨씬 더 쉽게 찾을 수 있을 것이다.
             *                          박스를 엄청 많이 준비한다음에, 특정 번호의 데이터를 찾고자 할 때 어떤 박스에 있는지 
             *                          빠르게 찾는 방법이 바로 해쉬테이블을 이용하는 방법이다.
             *                          리스트보다 훨씬 빨리 사용할 수 있지만, 메모리상에서 상당히 큰 손해를 볼거다
             *                          >> 메모리를 내주고 성능을 취한다.
             */
                
        }
    }
}
