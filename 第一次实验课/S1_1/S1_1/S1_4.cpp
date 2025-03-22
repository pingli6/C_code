#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,area;
	cout << "请输入三角形的三边" << endl;
	cin >> a >> b >> c ;
	s = a + b + c;
	area = sqrt((s/2)*(s/2-a)*(s/2-b)*(s/2-c));
	cout << "周长为" << s << endl;
	cout << "面积为" << area << endl;
	return 0;
}