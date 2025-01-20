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
//	printf("MEDIA = %.5lf", (a * 3.5 + b * 7.5) / 11);//权重为11
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

//605
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << "PROD = " << a * b;
//	return 0;
//}

//611
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int a, b, numa, numb;
//	double pricea, priceb;
//	cin >> a >> numa >> pricea >> b >> numb >> priceb;
//	printf("VALOR A PAGAR: R$ %.2lf", numa * pricea + numb * priceb);
//	return 0;
//}

//612
//#include<iostream>
//#include<cstdio>
//#define pai 3.14159
//using namespace std;
//int main()
//{
//	int r;
//	cin >> r;
//	printf("VOLUME = %.3lf", 4 / 3.0 * pai * r * r * r);
//	return 0;
//}

//613
//#include<iostream>
//#include<cstdio>
//#define pai 3.14159
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	printf("TRIANGULO: %.3lf\n",a*c/2);
//	printf("CIRCULO: %.3lf\n",pai*c*c);
//	printf("TRAPEZIO: %.3lf\n",(a+b)*c/2);
//	printf("QUADRADO: %.3lf\n",b*b);
//	printf("RETANGULO: %.3lf",a*b);
//	return 0;
//}

//607
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	double aver;
//	aver = (a * 2 + b * 3 + c * 5) / 10;
//	printf("MEDIA = %.1lf", aver);
//	return 0;
//}

//610
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	char name[10];
//	double salary, sale;
//	cin >> name >> salary >> sale;
//	printf("TOTAL = R$ %.2lf", salary + sale * 0.15);
//	return 0;
//}

//614
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int max_2(int x, int y)
//{
//	return (x + y + abs(x - y)) / 2;
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int max;
//	max = max_2(max_2(a, b), c);
//	cout << max << " eh o maior";
//	return 0;
//}

//617
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	double v1 = 1;//km/min
//	double v2 = 1.5;//km/min
//	int L;
//	cin >> L;
//	int time = L / (v2 - v1);
//	cout << time << " minutos";
//	return 0;
//}

//618
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	long long int t, v;
//	cin >> t >> v;
//	double oil = v * t / 12.0 * 1;
//	printf("%.3lf", oil);
//	return 0;
//}

//656
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	double n;
//	cin >> n;
//	int money = (int)((n + 0.001) * 100);//去掉0.001会导致2.01元分解错误
//	int a[12] = { 10000,5000,2000,1000,500,200,100,50,25,10,5,1 };
//	cout << "NOTAS:" << endl;
//	for (int i = 0; i < 12; i++)
//	{
//		if (i < 6)
//		{
//			printf("%d nota(s) de R$ %d.00\n", money / a[i], a[i] / 100);
//			money = money % a[i];
//		}
//		else if (i == 6)
//		{
//			cout << "MOEDAS:" << endl;
//			printf("%d moeda(s) de R$ 1.00\n", money / a[i]);
//			money = money % a[i];
//		}
//		else
//		{
//			printf("%d moeda(s) de R$ %.2lf\n", money / a[i],a[i]/100.0);
//			money = money % a[i];
//		}
//	}
//	return 0;
//}

//655
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int age;
//	cin >> age;
//	int year, month, day;
//	year = age / 365;
//	age %= 365;
//	month = age / 30;
//	day = age % 30;
//	printf("%d ano(s)\n",year);
//	printf("%d mes(es)\n", month);
//	printf("%d dia(s)\n", day);
//	return 0;
//}