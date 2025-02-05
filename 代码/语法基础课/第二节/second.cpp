#define _CRT_SECURE_NO_WARNINGS 1

//665
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a % b == 0 || b % a == 0)
//	{
//		cout << "Sao Multiplos";
//	}
//	else
//	{
//		cout << "Nao sao Multiplos";
//	}
//	return 0;
//}

//660
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int x, y;
//	double arr[5] = { 4,4.5,5,2,1.5 };
//	double total;
//	cin >> x >> y;
//	for (int i = 1; i <= 5; i++)
//	{
//		if (x == i)
//		{
//			total = arr[i - 1] * y;
//			break;
//		}
//	}
//	printf("Total: R$ %.2lf", total);
//	return 0;
//}

//659
//#include<iostream>
//using namespace std;
//int main()
//{
//	double f;
//	cin >> f;
//	if (f < 0 || f>100)
//		cout << "Fora de intervalo";
//	else if (f >= 0 && f <= 25)
//		cout << "Intervalo [0,25]";
//	else if (f > 25 && f <= 50)
//		cout << "Intervalo (25,50]";
//	else if (f > 50 && f <= 75)
//		cout << "Intervalo (50,75]";
//	else
//		cout << "Intervalo (75,100]";
//	return 0;
//}

//664
//#include<cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a + b > c && a + c > b && b + c > a)
//		printf("Perimetro = %.1lf", a + b + c);
//	else
//		printf("Area = %.1lf", (a + b) * c / 2);
//	return 0;
//}

//667
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//		printf("O JOGO DUROU %d HORA(S)", 24 - a + b);
//	else if (a == b)
//		printf("O JOGO DUROU 24 HORA(S)");
//	else
//		printf("O JOGO DUROU %d HORA(S)", b - a);
//	return 0;
//}

//669
//#include <cstdio>
//using namespace std;
//int main()
//{
//    double n;
//    scanf("%lf", &n);
//    int per = 0;
//    if (n >= 0 && n <= 400.00)
//        per = 15;
//    else if (n <= 800.00)
//        per = 12;
//    else if (n <= 1200.00)
//        per = 10;
//    else if (n <= 2000.00)
//        per = 7;
//    else
//        per = 4;
//    double add = n * per / 100;
//    printf("Novo salario: %.2lf\n", n + add);
//    printf("Reajuste ganho: %.2lf\n", add);
//    printf("Em percentual: %d %%\n", per);
//    return 0;
//}

//670
//#include <iostream>
//using namespace std;
//int main()
//{
//	string a, b, c;
//	cin >> a >> b >> c;
//    if (a == "vertebrado") 
//    {
//        if (b == "ave") 
//        {
//            if (c == "carnivoro")
//                cout << "aguia";
//            else 
//                cout << "pomba";
//        }
//        else 
//        {
//            if (c == "onivoro")
//                cout << "homem";
//            else 
//                cout << "vaca";
//        }
//    }
//    else 
//    {
//        if (b == "inseto") 
//        {
//            if (c == "hematofago")
//                cout << "pulga";
//            else 
//                cout << "lagarta";
//        }
//        else 
//        {
//            if (c == "hematofago")
//                cout << "sanguessuga";
//            else 
//                cout << "minhoca";
//        }
//    }
//    return 0;
//}

//657
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0)
//		cout << "Valores aceitos" << endl;
//	else
//		cout << "Valores nao aceitos" << endl;
//	return 0;
//}

//671
//#include <iostream>
//using namespace std;
//int main()
//{
//    int x;
//    cin >> x;
//    if (x == 61)   
//        cout << "Brasilia" << endl;
//    else if (x == 71) 
//        cout << "Salvador" << endl;
//    else if (x == 11) 
//        cout << "Sao Paulo" << endl;
//    else if (x == 21) 
//        cout << "Rio de Janeiro" << endl;
//    else if (x == 32) 
//        cout << "Juiz de Fora" << endl;
//    else if (x == 19) 
//        cout << "Campinas" << endl;
//    else if (x == 27) 
//        cout << "Vitoria" << endl;
//    else if (x == 31) 
//        cout << "Belo Horizonte" << endl;
//    else 
//        cout << "DDD nao cadastrado" << endl;
//    return 0;
//}

//662
//#include<iostream>
//using namespace std;
//int main()
//{
//	double x, y;
//	cin >> x >> y;
//	if (x == 0 && y == 0)
//		cout << "Origem";
//	else if (x == 0)
//		cout << "Eixo Y";
//	else if (y == 0)
//		cout << "Eixo X";
//	else if (x > 0 && y > 0)
//		cout << "Q1";
//	else if (x < 0 && y > 0)
//		cout << "Q2";
//	else if (x < 0 && y < 0)
//		cout << "Q3";
//	else if (x > 0 && y < 0)
//		cout << "Q4";
//	return 0;
//}

//666
//#include<iostream>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if(b > a)
//		swap(a, b);
//	if(c > a)
//		swap(a, c);
//	if(c > b)
//		swap(b, c);
//	if (a >= b + c)
//		cout << "NAO FORMA TRIANGULO" << endl;
//	else
//	{
//		if (a * a == b * b + c * c)
//			cout << "TRIANGULO RETANGULO" << endl;
//		else if (a * a > b * b + c * c)
//			cout << "TRIANGULO OBTUSANGULO" << endl;
//		else
//			cout << "TRIANGULO ACUTANGULO" << endl;
//		if (a == b && b == c)
//			cout << "TRIANGULO EQUILATERO" << endl;
//		else if (a == b ||  b == c)
//			cout << "TRIANGULO ISOSCELES" << endl;
//	}
//	return 0;
//}

//668
//法一（常规）：
//#include<cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int start = a * 60 + b;
//	int end = c * 60 + d;
//	int spent_time = end - start;
//	if (spent_time <= 0)
//		spent_time = 24 * 60 - start + end;
//	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", spent_time / 60, spent_time % 60);
//	return 0;
//}
// 
//法二（预先设定差一天后用余数处理，需要注意时间差为24小时的时候取余会变为0，需要特殊处理一下）：
//#include<cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	b += a * 60;//转化成分钟数
//	d += c * 60;
//	a = (d - b + 24 * 60) % (24 * 60);//预先设定多一天的分钟数，通过取模得到经过的时间
//	a = (a) ? (a) : (24 * 60);//若a为0，则过去了一天，特殊处理
//	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", a / 60, a % 60);
//	return 0;
//}

//672
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	double s;
//	cin >> s;
//	if (s <= 2000)
//		cout << "Isento" << endl;
//	else if (s <= 3000)
//		printf("R$ %.2lf", (s - 2000) * 0.08);
//	else if (s <= 4500)
//		printf("R$ %.2lf", (3000 - 2000) * 0.08 + (s - 3000) * 0.18);
//	else
//		printf("R$ %.2lf", (3000 - 2000) * 0.08 + (4500 - 3000) * 0.18 + (s - 4500) * 0.28);
//	return 0;
//}

//663
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y, z, x1, y1, z1;
//	cin >> x >> y >> z;
//	x1 = x, y1 = y, z1 = z;
//	if (x > y) swap(x, y);
//	if (x > z) swap(x, z);
//	if (y > z) swap(y, z);
//	cout << x << endl << y << endl << z << endl << endl << x1 << endl << y1 << endl << z1 << endl;
//	return 0;
//}

//658
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a == 0 || b * b - 4 * a * c < 0)
//		cout << "Impossivel calcular";
//	else
//		printf("R1 = %.5lf\nR2 = %.5lf", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
//	return 0;
//}