using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp12_Event
{
    class InputManager
    {
        // Observer pattern 

        // 외부에서 사용하는건 대문자로 (쌤 스타일)
        public delegate void OnInputKey();  // 델리게이트는 함수 자체를 인자로 넘기고자 할때 유리하다.

        // 델리게이트 다 좋은데 외부에서도 함부로 호출하는게 문제여서, 이를 한번 더 랩핑한 것이 이벤트 이다.

        public event OnInputKey InputKey;   // 구독자 모집
        
        // 이벤트랑 인풋키랑 한정자를 맞춰줘야한다(일관성)

        public void Update()
        {
            if (Console.KeyAvailable == false)
                return;
            ConsoleKeyInfo info = Console.ReadKey();
            if(info.Key == ConsoleKey.A)    // 만약 A를 입력했다면
            {
                // 모두한테 알려준다!   << 이 부분을 어떻게 만들어줄까?

                // 여기다가 코드를 강제로 넣는것은 굉장히 비효율적...
                // 다른 코드랑 InputManager와의 의존성을 늘리지 말자. >> 이때 사용하는 것이 <콜백> 방식.
                // <콜백>을 만들떄 사용하는 것이 <델리게이트>

                InputKey();

            }
        }

    }
}
