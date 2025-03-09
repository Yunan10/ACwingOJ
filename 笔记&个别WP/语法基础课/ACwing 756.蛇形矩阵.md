## 思维：偏移量法
给定坐标轴，想象他在坐标轴里面走，然后给定判断条件：
1.走到边界 2.走到重复的格子
题目从左上角开始走，那么就以左上点为坐标轴，竖直向下为x轴，水平向右为y轴，x对应行坐标，y对应列坐标
变化为顺时针旋转90°
x的变化为`0 1 0 -1`   y的变化为`1 0 -1 0` 
所以循环时直接以xy坐标开始遍历，设置k为所填数字，每次加1，最大不超过n\*m，再以d来标记xy的变化
使用a，b先来假设坐标下一步的变化，方便判断是否需要转向

```c++
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
```



