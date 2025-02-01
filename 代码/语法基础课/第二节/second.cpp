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
