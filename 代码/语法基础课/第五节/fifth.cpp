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

//778
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, s1, s2;
	getline(cin, s, ',');
	getline(cin, s1, ',');
	getline(cin, s2);
	if (s1.size() + s2.size() > s.size()) cout << -1 << endl;
	else
	{
		int ss1 = 0, ss2 = -1;
		for (int i = 0; i < s.size(); i++)
		{
			int j;
			for (j = 0; j < s1.size(); j++)
			{
				if (s[i + j] != s1[j]) break;
			}
			if (j == s1.size())
			{
				ss1 = i + s1.size() - 1;
				break;
			}
		}
		for (int i = s.size() - 1; i >= 0; i--)
		{
			int j;
			for (j = s2.size() - 1; j >= 0; j--)
			{
				if (s[i - (s2.size() - 1 - j)] != s2[j]) break;
			}
			if (j + 1 == 0)
			{
				ss2 = i - s2.size() + 1;
				break;
			}
		}
		if (ss2 <= ss1 || ss2 == -1 || ss1 == -1) cout << -1 << endl;
		else cout << ss2 - ss1 - 1 << endl;
	}
	return 0;
}