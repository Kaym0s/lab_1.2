#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	double a;
	double b;
	double c;
	double d;
	double f;
	double e;
	cin >> a;
	cin >> b;
	c = (pow(a + b, 2));
	d = (pow(a, 2) + 2 * a * b);
	f = (pow(b, 2));
	e = ((c - d) / f);
	cout << e << endl;
	return 0;
}