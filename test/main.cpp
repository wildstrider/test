
/*1. Код добавления значения в конец массива вынести в функцию ? ? ? push_back(? ? ? );
2. В проект DynamicMemory добавить функции :
? ? ? push_front(? ? ? );	//Добавляет значение в начало массива
? ? ? insert(? ? ? );		//Вставляет значение в массив по указанному индексу
? ? ? pop_back(? ? ? );		//Удаляет последний элемент из массива
? ? ? pop_front(? ? ? );		//Удаляет нулевой элемент из массива
? ? ? erase(? ? ? );			//Удаляет элемент из массива по заданному индексу
Для того чтобы удалить элемент из массива, в буферный массив нужно скопировать все кроме удаляемого элемента.*/

#include <iostream>
#include "Add_element.h"
#include "Fill_Print.h"
#include "Delete_element.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int size;
	cout << "Введите размер массива: "; cin >> size;
	int* arr = new int[size] {};

	Fill_arr(arr, size);
	Print_arr(arr, size);

	cout << "Выберите действие."
		"\n1 - Добавление в массив элементов."
		"\n2 - Удаление из массива элементов" << endl;
		
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