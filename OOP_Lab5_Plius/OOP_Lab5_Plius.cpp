#include <string>
#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;
int main()
{
	cout << "Vozniak Sofiia, IS-01 c++" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "\nWhat do you want to use?\n1 - Base class\n2 - Derived class" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: 
		{
			cout << "\nInput a string" << endl;
			string str = "";
			cin >> str;
			Strings stroka = Strings(str);
			stroka.StringData();
			break; 
		}
		case 2:
		{
			cout << "\nInput a string" << endl;
			string str = "";
			cin >> str;
			Derived_class str2 = Derived_class(str);
			if (str2.Value == "-")
			{
				cout << "\nincludes non numeric item" << endl;
			}
			else
			{
				str2.StringData();
			}
			break;
		}
		default:
			cout << "\nPlease, choose : 1 or 2" << endl;
		}
	}
}

