#include <iostream>
using namespace std;

int main()
{
	int sum;
	int i, y;
	for (i = 2; i <= 1000; i++)
	{
		sum = 0;
		for (y = 1; y < i; y++)
		{
			if (i % y == 0)//判断因子
			{
				sum = sum + y;//因子相加
			}

		}
		if (sum == i)//判断完数
		{
			cout << i << endl;
		}
	}
}