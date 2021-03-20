
/*1. ��� ���������� �������� � ����� ������� ������� � ������� ? ? ? push_back(? ? ? );
2. � ������ DynamicMemory �������� ������� :
? ? ? push_front(? ? ? );	//��������� �������� � ������ �������
? ? ? insert(? ? ? );		//��������� �������� � ������ �� ���������� �������
? ? ? pop_back(? ? ? );		//������� ��������� ������� �� �������
? ? ? pop_front(? ? ? );		//������� ������� ������� �� �������
? ? ? erase(? ? ? );			//������� ������� �� ������� �� ��������� �������
��� ���� ����� ������� ������� �� �������, � �������� ������ ����� ����������� ��� ����� ���������� ��������.*/

#include <iostream>
#include "Add_element.h"
#include "Fill_Print.h"
#include "Delete_element.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int size;
	cout << "������� ������ �������: "; cin >> size;
	int* arr = new int[size] {};

	Fill_arr(arr, size);
	Print_arr(arr, size);

	cout << "�������� ��������."
		"\n1 - ���������� � ������ ���������."
		"\n2 - �������� �� ������� ���������" << endl;
		
	int choice; cin >> choice;
	
	switch (choice)
	{
	case 1:
		Add_element(arr, size);
		break;
	case 2:
		Delete_element(arr, size);
	}

	delete[] arr;
	return 0;
}