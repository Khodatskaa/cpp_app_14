#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
	int x;

	cout << "Enter a number: ";
	cin >> x;

	cout << "The square of " << x << " is " << square(x) << endl;
}