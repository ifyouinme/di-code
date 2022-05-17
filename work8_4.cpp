#include <iostream>
using namespace std;
void swap_str(char **ap, char **bp)
{
	char *temp;
	temp = *ap;
	*ap = *bp;
	*bp = temp;
}

int main()
{
	char *ap = "hello", *bp = "how are you";
	cout << "交换前：\n";
	cout << ap << "，" << bp << endl;
	//此处调用swap_str函数交换ap和bp
	swap_str(&ap, &bp);
	cout << "交换后：\n";
	cout << ap << "，" << bp << endl;
	return 0;
}
