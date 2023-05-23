#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	{cout<<"===== Задание 1 =========="<<endl;
	int n=100, sum=0, i=1; //cin>>n;
	cout<<"n="<<n<<endl; //присваивание всесто cin
	while (i<=n)			//выполнять, пока i не превышает n
	{
		sum+=i;				//прибавляем к сумме слаемое i
		i++;				//увеличиваем слагаемое
	}
	cout<<"Сумма 1+2+...+"<<n<<" = "<<sum<<endl;
	}



	{cout<<"===== Задание 2 =========="<<endl;
	cout.flags(0);
	int n=100, sum=0, i=1;
	cout<<"n="<<n<<endl;
	while (i<=n)
		sum+=++i;
	cout<<"Сумма 2+3+...+"<<n<<" = "<<sum<<endl;
	}



	{cout<<"===== Задание 3 =========="<<endl;
	cout.flags(0);	
	const int na=10; //размер массива
	int A[na] = {4,2,0,8,0,4,9,-3,5,-1}; //массив A
	int i = 0; //индексация в масссиве начинается с нуля
	while (A[i]>=0 && i++<na);
	cout<<"Первый отрицательный элемент массива A["<<i<<"] = "<<A[i]<<endl;
	}



	{cout<<"===== Задание 4 =========="<<endl;
	cout.flags(0);	
	double x=1.5,
		sum = 0,
		a = 1;
	int i = 0,
		n=30;
	cout<<"x = "<<x<<", n = "<<n<<endl;

	while (i<=n)
	{
		sum+=a;
		a*=-x;
		i++;
	}
	cout<<"Сумма = "<<fixed
		<<setprecision(4)<<sum<<endl;
	}



	{cout<<"===== Задание 5 =========="<<endl;
	cout.flags(0);	
	double x=5,
		sum =0,
		a=1,
		e=1e-009,
		b=1;
	int	i=0;
	cout<<"x = "<<x<<", e = "<<e<<endl;
	while (abs(a)>e)
	{
		sum+=a;
		b*=-pow(x,2)/(2*i+1)/(2*i+2);
		a=b*cos((i+1)*x);
		i++;
	}
	cout<<"Сумма = "<<fixed
		<<setprecision(9)<<sum<<endl;
	}



	{cout<<"===== Задание 6 =========="<<endl;
	cout.flags(0);	
	const int na=32; int A[na];
	int i=0;

	do
	{
	cin>>A[i];
	if (A[i]==0) break;
	i++;
	}
	while (i<na);
	cout<<"Ввод массива завершён\n";
	}



	{cout<<"===== Задание 7 =========="<<endl;
	cout.flags(0);	
	int n=1305709, m=2, x=n;
	const int na=32; int A[na];
	int i=0;
	do
	{
		A[i] = n % m;
		n = n/m;
		if (n==0) break;
		i++;
	}
	while (i<na);

	cout<<x<<"(10) = ";
	do
	{
		cout<<A[i];
		i--;
	}
	while (i>=0);
	cout<<"("<<m<<")"<<endl;
	}


	{cout<<"===== Задание 8 =========="<<endl;
	cout.flags(0);	
	int  n=10, p=1;
	for (int i=2; i<=n; i++)
		p*=i;
	cout<<n<<"!"<<" = "<<p<<endl;
	}



	{cout<<"===== Задание 9 =========="<<endl;
	cout.flags(0);	
	int n=50; cout<<"n = "<<n<<endl;
	int i;

	for (i = 1; i<=n; i++)
	{
		cout<<"("<<setw(2)<<i<<", "<<setw(6)<<pow(i,3)<<")    ";
		if (i%5 == 0) cout<<endl;
	}
	}



	{cout<<"===== Задание 10 =========="<<endl;
	cout.flags(0);	
	double a=0, b=1, h=0.1;
	cout<<"Введите a, b, h: "<<a<<" "<<b<<" "<<h<<endl;

	for (int i=0; i<25; i++) //верхняя черта
		cout<<"-";
	cout<<endl;
	cout<<"   x            y"<<endl;
	for (int i=0; i<25; i++)
		cout<<"-";
	cout<<endl;

	for (double x=0; x<=1; x+=h)
		cout<<"  "<<fixed
		<<setprecision(1)<<x<<"       "
		<<fixed<<setprecision(6)<<sin(x)<<endl;
	}



	{cout<<"===== Задание 11 =========="<<endl;
	cout.flags(0);	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<=10; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	}



	{cout<<"===== Задание 12 =========="<<endl;
	cout.flags(0);	
	int n=10; cout<<"n = "<<n<<endl;

	//внешний цикл
	for (int i=0; i<n; i++)
	{
		//вложенный цикл
		for(int j=0; j<2*n; j++)

		{
			if (i==0 || (i == n-1) || (j ==0) || (j == 2*n-1)) //если край
				cout<<"*"; //выводим *
			else
				cout<<" "; //выводим пробел
		}

		cout<<endl; //переход на след строку
	}
	}



	{cout<<"===== Задание 13 =========="<<endl;
	cout.flags(0);	
	int n = 25,
		k = 2;
	double sum = 1;
	while (n)
	{
		sum+=(1/log(k));
		if (sum>n) break;
		k++;
	}
	cout<<fixed<<setprecision(5)
		<<"1) n = "<<n<<", k = "<<k<<", сумма = "<<sum<<endl;

	k=2; sum=1;
	while ((sum+=(1/log(k))) <= n)
		k++;
	cout<<"2) n = "<<n<<", k = "<<k<<", сумма = "<<sum<<endl;
	}



	{cout<<"===== Задание 14 =========="<<endl;
	cout.flags(0);	
	double x = 0.72,
		e = 1e-009,
		sum=0,
		a= x,	//слагаемое
		b=x;	//степень
	int i = 1;	//индекс

	cout<<"Аргумент x = "<<x<<endl;
	cout<<"Точность e = "<<e<<endl;

	while (abs(a)>e)
	{
		sum+=a;
		b=pow(-1,++i+1) * pow(x,i);
		a=b/i;

	}
	cout<<fixed
		<<setprecision(8)<<"Сумма ряда = "<<sum<<endl
		<<setprecision(2)<<"ln("<<1+x<<") = "
		<<setprecision(8)<<log(1+x)<<endl;
	}


	{cout<<"===== Задание 15 =========="<<endl;
	cout.flags(0);	
	int a,b,c,i,n=15;
	a=0; b=1;
	for(i=2; i<=n; i++) 
	{
		c=a+b; a=b; b=c;
	}
	cout<<"F1("<<n<<") = "<<c<<endl;


	a=0;b=1,c;i=2;n=15;
	for(i; i<=n; i++) 
	{
		c=a+b; a=b; b=c;
	}
	cout<<"F2("<<n<<") = "<<c<<endl;


	a=0;b=1,c;i=2;n=15;
	for(;;) 
	{
		c=a+b; a=b; b=c;
		i++;
		if (i>n) break;
	}
	cout<<"F3("<<n<<") = "<<c<<endl;
	}



	{cout<<"===== Задание 16 =========="<<endl;
	cout.flags(0);	
	const int n = 10; int X[n*n] =
	{
		-16, 95,-42, 42,-59,-56,-91, 50, -3, 88,
		10, 87,-48,-44, 97,-43, 61, 37,-88, 72,
		48, 10,-92, 66,-97,-17,-53,-30,-42, 87,
		60,-86, 34,-34,-37, 57,-85,-53, 63,-89,
		-72, 87, 18, 33, 53,-59, 14, 88,-23, 2,
		-61, 92,-26,-93, 96,-12, 65, 5, 23, 88,
		21,-36, 78,-48,-10,-52,-86, 61, 68, 24,
		-24, 56,-26, 26,-84, 45,-36, 9,-89, 87,
		-55,-51,-27,-63,-95, 33,-26, 53, 11, 83,
		-49, -3,-20,-88, 70,-31, 8,-47, 23,-26
	};
	int sum,
		smax = -999,
		imax;

	for (int i=0; i<n; i++)
	{
		sum = 0;
		for (int j=0; j<n; j++)
			sum+=X[i*n+j];
		cout<<"S("<<i<<") = "<<sum<<endl;

		if (sum>smax)
		{
			smax=sum; imax=i;
		}

	}
	cout<<"\nСумма S("<<imax<<") является максимальной\n";

	}


	cout << endl; system("pause");
	return 0;
}