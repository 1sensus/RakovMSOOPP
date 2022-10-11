#pragma once
#include <fstream>
#include <iostream>
#include<string>
#include"Rakov_obj.h"
using namespace std;

void Rakov_obj::Set_atr() 
{
	cout << "Введите имя."<<endl;
	cin >> this->name;
	cout << "Введите возраст."<<endl;
	cin >> this->age;
	cout << "Введите пол."<<endl;
	cin >> this->sex;
}
void Rakov_obj::Print_obj()
{
	cout << "Имя: " << this->name << " |\tВозраст: " << this->age << " |\tПол: " << this->sex << " |" << endl;
}
void Rakov_obj::Write_f(fstream& to_file)
{
	to_file << this->name<<endl;
	to_file << this->age<<endl;
	to_file << this->sex<<endl;
}
void Rakov_obj::Read_f(fstream& from_file)
{
	from_file >> this->name;
	from_file >> this->age;
	from_file >> this->sex;
}