#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	bool demo = false;
	if (a > 0)
	{
		for (int i = 3; i <= 7; i += 2)//�ж��ܷ�3 5 7����
		{
			if (a % i == 0)
			{
				demo = true;//���Ըı䲼����ֵ
				cout << i <<" ";
				
			}
		
		}
		if (!(demo))//�������������no
		{
			cout << "no";
		}
	}
	else
	{
		cout << "������������" << endl;
	}
}