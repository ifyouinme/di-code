#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int year;
	cin >> year;
	int* p = new int[year + 1];//�������+1���ڴ渳ֵ��p
	for (int i = 1; i <= year; ++i)
	{
		if (i <= 3)
			p[i] = 1;//ǰ���������Ϊ1
		else
			p[i] = p[i - 1] + p[i - 3];//������������ǰһ��������������ǰ����
	}
	cout << p[year] << endl;
}