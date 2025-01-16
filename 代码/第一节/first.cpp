#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b << ' ' << a * b << endl;
//	return 0;
//}


//

//608
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	cout << "DIFERENCA = "<< a * b - c * d;
//	return 0;
//}

//604
//#include <cstdio>
//using namespace std;
//#define pai 3.14159
//int main()
//{
//	double r;
//	scanf("%lf", &r);
//	printf("A=%.4lf", pai * r * r);
//	return 0;
//}

//606
//#include <cstdio>
//using namespace std;
//int main()
//{
//	double a, b;
//	scanf("%lf%lf", &a, &b);
//	printf("MEDIA = %.5lf", (a * 3.5 + b * 7.5) / 11);//È¨ÖØÎª11
//	return 0;
//}

//609
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int num, time;
//	double salary;
//	cin >> num >> time >> salary;
//	printf("NUMBER = %d\n", num);
//	printf("SALARY = U$ %.2lf", salary * time);
//	return 0;
//}

//615
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int x;
//	double y;
//	cin >> x >> y;
//	printf("%.3lf km/l", x / y);
//	return 0;
//}

//616
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double x1, x2, y1, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//	printf("%.4lf", distance);
//	return 0;
//}

//653
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int a[7] = { 100,50,20,10,5,2,1 };
//	int n;
//	cin >> n;
//	cout << n << endl;
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d nota(s) de R$ %d,00\n", n / a[i], a[i]);
//		n %= a[i];
//	}
//	return 0;
//}

//654
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int b[3] = { 0 };
//	int a[3] = {60,60,10000};
//	for (int i = 0; i < 3; i++)
//	{
//		b[i] = n % a[i];
//		n /= a[i];
//	}
//	printf("%d:%d:%d", b[2], b[1], b[0]);
//	return 0;
//}