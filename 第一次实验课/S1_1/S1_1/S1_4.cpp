#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,area;
	cout << "�����������ε�����" << endl;
	cin >> a >> b >> c ;
	s = a + b + c;
	area = sqrt((s/2)*(s/2-a)*(s/2-b)*(s/2-c));
	cout << "�ܳ�Ϊ" << s << endl;
	cout << "���Ϊ" << area << endl;
	return 0;
}