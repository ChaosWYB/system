#include <iostream>
using namespace std;
int main() {
	int R,a,b,x;
	int i = 1,Ans=0;
	cout << "�����������" << endl;
	cin >> x;
	cout << "������Ҫ��������ת���Ľ�����R" << endl;
	cin >> R;
	do {
		a = x / R;
		b = x % R;
		Ans = Ans + b * pow(10, i - 1);
		i = i + 1;
		x = a;
	} while (a>0);
	cout << "��������R���Ƶ�ת��Ϊ" << Ans << endl;
	return 0;
}