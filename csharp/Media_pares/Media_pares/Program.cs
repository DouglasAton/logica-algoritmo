using System;
using System.Globalization;

namespace media_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, somaPares = 0, cont = 0;
            double mediaPares;

            Console.Write("Quantos elementos vai ter o vetor? ");
            N = int.Parse(Console.ReadLine());

            int[] vetor = new int[N];

            for (int i = 0; i < N; i++)
            {
                Console.Write("Digite um numero: ");
                vetor[i] = int.Parse(Console.ReadLine());
            }

            somaPares = 0;
            cont = 0;
            for (int i = 0; i < N; i++)
            {
                if (vetor[i] % 2 == 0)
                {
                    somaPares += vetor[i];
                    cont++;
                }
            }

            if (cont == 0)
            {
                Console.WriteLine("NENHUM NUMERO PAR");
            }
            else
            {
                mediaPares = (double)somaPares / cont;

                Console.WriteLine("MEDIA DOS PARES = " + mediaPares.ToString("F1", CI));
            }
        }
    }
}
