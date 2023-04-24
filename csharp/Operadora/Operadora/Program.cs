using System;
using System.Globalization;

namespace operadora
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int minutos;
            double valorPago;

            Console.Write("Digite a quantidade de minutos: ");
            minutos = int.Parse(Console.ReadLine());

            valorPago = 50.0;

            if (minutos > 100)
            {
                valorPago += (minutos - 100) * 2.0;
            }

            Console.WriteLine("Valor a pagar: R$ " + valorPago.ToString("F2", CI));
        }
    }
}
