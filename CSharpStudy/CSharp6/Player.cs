using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using System.Text;

namespace CSharp6
{
    public enum PlayerType
    {
        None = 0,
        Knight = 1,
        Archer = 2,
        Mage = 3
    }

    class Player : Creature
    {
        protected PlayerType type = PlayerType.None;

        protected Player(PlayerType type) : base(CreatureType.Player)
            // Creature.cs > enum CreatureType > Player (1)
        {
            this.type = type;
        }
        // 플레이어 타입을 검증해주는 코드.


        public PlayerType GetPlayerType() { return type; }


    }

    class Knight : Player
    {
        public Knight() : base(PlayerType.Knight)  // 생성자로 자기 부모님의 생성자를 호출한다.
        {
            SetInfo(100,10);
        }
    }
    class Archer : Player 
    {
        public Archer() : base(PlayerType.Knight)  // 생성자로 자기 부모님의 생성자를 호출한다.
        {
            SetInfo(75, 12);
        }
    }
    class Mage : Player 
    {
        public Mage() : base(PlayerType.Knight)  // 생성자로 자기 부모님의 생성자를 호출한다.
        {
            SetInfo(50, 70);
        }
    }
}
