#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,x;//n为盘数，x为次数
	cin >> n;
	x = pow(2, n) - 1;
	cout << x << endl;
	return 0;
}