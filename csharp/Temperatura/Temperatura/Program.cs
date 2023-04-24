using System;
using System.Globalization;

namespace temperatura
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            char escala;
            double C, F;

            Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            escala = char.Parse(Console.ReadLine());

            if (escala == 'F')
            {
                Console.Write("Digite a temperatura em Fahrenheit: ");
                F = double.Parse(Console.ReadLine(), CI);

                C = 5.0 / 9.0 * (F - 32.0);
                Console.WriteLine("Temperatura equivalente em Celsius: " + C.ToString("F2", CI));
            }
            else
            {
                Console.Write("Digite a temperatura em Celsius: ");
                C = double.Parse(Console.ReadLine(), CI);

                F = C * 9.0 / 5.0 + 32.0;
                Console.WriteLine("Temperatura equivalente em Fahrenheit: " + F.ToString("F2", CI));
            }
        }
    }
}
