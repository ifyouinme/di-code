#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 100; i <= 999; i += 1)
	{
		int percentile, tenths, unit;//创建三个变量存放一个三位数的个 十 百 位数
		percentile = i / 100;//百位
		tenths = (i % 100) / 10;//十位
		unit = (i % 100) % 10;//个位
		if (pow(percentile, 3) + pow(tenths, 3) + pow(unit, 3) == i)//水仙花数的条件
		{
			cout << i << " ";
		}
	}
}
