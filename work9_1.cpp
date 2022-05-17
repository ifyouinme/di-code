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
    cout << "学生姓名：";
    cin >> stu_1.name;
    cout << "期中成绩：";
    cin >> stu_1.Interim_results;
    cout << "期末成绩：";
    cin >> stu_1.Final_exam;
    stu_1.average_score = (stu_1.Interim_results + stu_1.Final_exam) / 2;
    cout << stu_1.name << "的平均成绩为：" << stu_1.average_score << endl;
}