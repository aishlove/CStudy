using System;
using System.Reflection.Metadata.Ecma335;

namespace 자료구조_001
{
    // 1. 빅오 Big-O 표기법 설명 (텍스트 파일 참고)
    // 2. 환경설정 (vs 2019)    - 콘솔을 예쁘게 출력하는 것

    /*
     * 프로그램이 시작될 떄 메인함수 Main가 하나씩 있다. (언리얼을 사용하건 유니티를 사용하건...)
     * 
     * 일반적ㅇ로, 메인 루프가 하나 있다. 무한루프를 계속 돌면서 뺑뻉이를 돌면서 뭔가를 실행한다.
     * 버튼을 눌러서 종료하지 않는 이상 게임은 무한대로 실행이 된다.
     * 
     * - 입력 : 사용자가 키보드나 마우스를 입력하여 인풋을 감지한다.
     * - 로직 : 인풋에 따라 게임로직이 실행된다. (키보드를 누르면 위로 움직인다...) AI라던가 기타 로직들을 다 실행하고.
     * - 렌더링 : 렌더링 단계에서 게임 화면을 예쁘게 출력해준다. (그래픽스 라이브러리를 이용해서...)
     * 
     * 모든 게임들은 이러한 세 가지 단계로 게임은 구분된다.
     * 온라인이나 MMO를 만들때는 다른가요? >> 아니다. 대부분 비슷하다. 로직이 서버라는 원격컴퓨터에서 연산이 되고있다 뿐이지 나머지는 다를바가 없다.
     */

    class Program
    {
        static void Main(string[] args)
        {
            Console.CursorVisible = false;      // 커서가 안보이게 한다.

            const int WAIT_TICK = 1000 / 30;
            const char CIRCLE = '\u25cf';

            int lastTick = 0;
            

            while (true)
            {

                // FPS 프레임 (60프레임 OK  // 30프레임 이하로 NO  
                //              >> 프레임이란? 이 루프가 1초에 몇번 실행되고 있느냐. 부드럽게 보인다는 것은 짧은 시간에 여러번 계싼해서 화면을 자주 갱신해준다는 소리다.)
                //      >> 프레임 관리를 하기 위해서는 시간을 계속 체크를 해줘야 한다는 거다.

                #region 프레임 관리
                int currentTick = System.Environment.TickCount;                     
                // TickCount : 몇시 몇분 몇초같은 절대적인 시간의 개념은 아니다. 어떤 특정 기준(시스템 시작) 이후에 경과된 ms를 뱉어주는 아이이다. 나중시간과 현재시간의 차이만 알려주면 되기 때문에 얘를 사용할 것.
                // 만약 경과한 시간이 1/30 보다 작다면,
                if (currentTick - lastTick < WAIT_TICK)
                    continue;                    // 계속 진행한다.
                lastTick = currentTick;

                // 기능을 구현했는데 굳이 보고싶지 않을 때, #region / #endregion 을 사용해서 묶어서 접는다.
                #endregion

                Console.SetCursorPosition(0, 0);    // 커서의 위치를 0,0으로 지정함.

                for (int i = 0; i<25; i++)
                {
                    for (int j=0; j<25; j++)
                    {
                        Console.ForegroundColor = ConsoleColor.Green;
                        Console.Write(CIRCLE);
                    }
                    Console.WriteLine() ;
                }
            }


        }
    }
}
