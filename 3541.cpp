#include<iostream>
using namespace std;
int find_min(int num[], int size)
{
	int i, subscript = 0;//����������¼������±�
	int min = num[0];//�������0������С
	for (i=0; i < size; i++)//������¼��Сֵ���±�
	{
		if (min > num[i])
		{
			subscript = i;
		}
	}
	if (min > num[0])//�������0�����Ƚ�
	{
		subscript = 0;
	}
	return subscript;
}
int main()
{
	int size;
	int num[] = { 34,91,83,56,29,93,56,12,88,72 };
	size = sizeof(num) / sizeof(int);//���鳤��
	cout << num[find_min(num, size)] << endl;
	cout << find_min(num, size) << endl;
	return 0;
	

}