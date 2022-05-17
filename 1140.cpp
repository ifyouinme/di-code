#include <iostream>
#include <string>
using namespace std;

void x(string &str)
{
    int i=0,j=str.size()-1;//字符串长度，双指针
    while(i<=j)
    {
        if(str[i] != str[j])
        {
            cout<<"N"<<endl;
            break;
        }
        i++;
        j--;
    }
    if(i>j) cout<<"Y"<<endl;
}
int main()
{
    string str;
    cin>>str;
    x(str);
    
    return 0;
}