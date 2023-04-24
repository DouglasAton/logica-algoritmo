using System;
using System.Globalization;

namespace media_idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade, cont;
            double soma, media;

            Console.WriteLine("Digite as idades:");
            idade = int.Parse(Console.ReadLine());

            if (idade < 0)
            {
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }
            else
            {
                soma = 0;
                cont = 0;
                while (idade >= 0)
                {
                    soma = soma + idade;
                    cont++;
                    idade = int.Parse(Console.ReadLine());
                }

                media = soma / cont;

                Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
            }
        }
    }
}