#include<iostream>
using namespace std;
//struct Stu
//{
//	int age;
//	char num[20];
//	char name[20];
//};
//int main()
//{
//	struct Stu s = {11,"12341234123","张三"};
//	struct Stu* p = &s;
//	p->age = 12;
//	cout << s.age << endl;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int res = 1;
//	while (n)
//	{
//		res = n * res;
//		n--;
//	}
//	cout << res << endl;
//
//	return 0;
//}
// 数组的二分查找
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int arr[] = { 12,16,18,22,30,40,45,88,89 };
//	int len = sizeof(arr) / sizeof(int);	
//	int right = len - 1;
//	int left = 0;	
//	while (left <=  right)
//	{
//		int mid = (left + right) / 2; //使用mid = left + ( right - left)/2  可以防止left+right太大而溢出
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			cout << "是第" << mid+1 << "个数" << endl;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		cout << "找不到" << endl;
//	}
//
//	return 0;
//}
//演示多个字符从两端向中间汇聚
//#include<string.h>
//#include<stdlib.h>//system是一个库函数，可以执行系统命令
//#include<windows.h>//Sleep可以延迟
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";	//改成空格更有效果
//	int left = 0;
//	int right = strlen(arr1) - 1;  //int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		cout << arr2<<endl;
//		left++;
//		right--;
//		Sleep(500);
//		system("cls");
//	}
//	cout << arr2 << endl;
//	return 0;
//}
//模拟用户登录  正确密码为abcdef   最多输入3次
//比较两个字符串是否相等，不能用==，而要用函数strcmp,如果返回值为0则相等
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		char arr[20] = { 0 };
//		cout << "请输入密码：" << endl;
//		cin >> arr;
//		if (!strcmp(arr, "abcdef"))
//		{
//			cout << "登录成功" << endl;
//			break;
//		}
//		else
//		{
//			cout << "密码错误，还剩" << 2 - i << "次机会" << endl;
//		}	
//	}
//	if (i == 3)
//	{
//		cout << "登录失败，没有机会了！" << endl;
//	}	
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	cout << "请选择" << endl;
//	cout << "######### 1.play ##########" << endl;
//	cout << "######### 0.exit ##########" << endl;
//}
//void Game()
//{
//
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		//cout << ret << endl;
//		cout << "请输入猜的数字" << endl;
//		cin >> guess;
//		if (guess == ret)
//		{
//			cout << "猜对了！" << endl;
//			break;
//		}
//		else if (guess < ret)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜大了" << endl;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand(time(NULL));
//	do
//	{
//		menu();	
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			Game();
//			break;
//		case 0:
//			cout << "退出游戏" << endl;
//			break;
//		default:
//			cout << "请重新选择" << endl;
//		}
//
//	} while (input);	
//	return 0;
//}
//利用goto的关机循环（不要轻易尝试，容易翻车）
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	cin >> arr;
//	//cout << arr <<endl;	
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
