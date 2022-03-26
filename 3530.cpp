#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double factorial(double x)//求n的阶乘
{
	double re =1;
	for (int i = 1; i <= x; i++)
	{
		re *= i;
	}
	return re;
}
int main()
{
	
	int n = 1;
	double a,b,x,sum =1;
	cin >> x;
//flag:
//	a = pow(-1, n + 1) * pow(x, n) / factorial(n);
//	b = fabs(a);//返回a的绝对值
<<<<<<< HEAD
//		if (b >= 1e-8)//判断最后一项是否
//		{
//			sum += a;
//			n++;
//			goto flag;
//		}	
//		else cout << setprecision(9) << sum << endl;

	do(a = pow(-1, n + 1) * pow(x, n) / factorial(n))
=======
//		if (b >= 1e-8)//判断最后一项是否符合条件
//		{
//			sum += a;
//			n++;
//			goto flag；//循环
//		}	
//		else cout << setprecision(9) << sum << endl;

	/*do {
		a = pow(-1, n + 1) * pow(x, n) / factorial(n);
		sum += a; n++; b = fabs(a);
	} while (b >= 1e-8);
	cout << setprecision(9) << sum << endl;*/
	a = pow(-1, n + 1) * pow(x, n) / factorial(n);
	b = fabs(a);
	while (b >= 1e-8)//条件判断
	{
		sum += a;
		n++;
		a = pow(-1, n + 1) * pow(x, n) / factorial(n);
		b = fabs(a);
	}
	cout << setprecision(9) << sum << endl;
>>>>>>> a769643 (Second)
}