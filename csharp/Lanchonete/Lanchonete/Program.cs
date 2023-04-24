using System;
using System.Globalization;

namespace lanchonete
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int codigo, quantidade;
            double valor;

            Console.Write("Codigo do produto comprado: ");
            codigo = int.Parse(Console.ReadLine());

            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());

            valor = 0;
            if (codigo == 1)
            {
                valor = quantidade * 5.00;
            }
            else if (codigo == 2)
            {
                valor = quantidade * 3.50;
            }
            else if (codigo == 3)
            {
                valor = quantidade * 4.80;
            }
            else if (codigo == 4)
            {
                valor = quantidade * 8.90;
            }
            else if (codigo == 5)
            {
                valor = quantidade * 7.32;
            }

            Console.WriteLine("Valor a pagar: R$ " + valor.ToString("F2", CI));
        }
    }
}
