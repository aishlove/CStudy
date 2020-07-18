using System;
using System.Collections.Generic;

namespace CSharp9_List
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10];
            arr[0] = 1;

            // List <>  동적 배열 
            List<int> list = new List<int>();
            for (int i = 0; i<5; i++)          
                list.Add(i);

            // 삽입 삭제
            /* list.Add :  얘는 무조건 맨 뒤에 숫자를 삽입한다.
             * list.Inster(index, item) : 어디에 무엇을 넣고싶습니까? 라고 질문하는 것.
             */

            bool success = list.Remove(3); // (first occurence 처음만난) 3번 <값(숫자)>을 지운다.
            list.RemoveAt(0); // 인덱스로 접근해서 지운다.
            list.Clear();   // 싹 다 날려버린다.


            for (int i = 0; i<list.Count; i++)
                Console.WriteLine(list[i]);

            foreach(int num in list)
                Console.WriteLine(num);


            //list.Insert(2, 999);

            /*
             * 리스트는 사용했을 경우, insert나 remove를 사용했을 때, 데이터가 떙겨지거나 밀리는 등의 일이 생김.
             * 필연적으로 값이 복사될 수밖에 없어서 효율적인편은 아니다.
             */



        }
    }
}
