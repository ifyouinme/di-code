#include <iostream>
#include <string>
using namespace std;
#define n 5 //宏定义 定义学生数量

struct Student
{
    char name[20];
    char sex;
    double score;
};

void input(Student arr[],int len)
{
    for (int i = 0; i < n; i++)//循环输入学生信息
    {
        cout << "请输入第" << i + 1 << "位学生的信息(姓名，性别，成绩):" << endl;
        cin >> arr[i].name >>arr[i].sex >> arr[i].score;
    }
}
void Print(Student arr[],int len)
{
    int i,j;
    Student temp;
    for (i = 0; i < len - 1; i++)//冒泡排序
        for (j = 0; j < len - 1 - i; j++)
        {
            if(arr[j].score<arr[j+1].score)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    for (i = 0; i < len; i++)
    {
        cout << "请输入第" << (i + 1) << "位学生的信息(姓名，性别，成绩):" << endl;
        cout << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
    }
}
int main()
{
    Student arr[n];//创建学生数组
    int len = sizeof(arr)/sizeof(arr[0]);
    input(arr,len);
    Print(arr,len);
}
