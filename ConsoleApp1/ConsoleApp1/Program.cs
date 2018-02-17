using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        
        static void Main(string[] args)
        {
            double R=2.0;
            for (int i = 2; i <= 98; i += 3)
            {
                double t = Math.Sqrt(R);
                R += t;
                Console.WriteLine("{0}",R);
            }
            // Console.WriteLine("{0}",R);
            Console.ReadKey();
        }
    }
}
