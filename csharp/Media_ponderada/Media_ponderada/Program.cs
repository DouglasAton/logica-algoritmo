using System;
using System.Globalization;

namespace media_ponderada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double valor1, valor2, valor3, media;

            Console.Write("Quantos casos voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine("Digite tres numeros:");
                valor1 = double.Parse(Console.ReadLine(), CI);
                valor2 = double.Parse(Console.ReadLine(), CI);
                valor3 = double.Parse(Console.ReadLine(), CI);

                media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;

                Console.WriteLine("MEDIA = " + media.ToString("F1", CI));
            }
        }
    }
}
