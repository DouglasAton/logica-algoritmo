using System;
using System.Globalization;

namespace experiencias
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, totalRatos, TotalSapos, totalCoelhos, qtdCobaias, totalCobaias;
            char tipo;
            double pratos, psapos, pcoelhos;

            Console.Write("Quantos casos de teste serao digitados? ");
            n = int.Parse(Console.ReadLine());

            totalRatos = 0;
            TotalSapos = 0;
            totalCoelhos = 0;
            for (int i = 0; i < n; i++)
            {
                Console.Write("Quantidade de cobaias: ");
                qtdCobaias = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());

                if (tipo == 'R')
                {
                    totalRatos = totalRatos + qtdCobaias;
                }
                else if (tipo == 'S')
                {
                    TotalSapos = TotalSapos + qtdCobaias;
                }
                else
                {
                    totalCoelhos = totalCoelhos + qtdCobaias;
                }
            }

            totalCobaias = totalRatos + TotalSapos + totalCoelhos;
            pcoelhos = ((double)totalCoelhos / totalCobaias) * 100.0;
            pratos = ((double)totalRatos / totalCobaias) * 100.0;
            psapos = ((double)TotalSapos / totalCobaias) * 100.0;

            Console.WriteLine();
            Console.WriteLine("RELATORIO FINAL:");
            Console.WriteLine("Total: " + totalCobaias + " cobaias");
            Console.WriteLine("Total de coelhos: " + totalCoelhos);
            Console.WriteLine("Total de ratos: " + totalRatos);
            Console.WriteLine("Total de sapos: " + TotalSapos);
            Console.WriteLine("Percentual de coelhos: " + pcoelhos.ToString("F2", CI));
            Console.WriteLine("Percentual de ratos: " + pratos.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + psapos.ToString("F2", CI));
        }
    }
}
