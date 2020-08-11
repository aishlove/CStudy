using System;

namespace Overriding
{
    class ArmorSuite
    {
        public virtual void Initialize()
        {
            Console.WriteLine("Armored.");
        }
    }

    class IronMan : ArmorSuite
    {
        public override void Initialize()
        {
            base.Initialize();
            Console.WriteLine("Tony, Repulsor Rays Armed.");
        }
    }

    class WarMachine : ArmorSuite 
    {
        public override void Initialize()
        {
            base.Initialize();
            Console.WriteLine("Doubble-Barrel Cannons Armed, Tony!");
            Console.WriteLine("Micro-Rocket Launcher Armed, Tony.");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Creating ArmorSuite...");
            ArmorSuite armorsuite = new ArmorSuite();
            armorsuite.Initialize();

            Console.WriteLine("\nCreating IronMan...");
            ArmorSuite ironman = new IronMan();
            ironman.Initialize();

            Console.WriteLine("\nCreating WarMachine...");
            ArmorSuite warmachine = new WarMachine();
            warmachine.Initialize();
        }
    }
}
