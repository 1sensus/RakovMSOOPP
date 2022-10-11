#pragma once
#include"Rakov_con.h"
#include"Rakov_obj.h"
#include"Gen.h"
#include<iostream>

int get_var()
{
	int number;
	while (true)
	{
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input " << endl;
		}
		else
			break;
		cout << "Try again" << endl;
	}
	return number;
}
void Print_m()
{
	system("cls");
	cout << "1.Создать объект." << endl << "2.Показать список." << endl << "3.Загрузить список из файла." << endl << "4.Сохранить список в файл." << endl << "5.Очистить список." << endl << "0.Выход." << endl;
}