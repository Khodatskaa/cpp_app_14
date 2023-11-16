#include "function.h"
#include <iostream>
#define INTEGER

int main()
{
	const int size = 5;
	int intArr[size];
	char charArr[size];
	double doubleArr[size];

	fillArray(intArr, size);
	cout << "Original Integer Array: ";
	ShowArray(intArr, size);

	cout << "Min value: " << findMin(intArr, size) << endl;
	cout << "Max value: " << findMax(intArr, size) << endl;

	sortArray(intArr, size);
	cout << "Sorted Integer Array:";
	ShowArray(intArr, size);

	int indexToEditInt = 2;
	int newValueInt = 99;

	editValue(intArr, size, indexToEditInt, newValueInt);
	cout << "Integer Array after editing:";
	ShowArray(intArr, size);

	fillArray(charArr, size);
	cout << "Original Char Array:";
	ShowArray(charArr, size);

	cout << "Min value:" << findMin(charArr, size) << endl;
	cout << findMin(charArr, size) << endl;

	cout << "Max value:" << findMax(charArr, size) << endl;
	sortArray(charArr, size);
	cout << "Sorted Char Array: ";

	ShowArray(charArr, size);
	int indexToEditChar = 2;
	char newValueChar = 'Z';

	editValue(charArr, size, indexToEditChar, newValueChar);
	cout << "Char Array after editing: ";
	ShowArray(charArr, size);

	fillArray(doubleArr, size);
	cout << "Original Double Array: ";
	ShowArray(doubleArr, size);

	cout << "Min value: " << findMin(doubleArr, size) << endl;
	cout << "Max value: " << findMax(doubleArr, size) << endl;
		
	sortArray(doubleArr, size);
	cout << "Sorted Double Array: ";
	ShowArray(doubleArr, size);

	int indexToEditDouble = 2;
	double newValueDouble = 99.99;

	editValue(doubleArr, size, indexToEditDouble, newValueDouble);
	cout << "Double Array after editing: ";
	ShowArray(doubleArr, size);

	return 0;
}