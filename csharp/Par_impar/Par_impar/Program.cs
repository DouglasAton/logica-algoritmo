﻿using System;

namespace par_impar
{
    class Program
    {
        static void Main(string[] args)
        {
            int N, valor;

            Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 0; i < N; i++)
            {
                Console.Write("Digite um numero: ");
                valor = int.Parse(Console.ReadLine());

                if (valor == 0)
                {
                    Console.WriteLine("NULO");
                }
                else
                {
                    if (valor % 2 == 0)
                    {
                        Console.Write("PAR");
                    }
                    else
                    {
                        Console.Write("IMPAR");
                    }

                    if (valor > 0)
                    {
                        Console.WriteLine(" POSITIVO");
                    }
                    else
                    {
                        Console.WriteLine(" NEGATIVO");
                    }
                }
            }
        }
    }
}
