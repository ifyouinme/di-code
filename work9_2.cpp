#include <iostream>
#include <string>
using namespace std;
#define n 5 //�궨�� ����ѧ������

struct Student
{
    char name[20];
    char sex;
    double score;
};

void input(Student arr[],int len)
{
    for (int i = 0; i < n; i++)//ѭ������ѧ����Ϣ
    {
        cout << "�������" << i + 1 << "λѧ������Ϣ(�������Ա𣬳ɼ�):" << endl;
        cin >> arr[i].name >>arr[i].sex >> arr[i].score;
    }
}
void Print(Student arr[],int len)
{
    int i,j;
    Student temp;
    for (i = 0; i < len - 1; i++)//ð������
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
        cout << "�������" << (i + 1) << "λѧ������Ϣ(�������Ա𣬳ɼ�):" << endl;
        cout << arr[i].name << " " << arr[i].sex << " " << arr[i].score << endl;
    }
}
int main()
{
    Student arr[n];//����ѧ������
    int len = sizeof(arr)/sizeof(arr[0]);
    input(arr,len);
    Print(arr,len);
}
