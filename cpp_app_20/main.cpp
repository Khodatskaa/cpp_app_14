#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
	int x;

	cout << "Enter a number: ";
	cin >> x;

	if (odd(x))
		cout << "The number is odd" << endl;
	else
		cout << "The number is even" << endl;
}