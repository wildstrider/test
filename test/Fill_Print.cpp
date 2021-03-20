#include "Fill_Print.h"
#include <iostream>
using namespace std;
#define tab "\t"

void Fill_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
 
		arr[i] = rand() % 100;
    }
}
void Print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++) {

		std::cout << arr[i] << tab;
	}
	cout << endl;
}

