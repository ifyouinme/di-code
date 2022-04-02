#include<iostream>
using namespace std;
int find_min(int num[], int size)
{
	int i, subscript = 0;//创建变量记录数组的下标
	int min = num[0];//设数组第0个数最小
	for (i=0; i < size; i++)//迭代记录最小值的下标
	{
		if (min > num[i])
		{
			subscript = i;
		}
	}
	if (min > num[0])//和数组第0个数比较
	{
		subscript = 0;
	}
	return subscript;
}
int main()
{
	int size;
	int num[] = { 34,91,83,56,29,93,56,12,88,72 };
	size = sizeof(num) / sizeof(int);//数组长度
	cout << num[find_min(num, size)] << endl;
	cout << find_min(num, size) << endl;
	return 0;
	

}