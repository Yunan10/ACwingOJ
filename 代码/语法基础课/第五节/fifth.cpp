#define _CRT_SECURE_NO_WARNINGS 1

//ACwing 771
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	string a;
//	cin >> n;
//	while (n--)
//	{
//		cin >> a;
//		int count = 0;
//		char c;
//		for (int i = 0; i < a.size(); i++)
//		{
//			int j = i + 1;
//			while (j < a.size() && a[i] == a[j])
//				j++;
//			if (j - i > count)
//			{
//				count = j - i;
//				c = a[i];
//			}
//			i = j - 1;
//		}
//		cout << c << ' ' << count << endl;
//	}
//	return 0;
//}

//771
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1.size() < s2.size()) swap(s1, s2);
//	for (int i = 0; i < s1.size(); i++)//移位 
//	{
//		s1 = s1.substr(1) + s1[0];
//		for (int j = 0; j + s2.size() <= s1.size(); j++)//判断是不是子串 ,j为s1起点 
//		{
//			int k;
//			for (k = 0; k < s2.size(); k++)//遍历s2 
//			{
//				if (s1[j + k] != s2[k]) break;
//			}
//			if (k == s2.size())
//			{
//				cout << "true" << endl;
//				return 0;
//			}
//		}
//	}
//	cout << "false" << endl;
//	return 0;
//}