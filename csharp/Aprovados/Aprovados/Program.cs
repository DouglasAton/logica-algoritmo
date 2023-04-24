using System;
using System.Globalization;

namespace aprovados
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double media;

            Console.Write("Quantos alunos serao digitados? ");
            N = int.Parse(Console.ReadLine());

            string[] nomes = new string[N];
            double[] notas1 = new double[N];
            double[] notas2 = new double[N];

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno:");
                nomes[i] = Console.ReadLine();
                notas1[i] = double.Parse(Console.ReadLine(), CI);
                notas2[i] = double.Parse(Console.ReadLine(), CI);
            }

            Console.WriteLine("Alunos aprovados:");

            for (int i = 0; i < N; i++)
            {
                media = (notas1[i] + notas2[i]) / 2;

                if (media >= 6.0)
                {
                    Console.WriteLine(nomes[i]);
                }
            }
        }
    }
}