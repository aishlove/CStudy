using System;
using System.IO;

namespace Interface
{
    interface ILogger
    {
        void WriteLog(string message);
    }

    class ConsoleLogger : ILogger
    {
        public void WriteLog(string message)
        {
            Console.WriteLine(
                "{0} {1}",
                DateTime.Now.ToLocalTime(),
                message
                );
        }
    }

    class FileLogger : ILogger
    {
        private StreamWriter writer;

        public FileLogger(string path)
        {
            writer = File.CreateText(path);
            writer.AutoFlush = true;
        }

        public void WriteLog(string message)
        {
            writer.WriteLine("{0} {1}", DateTime.Now.ToShortDateString(), message);
        }

    }

    class ClimateMonitor    // 얘는 인터페이스를 상속하진 않았다.
    {
        private ILogger logger; // 인스턴스로 ILogger 인터페이스 클래스를 가지고옴.
        public ClimateMonitor(ILogger logger)   // *** 바로 위의 logger instance애랑 받는 매개변수 logger랑 다른애다. (지금까지 같은앤줄 알았다)
        {
            this.logger = logger;   // 받아온 logger를 인스턴스(그릇) logger에 담아준다.
        }

        public void start()
        { 
            while(true)
            {
                Console.WriteLine("온도를 입력해주세요!");
                string temperature = Console.ReadLine(); // 입력 대기
                if (temperature == "")  // 만약 입력에 string이 들어오면 break; (break는 while/for반복문에만 쓰는 것.)
                    break;

                logger.WriteLog("현재온도 : " + temperature );  // 아까 받아온 인스턴스에 logger를 넣은 것을 이용해서 WriteLog로 현재 온도를 찍어낸다.
            }
        }

    }


    class MainApp
    {
        static void Main(string[] args)
        {
            //ClimateMonitor monitor = new ClimateMonitor(
            //    new FileLogger("MyLog.txt"));

            // 비타민 퀴즈
            ClimateMonitor monitor = new ClimateMonitor(new ConsoleLogger());

            monitor.start();

        }
    }
}
