#include <iostream>
#include "Add_element.h"
#include "Fill_Print.h"
using namespace std;



void  push_front(int arr[], int buffer[], int buf, int size, int elem, int quant)
{
	for (int i = buf - 1; i >= 0; i--) {

          size--;
		if (i >= i - size) {
			buffer[i] = arr[size];
	    }
		if (i < quant)
			buffer[i] = elem;
    }
}
void push_back(int arr[], int buffer[], int buf, int size, int elem, int quant)
{
	for (int i = 0; i < buf; i++) {

		if (i < size) {
			buffer[i] = arr[i];
		}
		if (i == buf - quant) {
			buffer[i] = elem;
		}
    }
}
void  insert(int arr[], int buffer[], int buf, int elem, const int q, int quant, int index, int in)
{
	for (int i = 0; i < buf; i++) {

		if (i < index && q == quant) {
			buffer[i] = arr[i];
		}
		if (i == index) {
			buffer[i] = elem;
		}
		if (i > index) {
			buffer[i] = arr[in++];
		}
    }
}
void Add_element(int arr[], int size)
{
	int quant;
	cout << "������� ���������� ����������� ���������: "; cin >> quant;
	int buf = size + quant;
	const int q = quant;
	int* buffer = new int[buf] {};
	cout << "�������� � ����� ����� ������� �������� �������."
		"\n1 - � ������ �������"
		"\n2 - � ����� �������"
		"\n3 - �� ���������� �������" << endl;
	int choice; cin >> choice;
	int elem = 0;
	switch (choice)
	{
	case 1:
		cout << "������� ����������� �������" << endl;
		while (quant > 0)
		{
			cin >> elem;
           push_front(arr, buffer, buf, size, elem, quant--);
		}
		Print_arr(buffer, buf);
	break;
	case 2:
		cout << "������� ����������� �������" << endl;
		while (quant > 0)
		{
			cin >> elem;
         	push_back(arr, buffer, buf, size, elem, quant--);
	    }
		Print_arr(buffer, buf);
	break;
	case 3:
		int index;
		if (quant > 1) {
			cout << "������� � ������ ������� ��������� ��������: ";
		}
		else
			cout << "������� �� ������ ������ �������� �������." << endl;
		cin >> index;
		while (index > size)
		{
			cout << "�������� ������ �������!! ���������� ��� ���: "; cin >> index;
		}
	    int in = index;
		cout << "������� ����������� �������" << endl;
		while (quant > 0)
		{
			cin >> elem;
			insert(arr, buffer, buf, elem, q, quant--, index++, in);
		}
		Print_arr(buffer, buf);
    }

	delete[] buffer;
}
