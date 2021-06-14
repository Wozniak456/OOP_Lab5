using System;
using Lab5_Lib;
namespace OOP_Lab5
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Vozniak Sofiia, IS-01 C#");
            for (int i = 0; i < 3; i++)
            {
            Console.WriteLine("\nWhat do you want to use?\n1 - Base class\n2 - Derived class");
            int choice = int.Parse(Console.ReadLine());
                switch (choice)
                {
                case 1:
                    Console.WriteLine("\ninput a string: ");
                    string str = Console.ReadLine();
                    Strings stroka = new Strings(str);
                    stroka.StringData();
                    break;
                case 2:
                    Console.WriteLine("\ninput a string: ");
                    str = Console.ReadLine();
                    Derived_class str2 = new Derived_class(str);
                    if (str2.Value == "-")
                    {
                        Console.WriteLine("\nincludes non numeric item");
                    }
                    else
                    {
                        str2.StringData();
                    }
                     break;
                 default:
                    Console.WriteLine("Please, choose : 1 or 2");
                    break;
                }
            }
        }
    }
}
