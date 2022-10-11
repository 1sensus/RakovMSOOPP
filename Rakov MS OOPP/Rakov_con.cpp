#pragma once
#include"Rakov_con.h"
#include<string>
using namespace std;

void Rakov_con::Add_obj_vec(Rakov_obj& obj)
{
	cout << &obj << endl;
	this->m_vec.push_back(&obj);
}
void Rakov_con::Print_vec()
{
	for (Rakov_obj* obj : this->m_vec) 
	{
		cout << obj << endl;
		obj->Print_obj();
		cout << endl;
	}
}
void Rakov_con::Read_vec_f(string& file) 
{
	fstream from_file;
	Rakov_obj* obj;
	from_file.open(file + ".txt", ios::in);
	char(c);
	while (from_file.is_open())
	{
		from_file.get(c);
		if (from_file.peek() == EOF)break;
		from_file.unget();
		Rakov_obj* obj;
		obj = new Rakov_obj();
		obj->Read_f(from_file);
		this->Add_obj_vec(*obj);
	}
	from_file.close();
}
void Rakov_con::Write_vec_f(string& file)
{
	fstream to_file;
	to_file.open(file + ".txt", ios::out);
	for (Rakov_obj* obj : this->m_vec)
	{
		obj->Write_f(to_file);
	}
	to_file.close();
}
void Rakov_con::Clear()
{
	for (Rakov_obj* obj : this->m_vec)
		delete obj;
	this->m_vec.clear();
}