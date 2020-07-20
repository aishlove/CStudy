using System;
using System.Collections;
using System.Collections.Generic;

namespace CSharp
{
    class Program
    {
        /* 
         * delegate : 대리자
         * 현재 설명하는 [ 기타 문법 ] 중 가장 중요한 문법이라 할 수 있다. 

            지금까지는 코드를 작성할 떄, 굉장히 직관적이고 순차적으로 코드를 만들었는데...
            상황에 따라서, 순차적이 아니라 상대방에게 거꾸로 뭔가를 해달라고 요청해야되는 상황이 발생할 수 있다.

            ex) 어떤 업체의 사장님과 통화를 하고 싶다. (상대업체)
                사장님한테 직통연결하면 좋긴 하겠지만, 보통 비서가 있을것이다.

        가장 대표적인 경우 : UI 버튼을 누를 때.

        */

        delegate int OnClicked();   // 근데 델리게이트는 함수가 아니라 [ 형식 ] 이다.
                                    // delegate -> 형식은 형식인데, 함수 자체를 인자로 넘겨주는 그런 형식.

        // 반환 : int     입력 : void       이다.
        // Onclicked 이 delegate 형식의 이름이다. 
        // Onclicked 이 delegate 형식의 이름이다. 

        // 이 델리게이트 구문을 보고, 상기의 세 가지 것만 알면 된다.


        static void ButtonPressed(OnClicked clickedFunction/* 함수 자체를 인자로 넘겨주고 */)
        {
            // 함수를 호출(); : 이렇게 역으로 연락하게끔 하는 방식을, 콜백 방식이라고 함. (비서한테 사장님한테 연락달라고 하고 나중에 연락주는것)
            clickedFunction();
        }

        static int TestDelegate()
        {
            Console.WriteLine("Hello Delegate!");
            return 0;
        }

        static int TestDelegate2()
        {
            Console.WriteLine("Hello Delegate!2");
            return 0;
        }



        static void Main(string[] args)
        {
            Console.WriteLine();

            OnClicked clicked = new OnClicked(TestDelegate);        // TestDelegate 호출
            clicked += TestDelegate2;                               // TEstdelegate2를 연이어 호출 (가능)


            //ButtonPressed(TestDelegate);
            ButtonPressed(clicked);

            // 말 그대로 함수 자체를 인자로 넘긴것 같은 느낌.
            
        }
    }
}



/* 
    델리게이트의 치명적인 단점... 델리게이트 객체를 아무나 다 호출할 수 있다는게 상당히 큰 문제가 될 수 있다.

 */