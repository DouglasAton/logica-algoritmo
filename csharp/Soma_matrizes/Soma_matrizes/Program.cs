using System;

namespace soma_matrizes
{
    class Program
    {
        static void Main(string[] args)
        {
            int M, N;

            Console.Write("Quantas linhas vai ter cada matriz? ");
            M = int.Parse(Console.ReadLine());
            Console.Write("Quantas colunas vai ter cada matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,] a = new int[M, N];
            int[,] b = new int[M, N];
            int[,] c = new int[M, N];

            Console.WriteLine("Digite os valores da matriz A:");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    a[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("Digite os valores da matriz B:");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    b[i, j] = int.Parse(Console.ReadLine());
                }
            }

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    c[i, j] = a[i, j] + b[i, j];
                }
            }

            Console.WriteLine("MATRIZ SOMA:");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write(c[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
