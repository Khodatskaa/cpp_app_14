#include <iostream>
#include "lib.h"
using namespace std;
#define min(a, b) (a < b ? a : b)

int main()
{
	int x, y;

	cout << "Enter a:";
	cin >> x;

	cout << "Enter b:";
	cin >> y;

	int smaller = min(x, y);

	cout << "Smaller is: " << smaller << endl;

	return 0;
}