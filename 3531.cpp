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
			if (i % y == 0)//�ж�����
			{
				sum = sum + y;//�������
			}

		}
		if (sum == i)//�ж�����
		{
			cout << i << endl;
		}
	}
}