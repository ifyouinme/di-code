#include <iostream>
#include <cstring>
using namespace std;

void stringcmp(char *str1, char *str2)
{
    int i = 0;
     while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    
   if (str1[i] > str2[i])
        cout << str1 << ">" << str2 << endl;
    else if (str1[i] < str2[i])
        cout << str1 << "<" << str2 << endl;
    else if (str1[i] == str2[i])
        cout << str1 << "==" << str2 << endl;
    else if (str1[i] == '\0')
        cout << str1 << "<" << str2 << endl;
    else if (str2[i] == '\0')
        cout << str1 << ">" << str2 << endl;
}
    
int main()
{
    char str1[100] = {0};
    char str2[100] = {0};

    cin.getline(str1, sizeof(str1));
    cin.getline(str2, sizeof(str2));

    stringcmp(str1, str2);

    return 0;
}
