#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
	int a, b;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	cout << "Max: " << max(a, b) << endl;

	return 0;
}