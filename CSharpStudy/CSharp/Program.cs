using System;
using System.Runtime.InteropServices;
using System.Text.Json;

namespace CSharp
{
    class Program
    {


        enum ClassType  // ClassType 이라는 이름의 enum (열거형)을 사용해서, ClassType이라는 클래스를 만들었다
        {
            None = 0,
            Knight = 1,
            Archer = 2,
            Mage = 3
        }

        struct Player
        {
            public int hp;
            public int attack;
            //public ClassType type;
        }

        enum MonsterType
        {
            None = 0,
            Slime = 1,
            Orc = 2,
            Skeleton = 3
        }

        struct Monster
        {
            public int hp;
            public int attack;
        }

        // 직업 선택
        static ClassType ChoiceClass()
        {
            Console.WriteLine("직업을 선택하세요!\n[1] 기사\n[2] 궁수\n[3] 법사\n");
            string input = Console.ReadLine();

            ClassType choice = ClassType.None;

            switch (input)
            {
                case "1":
                    choice = ClassType.Knight;
                    Console.WriteLine("기사입니다.\n");
                    break;  // break는 코드를 다 끝내는게 아니라 한단계 나가는 것임.
                case "2":
                    choice = ClassType.Archer;
                    Console.WriteLine("궁수입니다.\n");
                    break;
                case "3":
                    choice = ClassType.Mage;
                    Console.WriteLine("법사입니다.\n");
                    break;
            }
            return choice;
            // 반환하는 것은 죽기전에 이 값을 복사해달라고 요청하는 다잉메시지이므로... 외부에서도 사용이 가능하다.
        }

        // 유저 생성
        static void CreatePlayer(ClassType choice, out Player player)// 값들을 복사해서 쓰는게 아니라 진퉁으로 쓰겠다. 정말 진ㅌ눙으로 작업할 수 있어? out으로 표시
        {
            //player.type = choice;
            switch (choice)
            {
                case ClassType.Knight:
                    player.hp = 100;
                    player.attack = 10;
                    break;
                case ClassType.Archer:
                    player.hp = 75;
                    player.attack = 12;
                    break;
                case ClassType.Mage:
                    player.hp = 50;
                    player.attack = 15;
                    break;
                default:
                    player.hp = 0;
                    player.attack = 0;
                    break;
            }
        }

        // 몬스터 랜덤 생성
        static void CreateRandomMonster(out Monster monster)    // out(진퉁값)으로 받으나 return값으로 받으나 상관없지만 아까 return으로 해봤으니 이번엔 out사용해보겠다)
        {
            Random rand = new Random();
            int randMonster = rand.Next(1, 4);    // 1-3 사이의 숫자가 나옴

            switch(randMonster)
            {
                case (int)MonsterType.Slime:    // enum 타입을 정수로 받기위해 형변환
                    Console.WriteLine("슬라임이 스폰되었습니다!");
                    monster.hp = 20;
                    monster.attack = 2;
                    break;
                case (int)MonsterType.Orc:
                    Console.WriteLine("오크가 스폰되었습니다!");

                    monster.hp = 40;
                    monster.attack = 4;
                    break;
                case (int)MonsterType.Skeleton:
                    Console.WriteLine("스켈레톤이 스폰되었습니다!");

                    monster.hp = 30;
                    monster.attack = 3;
                    break;
                default:
                    monster.hp = 0;
                    monster.attack = 0;
                    break;

            }

            // 랜덤으로 1~3 몬스터 중 하나를 리스폰.

        }

        static void Fight(ref Player player, ref Monster monster)
        {
            // 한턴. 플레이어가 그래도 주인공이니까 먼저 선빵을 치자.
            while (true)
            {
                // 플레이어가 몬스터 공격
                monster.hp -= player.attack;
                if (monster.hp <= 0)
                {
                    Console.WriteLine("승리했습니다!");
                    Console.WriteLine($"남은 체력 : {player.hp}");
                    break;
                }

                // 몬스터 반격
                player.hp -= monster.attack;
                if (player.hp <= 0)
                {
                    Console.WriteLine("패배했습니다!");
                    break;
                }

                /* 문제 : 현재 복사본을 받아서 작업을 하고 있다.
                 * 즉, 피를 깎는다고 해도, Main쪽에서 정의한 Player player에겐 영향이 없다. 그래서 <ref>를 붙여야함. 
                 */
            }
        }

