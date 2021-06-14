#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Strings
{
protected:
	int Size;
	char* arr;
public:
	string Value;
	Strings();
	Strings(string str);
	void SizeEquation();
	void StringData();
};
class Derived_class : public Strings
{
public:
	Derived_class();
	Derived_class(string str);
	void StringRotation();
};