using System;

namespace CSharp14_예외처리
{
    // 예외처리. 게임쪽에서는 쓸지 안쓸지 모르겠긴 하다.
    // 예외가 발생하면 캐치를 해갖고, 어떻게든 처리를 해보겠다.

    // 1. 프로그램이 정상적으로 돌아가지 않는 경우.

    class Program
    {
        class TestException : Exception
        {
        }

        static void Main(string[] args)
        {
            try
            {
                // 1. 0으로 나눌 때
                // 2. 잘못된 메모리를 참조 (null을 갖고있는 참조형 변수 or 캐스팅을 잘못해서 잘못된 타입으로 갖고있는 경우)
                // 3. 너무 많이 복사해서 오버플로우가 일어났다.
                // ......

                int a = 10;
                int b = 0;
                int result = a / b;

                int c = 0;

                throw new TestException();  // 던지면 누군가 받아줄거다
            }

            catch (DivideByZeroException e)
            {

            }

            catch (Exception e)
            {

            }

            finally
            {
                // DB, 파일 정리 등등
            }
        }
    }
}
