#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double factorial(double x)//��n�Ľ׳�
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
//	b = fabs(a);//����a�ľ���ֵ
<<<<<<< HEAD
//		if (b >= 1e-8)//�ж����һ���Ƿ�
//		{
//			sum += a;
//			n++;
//			goto flag;
//		}	
//		else cout << setprecision(9) << sum << endl;

	do(a = pow(-1, n + 1) * pow(x, n) / factorial(n))
=======
//		if (b >= 1e-8)//�ж����һ���Ƿ��������
//		{
//			sum += a;
//			n++;
//			goto flag��//ѭ��
//		}	
//		else cout << setprecision(9) << sum << endl;

	/*do {
		a = pow(-1, n + 1) * pow(x, n) / factorial(n);
		sum += a; n++; b = fabs(a);
	} while (b >= 1e-8);
	cout << setprecision(9) << sum << endl;*/
	a = pow(-1, n + 1) * pow(x, n) / factorial(n);
	b = fabs(a);
	while (b >= 1e-8)//�����ж�
	{
		sum += a;
		n++;
		a = pow(-1, n + 1) * pow(x, n) / factorial(n);
		b = fabs(a);
	}
	cout << setprecision(9) << sum << endl;
>>>>>>> a769643 (Second)
}