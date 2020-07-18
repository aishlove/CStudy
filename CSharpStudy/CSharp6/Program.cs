using System;

// 텍스트 알피지 버전 2.

namespace CSharp6
{


    class Program
    {
        static void Main(string[] args)
        {
           
            //// 네임스페이스만 같으면 같은 파일처럼 사용가능
            //Player player = new Knight();
            //Player player2 = new Archer();
            //Monster monster = new Orc();

            //int damage = player.GetAttack();
            //monster.OnDamaged(damage);

            Game game = new Game();

            while(true)
            {
                game.Process();
            }
        }
    }
}



/*
 * 살아있는 몬스터 말고도 게임에 존재하는 애들도 충분히 객체로 만들 수 있다.
 * 이에 대한 용어는 다양하게 존재하지만, Game이라는 클래스로 관리하겠다.
 */