#include <iostream>
using namespace std;

int main()
{
	int n;
	 
	int factorial_sum = 0;
	
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		long long factorial = 1;
		for (int y = 1; y <= i; y++)
			{
				factorial *= y;//计算各数阶乘
			}
		factorial_sum += factorial;//阶乘前n项和
	}
	cout << factorial_sum << endl;	
}