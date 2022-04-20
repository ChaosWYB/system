#include <iostream>
using namespace std;
int main() {
	int R,a,b,x;
	int i = 1,Ans=0;
	cout << "请输入该数字" << endl;
	cin >> x;
	cout << "请输入要将该数字转化的进制数R" << endl;
	cin >> R;
	do {
		a = x / R;
		b = x % R;
		Ans = Ans + b * pow(10, i - 1);
		i = i + 1;
		x = a;
	} while (a>0);
	cout << "该数字在R进制的转化为" << Ans << endl;
	return 0;
}