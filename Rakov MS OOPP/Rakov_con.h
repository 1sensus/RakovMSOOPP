#pragma once
#include<vector>
#include<iostream>
#include"Rakov_obj.h"
using namespace std;
class Rakov_con{
public:
	vector<Rakov_obj*>m_vec;
	void Add_obj_vec(Rakov_obj&);
	void Print_vec();
	void Write_vec_f(string& file);
	void Read_vec_f(string& file);
	void Clear();
};
