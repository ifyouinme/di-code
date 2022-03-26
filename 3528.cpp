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
		for (int i = 3; i <= 7; i += 2)//判断能否被3 5 7整除
		{
			if (a % i == 0)
			{
				demo = true;//可以改变布尔数值
				cout << i <<" ";
				
			}
		
		}
		if (!(demo))//不能整除则输出no
		{
			cout << "no";
		}
	}
	else
	{
		cout << "请输入正整数" << endl;
	}
}