#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int year;
	cin >> year;
	int* p = new int[year + 1];//申请年份+1个内存赋值给p
	for (int i = 1; i <= year; ++i)
	{
		if (i <= 3)
			p[i] = 1;//前三年的数量为1
		else
			p[i] = p[i - 1] + p[i - 3];//今年数量等于前一年数量加上三年前数量
	}
	cout << p[year] << endl;
}