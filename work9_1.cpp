#include <iostream>
using namespace std;

struct Students
{
    char name[20];
    double Interim_results, Final_exam;
    double average_score;
};
int main()
{
    Students stu_1;
    cout << "ѧ��������";
    cin >> stu_1.name;
    cout << "���гɼ���";
    cin >> stu_1.Interim_results;
    cout << "��ĩ�ɼ���";
    cin >> stu_1.Final_exam;
    stu_1.average_score = (stu_1.Interim_results + stu_1.Final_exam) / 2;
    cout << stu_1.name << "��ƽ���ɼ�Ϊ��" << stu_1.average_score << endl;
}