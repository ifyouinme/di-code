#include<iostream>

using namespace std;

int main()
{
	int n,i,j,sum = 0;
	int left = 0,right = 0;//���ҶԽ���
	cin >> n;
	int *matrix = new int[n * n];
	 
	for (i = 0; i < n*n; i++)//�������Ԫ��
	{
		cin >> matrix[i];
	}
	
	for (j = 0; j < n; j++)//����Խ���
	{
		left += matrix[j * (n + 1)];
		right += matrix[(j + 1) * (n - 1)];
	}
	sum = left + right;
	cout << sum << endl;
	return 0;
}