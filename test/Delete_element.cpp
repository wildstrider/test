#include "Delete_element.h"
#include "Fill_Print.h"
#include <iostream>
using namespace std;


void  pop_back(int arr[], int buffer[], int buf)
{
	for (int i = 0; i < buf; i++) {
      
		buffer[i] = arr[i];
    }
}
void pop_front(int arr[], int buffer[], int buf, int quant)
{
	for (int i = 0; i < buf; i++) {

		buffer[i] = arr[quant++];
    }
}
void erase(int arr[], int buffer[], int size, int index, int quant)
{
	int temp = index + quant;
	for (int i = 0; i < size; i++) {

		if (i < index) {
			buffer[i] = arr[i];
		}
		if (i >= temp) {
			buffer[index++] = arr[i];
		}
    }
}
void Delete_element(int arr[], int size)
{
	int quant;
	cout << "������� ���������� ��������� ���������: "; cin >> quant;
	while (quant >= size)
	{
		cout << "�������� ������ �������!!!! ���������� �� ���: "; cin >> quant;
	}
	int buf = size - quant;
	//const int q = quant;
	int* buffer = new int[buf] {};
	if (quant > 1) {
		cout << "�������� �� ����� ����� ������� ������� ��������." << endl;
	}
	else
		cout << "�������� �� ����� ����� ������� ������� �������." << endl;

		cout << "1 - ������ �������"
		"\n2 - ����� �������"
		"\n3 - �� ���������� �������" << endl;
	int choice; cin >> choice;
	switch (choice)
	{
	case 1:
		pop_front(arr, buffer, buf, quant);
		Print_arr(buffer, buf);
		break;
	case 2:
		pop_back(arr, buffer, buf);
		Print_arr(buffer, buf);
		break;
	case 3:
		int index;
		cout << "������� � ������ ������� ������ ������� ��������: "; cin >> index;
		while (index > size - quant)
		{
			cout << "���������� ������� ����� ��������� ���������!!!! ���������� ������� ������ ������: "; cin >> index;

		}
		erase(arr, buffer, size, index, quant);
		Print_arr(buffer, buf);
	}
	delete[] buffer;
}