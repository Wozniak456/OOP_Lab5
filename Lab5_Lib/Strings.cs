using System;
namespace Lab5_Lib
{ 
    public class Strings
    {
        protected char[] arr;
        public string Value { get; set; }
        protected int Size { get; set; }
        public Strings(string str)
        {
            Value = str + '\0';
            SizeEquation();
        }
        public void SizeEquation()
        {
            int i = 0;
            while (Value[i] != '\0')
            {
                i++;
            }
            Size = i;
        }
        public void StringData()
        {
            Console.WriteLine("\nString data:");
            Console.WriteLine($"value: {Value}\nSize: {Size}");
        }
    }
    public class Derived_class : Strings //похідний клас для цифрового рядка
    {
        //public Derived_class()
        //{
        //    Value = null;
        //}

        //якщо рядок цифровий, то у Value записується перевернутий ряок, якщо не цифровий, то -"
        public Derived_class(string str) 
            :base(str) 
        {
            Value = str + '\0';
            SizeEquation();
            arr = new char[Size];
            for (int i = 0; i < Size; i++)
            {
                arr[i] = Value[i];
            }
            bool isValid = true;
            for (int i = 0; i < Size; i++)
            {
                if ((int)str[i] < 48 || (int)str[i] > 57)
                {
                    i = Size - 1;
                    isValid = false;
                    Value = "-";
                }
            }
            if (isValid)
            {
                StringRotation();
            }
        }
        public void StringRotation() //метод для перевертання рядка
        {
            int len = Size;
            for (int i = 0; i < Size / 2; i++)
            {
                char temp = arr[i];
                arr[i] = arr[len - 1];
                arr[len - 1] = temp;
                len--;
            }
            Value = new string(arr);
        }
    }
}
