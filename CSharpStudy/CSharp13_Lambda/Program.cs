using System;
using System.Collections.Generic;
using System.Reflection.Metadata.Ecma335;
using System.Runtime.InteropServices;


// Lambda : 일회용 함수를 만드는 데 사용하는 문법이다. (딱 한번 사용해야 하는 함수를 만들어야 할떄가있다...
/* 왜 필요한가? (예시)

어떤 가상의 인벤토리 시스템을 만들어 볼거다. 
 */


namespace CSharp13_Lambda
{

    enum ItemType
    {
        Weapon, Armor, Amulet, Ring
    }

    enum Rarity 
    {
        Normal, Uncommon, Rare,
    }

    class Item
    {
        public ItemType ItemType;
        public Rarity Rarity;
    }



    class Program
    {
        // 가상의 인벤토리처럼 아이템 리스트를 갖고있게 할것...
        static List<Item> _items = new List<Item>();

        //// 게임을 만들다보면 인벤토리를 체크해서 어떤 내용이 있는지 자주 조회하고 싶을 수 있다.
        //// 인벤에서 무기를 찾고 싶다 or 희귀한 아이템이 있는지 없는지 찾고싶다... 별별 상황이 다 있을수 있다.
        //// 그런 상황이 발생했다고 칠때,

        //// 1. Find 함수를 하나하나 만든다.

        //static Item FindWaepon()
        //{
        //    // weapon타입이 있는지 없는지 체크해서 하나하나 반환한다.
        //    foreach(Item item in _items)
        //    {
        //        if (item.ItemType == ItemType.Weapon)
        //            return item;
        //    }
        //    return null;
        //}

        //static Item FindRareWaepon()
        //{
        //    // Rare 타입이 있는지 없는지 체크해서 하나하나 반환한다.
        //    foreach (Item item in _items)
        //    {
        //        if (item.Rarity == Rarity.Rare)
        //            return item;
        //    }
        //    return null;
        //}

        //// ... 이런식으로 필요에 따라 함수를 늘리는 것은 무식한 방식이라고 할 수 있다.
        //// 인벤토리를 서칭하는 부분을 복붙해서 계속 붙여넣는것은 상당히 끔직한일이다.
        //// 조금 더 우아한 방법을 생각해보자. >> 델리게이트를 사용하는 방법.
        //// Find함수 안에 조건판별식을 넣어서 우아하게 만들어보자.

        static bool IsWeapon(Item item)
        {
            return item.ItemType == ItemType.Weapon;
        }

        //delegate bool ItemSelector(Item item);
        delegate Return MyFunc<T, Return>(T item);
        // <Generic>

        static Item FindItem(ItemSelector selector)
        {
            foreach(Item item in _items)
            {
                if (selector(item))
                    return item;
            }
            return null;
        }

        // (pre-made delegate) 델리게이트를 직접 선언하지 않아도, 이미 만들어진 애들이 존재한다.
        // -> 반환 타입이 있을 경우 Func
        // -> 반환 타입이 없으면 Action


        static void Main(string[] args)
        {
            // 아이템 세개 추가
            _items.Add(new Item() { ItemType = ItemType.Weapon, Rarity = Rarity.Normal });
            _items.Add(new Item() { ItemType = ItemType.Armor, Rarity = Rarity.Uncommon });
            _items.Add(new Item() { ItemType = ItemType.Ring, Rarity = Rarity.Rare });


            Item item = FindItem(IsWeapon);

            // 근데 조건을 넣을때마다 또 함수를 하나씩 늘이는게 또 덕지덕지 별로다. 아쉽다. 어떻게해야할까?
            // >> 일회용으로 사용하고 버릴 수 있는 함수 문법이 있으면 좋겠네.

            // >>> 또 델리게이트를 사용하면 된다. (일회용함수)

            // Annonymous Function : 무명함수 / 익명함수 (함수에 이름을 안지어서) 람다식은 아님.
            Item item1 = FindItem(delegate (Item item) { return item.ItemType == ItemType.Weapon; });

            // 이마저도 간략하게 만들고 싶다... >> 람다식
            Item item2 = FindItem( (Item item) => { return item.ItemType == ItemType.Weapon; });
            // 입력값 => 반환값 만 입력하면 람다식이다.
            // 꼭 일회용만 사용할 수 있는것은 아니긴하다. 

        }
    }
}
