#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 100; i <= 999; i += 1)
	{
		int percentile, tenths, unit;//���������������һ����λ���ĸ� ʮ �� λ��
		percentile = i / 100;//��λ
		tenths = (i % 100) / 10;//ʮλ
		unit = (i % 100) % 10;//��λ
		if (pow(percentile, 3) + pow(tenths, 3) + pow(unit, 3) == i)//ˮ�ɻ���������
		{
			cout << i << " ";
		}
	}
}
