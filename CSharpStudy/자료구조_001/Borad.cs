using System;
using System.Collections.Generic;
using System.Text;

namespace 자료구조_001
{
    class Borad
    {
        // 우리가 만든 정보를 어떤식으로 들고있어야 할까? >> 가장 쉬운건 배열.


        // 세 가지 유형의 데이터 관리 방식이 어떤 차이를 가지고 있는지를 확실히 알아보자.

        /* 일럴로 생겨먹은 데이터를 관리하기 쉬운 것이 
         * 
         * 선형 자료 구조 :
         *
         * - 배열
         * - 연결 리스트
         * - 스택 / 큐
         * 
         * 비선형 구조 : 하나의 자료 뒤에 다수의 자료가 올 수 있는 형태.
         * 
         * - 트리
         * - 그래프
         * 
         * 비선형이 좀더 어렵긴 한데 지금 얘기하진 않을거다.
         *
         */

        public int[] _data = new int[25];   // 배열 
        public List<int> _data2 = new List<int>();  // 동적 배열
        public LinkedList<int> _data3 = new LinkedList<int>();  // 연결 리스트

        // 프로그래밍은 데이터를 잘 꺼내고 활용하는게 프로그래밍이고 게임이다.

        public void Initialize()
        {

        }
    }
}
