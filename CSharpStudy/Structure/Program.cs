using System;
using System.Drawing;

namespace Structure
{
    struct Point3D
    {
        public int X;
        public int Y;
        public int Z;

        public Point3D(int X, int Y, int Z)
        {
            this.X = X;
            this.Y = Y;
            this.Z = Z;
        }

        public override string ToString()
        {
            return string.Format($"{X},{Y},{Z}");
        }
    }

    class MainApp
    {
        static void Main(string[] args)
        {
            Point3D p3d1;   // 생성자 없이도 선언만으로도 인스턴스 생성이 가능.
            p3d1.X = 10;
            p3d1.Y = 20;
            p3d1.Z = 40;

            Console.WriteLine(p3d1.ToString());

            Point3D p3d2 = new Point3D(100, 200, 300);  // 물론 생성자를 이용한 인스턴스 또한 생성 가능... 하지만 매개변수를 꼭 넣어줘야 한다구함.
            Point3D p3d3 = p3d2;    // 값형식이기 때문에 깊은 복사가 이루어짐.
            p3d3.Z = 400;

            Console.WriteLine(p3d2.ToString());
            Console.WriteLine(p3d3.ToString());

        }
    }
}
