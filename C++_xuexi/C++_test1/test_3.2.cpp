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
//	struct Stu s = {11,"12341234123","����"};
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
// ����Ķ��ֲ���
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
//		int mid = (left + right) / 2; //ʹ��mid = left + ( right - left)/2  ���Է�ֹleft+right̫������
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
//			cout << "�ǵ�" << mid+1 << "����" << endl;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		cout << "�Ҳ���" << endl;
//	}
//
//	return 0;
//}
//��ʾ����ַ����������м���
//#include<string.h>
//#include<stdlib.h>//system��һ���⺯��������ִ��ϵͳ����
//#include<windows.h>//Sleep�����ӳ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";	//�ĳɿո����Ч��
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
//ģ���û���¼  ��ȷ����Ϊabcdef   �������3��
//�Ƚ������ַ����Ƿ���ȣ�������==����Ҫ�ú���strcmp,�������ֵΪ0�����
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		char arr[20] = { 0 };
//		cout << "���������룺" << endl;
//		cin >> arr;
//		if (!strcmp(arr, "abcdef"))
//		{
//			cout << "��¼�ɹ�" << endl;
//			break;
//		}
//		else
//		{
//			cout << "������󣬻�ʣ" << 2 - i << "�λ���" << endl;
//		}	
//	}
//	if (i == 3)
//	{
//		cout << "��¼ʧ�ܣ�û�л����ˣ�" << endl;
//	}	
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	cout << "��ѡ��" << endl;
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
//		cout << "������µ�����" << endl;
//		cin >> guess;
//		if (guess == ret)
//		{
//			cout << "�¶��ˣ�" << endl;
//			break;
//		}
//		else if (guess < ret)
//		{
//			cout << "��С��" << endl;
//		}
//		else
//		{
//			cout << "�´���" << endl;
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
//			cout << "�˳���Ϸ" << endl;
//			break;
//		default:
//			cout << "������ѡ��" << endl;
//		}
//
//	} while (input);	
//	return 0;
//}
//����goto�Ĺػ�ѭ������Ҫ���׳��ԣ����׷�����
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	cin >> arr;
//	//cout << arr <<endl;	
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
