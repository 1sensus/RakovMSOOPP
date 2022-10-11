#include <iostream>
#include"Rakov_con.h"
#include"Rakov_obj.h"
#include"Gen.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Rakov_con container;
	int var=-1;
	while (var != 0)
	{
		Print_m();
		switch (var=get_var())
		{
		case 1:
			{
				system("cls");
				Rakov_obj* obj = new Rakov_obj();
				obj->Set_atr();
				container.Add_obj_vec(*obj);
				cout << endl;
				system("pause");
				break;
			}
		case 2:
			{
				system("cls");
				container.Print_vec();
				system("pause");
				break;
			}
		case 3:
			{
				system("cls");
				string fileName;
				cout << "Введите название файла: ";
				cin >> fileName;
				container.Read_vec_f(fileName);
				system("pause");
				break;
			}
		case 4:
			{
				system("cls");
				string fileName;
				cout << "Введите название файла: ";
				cin >> fileName;
				container.Write_vec_f(fileName);
				system("pause");
				break;		
			}
		case 5:
			{
				system("cls");
				container.Clear();
				system("pause");
				break;
			}
		}


	}
}

