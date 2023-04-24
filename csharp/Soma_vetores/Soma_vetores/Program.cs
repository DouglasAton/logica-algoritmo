using System;

namespace soma_vetores
{
    class Program
    {
        static void Main(string[] args)
        {
            int N;

            Console.Write("Quantos valores vai ter cada vetor? ");
            N = int.Parse(Console.ReadLine());

            int[] a = new int[N];
            int[] b = new int[N];
            int[] c = new int[N];

            Console.WriteLine("Digite os valores do vetor A:");

            for (int i = 0; i < N; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("Digite os valores do vetor B:");

            for (int i = 0; i < N; i++)
            {
                b[i] = int.Parse(Console.ReadLine());
            }

            for (int i = 0; i < N; i++)
            {
                c[i] = a[i] + b[i];
            }

            Console.WriteLine("VETOR RESULTANTE:");

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine(c[i]);
            }
        }
    }
}
