#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
	int x, n;

	cout << "Enter a number: ";
	cin >> x;

	cout << "Enter the power: ";
	cin >> n;

	cout << x << " raised to the power of " << n << " is: " << POWER(x, n) << endl;

}