#include <string>
#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;
Strings::Strings()
{
	Value = "";
}
Strings::Strings(string str)
{
	Value = str + '\0';
	SizeEquation();
}
void Strings::SizeEquation()
{
	int i = 0;
	while (Value[i] != '\0')
	{
		i++;
	}
	Size = i;
}
void Strings::StringData() 
{
	cout << "\nString Data: " << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << Value[i];
	}
	cout  << "\nSize: " << Size << endl;
}
Derived_class::Derived_class()
{
	Value = "";
}
Derived_class::Derived_class(string str)
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
void Derived_class::StringRotation()
{
	int len = Size;
	for (int i = 0; i < Size/2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[len - 1];
		arr[len - 1] = temp;
		len--;
	}
	Value = string(arr);
	delete arr;
}