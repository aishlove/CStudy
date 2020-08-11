using System;
using System.Reflection;

// 일상 코딩에서 많이 쓰는 개념은 아니지만, 중요하다.
// 리플렉션 : 엑스레이를 찍는 것이다.
// [SerializeField] 가 [Attribute] 를 사용하는 것이다.

namespace CSharp15_리플렉션
{
    class Program
    {
        class Important : System.Attribute
        {
            string message;

            public Important(string message) { this.message = message; }
        }

        // Attribute : 컴퓨터가 런타임에 체크할 수 있는 주석이다.
        class Monster   // 클래스의 이름이 몬스터이고, 어떤 함수를 들고있는지도 알수있고. 말그대로 모든 정보들을 다 빼낼 수 있다.
        {
            // hp 입니다. 중요한 정보입니다. (주석은 사람대 사람이 정보를 전달하기 위한 참고사항일 뿐... 컴퓨터 입장에서는 컴파일도 안함. (이거 이용해서 스토리 짜보면?)
            
            [Important("very important!")] 
            public int hp;
            protected int attack;
            private float speed;

            void Attack()
            {

            }
        }

        static void Main(string[] args)
        {
            // Reflection : X-Ray
            // 런타임중에, 갖고있는 인자들에 대해 뜯어보고 살펴볼 수 있게 된다. 왜 대단한지 살펴보쟝...
            Monster monster = new Monster();

            monster.GetType();  // GetType : 씨샵에서 만드는 모든 객체들은 Object에서 파생되어서. 이런 애들이 존재한다.
            monster.ToString();

            // 암튼 GetType()을 하면 몬스터의 타입을 뺴올 수 있다.
            
            Type type = monster.GetType();

            var fields = type.GetFields(System.Reflection.BindingFlags.Public
                | System.Reflection.BindingFlags.NonPublic
                | System.Reflection.BindingFlags.Static
                | System.Reflection.BindingFlags.Instance);   // 어떤 정보를 뺴올지 입력해야 한다.

            

            foreach (FieldInfo field in fields)
            {
                string access = "protected";
                if (field.IsPublic)
                    access = "public";
                else if (field.IsPrivate)
                    access = "private";

                var attrivutes = field.GetCustomAttributes();

                Console.WriteLine($"{access}{field.FieldType.Name}{field.Name}");
            }
        }
    }
}
