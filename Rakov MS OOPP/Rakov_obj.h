#pragma once
#include <fstream>
#include<string>
using namespace std;
class Rakov_obj {
public:
	string name;
	int age;
	char sex;
	void Set_atr();
	void Print_obj();
	void Read_f(fstream&);
	void Write_f(fstream&);
};