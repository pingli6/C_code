#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cout << "������ϵ�� a b c" << endl;
	cin >> a >> b >> c;
	if((b*b-4*a*c) <0 )
	{
		cout << "��ʵ��" << endl;
	}
	else
	{
		x1 = (-b + sqrt(b*b-4*a*c))/2*a;
		x2 = (-b - sqrt(b*b-4*a*c))/2*a;
	}
	cout << "ʵ��Ϊ" << x1 << "��" << x2 << endl;
	return 0;
}