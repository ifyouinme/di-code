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
				factorial *= y;//��������׳�
			}
		factorial_sum += factorial;//�׳�ǰn���
	}
	cout << factorial_sum << endl;	
}