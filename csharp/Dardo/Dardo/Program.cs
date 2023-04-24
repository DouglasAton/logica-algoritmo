using System;
using System.Globalization;

namespace dardo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double a, b, c, maior;

            Console.WriteLine("Digite as tres distancias:");
            a = double.Parse(Console.ReadLine(), CI);
            b = double.Parse(Console.ReadLine(), CI);
            c = double.Parse(Console.ReadLine(), CI);

            if (a > b && a > c)
            {
                maior = a;
            }
            else if (b > c)
            {
                maior = b;
            }
            else
            {
                maior = c;
            }

            Console.WriteLine("MAIOR DISTANCIA = " + maior.ToString("F2", CI));
        }
    }
}
