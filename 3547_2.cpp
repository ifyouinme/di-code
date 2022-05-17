#include <iostream>
using namespace std;

void mystrcmp(const char *str1, const char *str2);

int main()
{
    char str1[100] = {0};
    char str2[100] = {0};
    cin.getline(str1, sizeof(str1));
    cin.getline(str2, sizeof(str2));
    mystrcmp(str1, str2);
    return 0;
}

void mystrcmp(const char *str1, const char *str2)
{

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
        {
            cout << str1 << ">" << str2 << endl;
            return;
        }
        else if (str1[i] < str2[i])
        {
            cout << str1 << "<" << str2 << endl;
            return;
        }
    }
    cout << str1 << "==" << str2 << endl;
}