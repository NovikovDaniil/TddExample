using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    class Program
    {
        static void Main(string[] args)
        {
            string coeff1 = "0,0,45.9";
            LinearEquation a1 = new LinearEquation(coeff1);
            LinearEquation z = new LinearEquation(10);
            z.RandomInitialization();
            Console.WriteLine(z);
            double[] a = a1;
            string coeff2 = "3,6,7,0,10,-16.7,45.9";
            LinearEquation a2 = new LinearEquation(coeff2);
            string res = "8,12,14,8,19,-0.2,91.8";
            LinearEquation a4 = a1 + a2;
            if (new LinearEquation(res) == a4) Console.WriteLine("adf");
            if (a1) Console.WriteLine("true");
            else Console.WriteLine("false");
        }
    }
}