        // 필드 진입
        static void EnterField(ref Player player)
        {
            while (true) { 
            Console.WriteLine("필드에 접속했습니다!");

            // 랜덤으로 1~3 몬스터 중 하나를 리스폰.
            
            // 몬스터 생성
            Monster monster; // 구조체로 선언해준 플레이어를 생성해준다. 기본적으로 씨샵문법에서 지원해주는 유형이 아니라 우리가 새로 만들어준 유형이다.
            CreateRandomMonster(out monster);


            Console.WriteLine("[1] 전투 모드로 돌입");
            Console.WriteLine("[2] 일정 확률로 마을로 도망");

                string input = Console.ReadLine();
                if(input == "1")
                {
                    // 자동사냥게임이라 생각하고 한대씩 치고받는걸 구현해보겠다.
                    // Fight(player, monster);  // monster는 안에 있는데, player는 없다. main에서 돌고있으니... 어떻게든 player를 갖고오는 방법을 생각해보자. 나중에는 전역으로 선언하면 되지만 지금은 함수로 넘겨줄 수 밖에 없음.
                    // Fight()에다가 player를 넘겨주기 위해서 3번이나 길을 뚫어준다. (받아오는 인수로다가.. 받아오고 싶은 값이 있으면 함수 인자로 추가해주고 또 추가해주고 그런식으로 사용하나봄.)
                    Fight(ref player, ref monster);
                }

                // 일정확률로 도망. 33%. 확률을 구현하는 방법은 다양한 방법이 있지ㄴ만 일단 구현해보겠다.
                else if(input =="2")
                {
                    Random rand = new Random();
                    int randValue = rand.Next(0, 101); // 0부터 100까지 숫자를 랜덤밸류로 저장.
                    if (randValue <= 33)
                    {
                        // 33프로 확률에 걸린거니까
                        Console.WriteLine("도망치는데에 성공했습니다!");
                        break;
                    }
                    else
                    { 
                        Fight(ref player, ref monster); 
                    }
                }
            }
            // while으로 몬스터를 만났으면 끝장을 보도록 가둬보았다.
        }

        static void EnterGame(ref Player player)
        {
            while (true)
            {
                Console.WriteLine("게임에 접속했습니다!");
                Console.WriteLine("[1] 필드로 간다");
                Console.WriteLine("[2] 로비로 돌아가기");

                // input
                string input = Console.ReadLine();

                if(input == "1")
                {
                    EnterField(ref player);    
                }
                else if(input == "2")
                { 
                    break; 
                }
                

                // switch를 쓰는 경우
                //switch (input)
                //{
                //    case "1":
                //        // EnterField();

                //        break;
                //    case "2":

                //        return; // break;와 return ... return 을 때리면 switch문만 빠져나가는게 아니라(Break) while문 자체를 빠져나가게 된다. 그래서 함수에서 빠져나와서 다음줄이 실행되게 됨.
                //}
            }

        }


        static void Main(string[] args)
        {
            while (true) { 
            ClassType choice = ChoiceClass();   // choiceClass로 반환하는 값을 choice라는 이름의 변수로 받아온다.
            if (choice == ClassType.None) 
               continue;   // 여기 continue를 넣어줘야 보기 편한것 같다 (라고 하심)
            
            // 캐릭터 생성
            Player player; // 구조체로 선언해준 플레이어를 생성해준다. 기본적으로 씨샵문법에서 지원해주는 유형이 아니라 우리가 새로 만들어준 유형이다.
                 
            CreatePlayer(choice, out player);
            // 필드로 가서 몬스터랑 싸운다

            // Console.WriteLine($"HP{player.hp} Attack{player.attack}");
            // $는 중간에 변수로 인자를 넣을 수 있게끔 해주는 것이다. {} 이런 형태로 묶어서 인자를 넣을 수 있음. {0} {1} 이렇게 해서 뒤에 쉼표를 넣어줄수도 있고 지금처럼 {변수명}으로 넣을수도 있음.

            EnterGame(ref player);  // F12를 누르면 바로 확인 가능.
            
            }
        }          
       
    }
}

/* 언제 함수를 만들어야 하는가?
 * 코드가 좀 길어질때. 기능을 가져야 하는 때에 함수를 만들어서 기능을 관리하게끔 만든다.
 * 현재 상황에선, Main문에서 코드가 길어지는게 기분이 나쁘니까,
 * 직업선택을 함수로 빼버리면 된다.
 */ 


/* 이리저리 코드들을 분리해서 관리할 수 있는게 프로그래밍의 좋은 점이다.
 */

