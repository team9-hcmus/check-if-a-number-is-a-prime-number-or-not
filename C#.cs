using System;

namespace TimSoNguyenToC#
{
    class TestCsharp
    {
        public static void Main()
        {

            Console.Write("
");
            Console.Write("Kiem tra so nguyen to trong C#:
");
            Console.Write("----------------------------");
            Console.Write("

");

            int number;
            int bien_dem = 0;

            Console.Write("Nhap so: ");
            number = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= number; i++)
                if (number % i == 0)
                    bien_dem++;

            if (bien_dem == 2)
                Console.WriteLine("La so nguyen to.");
            else
                Console.WriteLine("Ko la so nguyen to.");        

            Console.ReadKey();
        } 
    }
}
