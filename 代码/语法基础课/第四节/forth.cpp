#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;

////浮点数的比较运算
//double C(int a, int b)//组合数运算
//{
//	double res = 1;
//	for (int i = 1, j = a; i <= b; i++, j--)
//		res = res * j / i;
//	return res;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	printf("%.10lf\n", C(a, b));
//	return 0;
//}

//756
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int res[100][100] = { 0 };
	cin >> n >> m;
	int dx[] = { 0,1,0,-1 }, dy[] = { 1,0,-1,0 };
	for (int x=0,y=0,k=1,d=0; k <= n*m; k++)
	{
		res[x][y] = k;
		int a = x + dx[d], b = y + dy[d];
		if (a < 0 || a >= n || b < 0 || b >= m||res[a][b])
		{
			d = (d + 1) % 4;
			a = x + dx[d], b = y + dy[d];
		}
		x = a,y = b;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			{
				cout << res[i][j] << ' ';
			}
		cout << endl;
	}
	return 0;
}