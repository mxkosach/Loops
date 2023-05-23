#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	{cout<<"===== ������� 1 =========="<<endl;
	int n=100, sum=0, i=1; //cin>>n;
	cout<<"n="<<n<<endl; //������������ ������ cin
	while (i<=n)			//���������, ���� i �� ��������� n
	{
		sum+=i;				//���������� � ����� ������� i
		i++;				//����������� ���������
	}
	cout<<"����� 1+2+...+"<<n<<" = "<<sum<<endl;
	}



	{cout<<"===== ������� 2 =========="<<endl;
	cout.flags(0);
	int n=100, sum=0, i=1;
	cout<<"n="<<n<<endl;
	while (i<=n)
		sum+=++i;
	cout<<"����� 2+3+...+"<<n<<" = "<<sum<<endl;
	}



	{cout<<"===== ������� 3 =========="<<endl;
	cout.flags(0);	
	const int na=10; //������ �������
	int A[na] = {4,2,0,8,0,4,9,-3,5,-1}; //������ A
	int i = 0; //���������� � �������� ���������� � ����
	while (A[i]>=0 && i++<na);
	cout<<"������ ������������� ������� ������� A["<<i<<"] = "<<A[i]<<endl;
	}



	{cout<<"===== ������� 4 =========="<<endl;
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
	cout<<"����� = "<<fixed
		<<setprecision(4)<<sum<<endl;
	}



	{cout<<"===== ������� 5 =========="<<endl;
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
	cout<<"����� = "<<fixed
		<<setprecision(9)<<sum<<endl;
	}



	{cout<<"===== ������� 6 =========="<<endl;
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
	cout<<"���� ������� ��������\n";
	}



	{cout<<"===== ������� 7 =========="<<endl;
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


	{cout<<"===== ������� 8 =========="<<endl;
	cout.flags(0);	
	int  n=10, p=1;
	for (int i=2; i<=n; i++)
		p*=i;
	cout<<n<<"!"<<" = "<<p<<endl;
	}



	{cout<<"===== ������� 9 =========="<<endl;
	cout.flags(0);	
	int n=50; cout<<"n = "<<n<<endl;
	int i;

	for (i = 1; i<=n; i++)
	{
		cout<<"("<<setw(2)<<i<<", "<<setw(6)<<pow(i,3)<<")    ";
		if (i%5 == 0) cout<<endl;
	}
	}



	{cout<<"===== ������� 10 =========="<<endl;
	cout.flags(0);	
	double a=0, b=1, h=0.1;
	cout<<"������� a, b, h: "<<a<<" "<<b<<" "<<h<<endl;

	for (int i=0; i<25; i++) //������� �����
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



	{cout<<"===== ������� 11 =========="<<endl;
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



	{cout<<"===== ������� 12 =========="<<endl;
	cout.flags(0);	
	int n=10; cout<<"n = "<<n<<endl;

	//������� ����
	for (int i=0; i<n; i++)
	{
		//��������� ����
		for(int j=0; j<2*n; j++)

		{
			if (i==0 || (i == n-1) || (j ==0) || (j == 2*n-1)) //���� ����
				cout<<"*"; //������� *
			else
				cout<<" "; //������� ������
		}

		cout<<endl; //������� �� ���� ������
	}
	}



	{cout<<"===== ������� 13 =========="<<endl;
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
		<<"1) n = "<<n<<", k = "<<k<<", ����� = "<<sum<<endl;

	k=2; sum=1;
	while ((sum+=(1/log(k))) <= n)
		k++;
	cout<<"2) n = "<<n<<", k = "<<k<<", ����� = "<<sum<<endl;
	}



	{cout<<"===== ������� 14 =========="<<endl;
	cout.flags(0);	
	double x = 0.72,
		e = 1e-009,
		sum=0,
		a= x,	//���������
		b=x;	//�������
	int i = 1;	//������

	cout<<"�������� x = "<<x<<endl;
	cout<<"�������� e = "<<e<<endl;

	while (abs(a)>e)
	{
		sum+=a;
		b=pow(-1,++i+1) * pow(x,i);
		a=b/i;

	}
	cout<<fixed
		<<setprecision(8)<<"����� ���� = "<<sum<<endl
		<<setprecision(2)<<"ln("<<1+x<<") = "
		<<setprecision(8)<<log(1+x)<<endl;
	}


	{cout<<"===== ������� 15 =========="<<endl;
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



	{cout<<"===== ������� 16 =========="<<endl;
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
	cout<<"\n����� S("<<imax<<") �������� ������������\n";

	}


	cout << endl; system("pause");
	return 0;
}