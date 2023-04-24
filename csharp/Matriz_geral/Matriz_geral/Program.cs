using System;
using System.Globalization;

namespace matriz_geral
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, indicaLinha, indicaColuna;
            double somaPositivos;

            Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            double[,] matriz = new double[N, N];

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    matriz[i, j] = double.Parse(Console.ReadLine(), CI);
                }
            }

            somaPositivos = 0;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (matriz[i, j] > 0)
                    {
                        somaPositivos += matriz[i, j];
                    }
                }
            }

            Console.WriteLine();
            Console.WriteLine("SOMA DOS POSITIVOS: " + somaPositivos.ToString("F1", CI) + "\n");

            Console.Write("Escolha uma linha: ");
            indicaLinha = int.Parse(Console.ReadLine());

            Console.Write("LINHA ESCOLHIDA: ");

            for (int i = 0; i < N; i++)
            {
                Console.Write(matriz[indicaLinha, i].ToString("F1", CI) + " ");
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.Write("Escolha uma coluna: ");
            indicaColuna = int.Parse(Console.ReadLine());

            Console.Write("COLUNA ESCOLHIDA: ");

            for (int i = 0; i < N; i++)
            {
                Console.Write(matriz[i, indicaColuna].ToString("F1", CI) + " ");
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.Write("DIAGONAL PRINCIPAL: ");

            for (int i = 0; i < N; i++)
            {
                Console.Write(matriz[i, i].ToString("F1", CI) + " ");
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (matriz[i, j] < 0)
                    {
                        matriz[i, j] = Math.Pow(matriz[i, j], 2);
                    }
                }
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("MATRIZ ALTERADA:");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write(matriz[i, j].ToString("F1", CI) + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
