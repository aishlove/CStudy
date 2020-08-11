using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp6
{
    public enum MonsterType
    {
        None =0,
        Slime =1,
        Orc = 2,
        Skeleton = 3
    }

    class Monster : Creature
    {
        protected MonsterType type = MonsterType.None; // 타입을 저장할 변수
        protected Monster(MonsterType type) : base(CreatureType.Player)
        {
            this.type = type;
        }

        public MonsterType GetMonsterType() { return type; }
    }

    class Slime : Monster 
    {
        public Slime() : base(MonsterType.Slime) 
        {
            SetInfo(10, 1);
        }
    }
    class Orc : Monster
    {
        public Orc() : base(MonsterType.Orc) 
        {
            SetInfo(20, 2);
        }

    }
    class Skeleton : Monster
    {
        public Skeleton() : base(MonsterType.Skeleton) 
        {
            SetInfo(15, 5);
        }

    }
}
