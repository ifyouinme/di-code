#include<iostream>
#include<iomanip>
using namespace std;
double poly(int n,double x)
{

	if (n == 0)
		return 1.0;
	else if (n == 1)
		return x;
	else  return ((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n;//ตÝน้
	

}

int main()
{
	int n;
	double x;
	cin >> x >> n;
	cout << fixed << setprecision(6) << poly(n, x) << endl;
	return 0;
}