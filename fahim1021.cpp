#include <iostream>
 using namespace std;

int main(){
	int sum;
	double n,fsum;
	cin>>n;
	cout<<"NOTAS:"<<endl;
		sum=n/100;
		cout<<sum<<" nota(s) de R$ 100.00"<<endl;
		fsum=sum*100;
		n=n-fsum;
		sum=n/50;
		cout<<sum<<" nota(s) de R$ 50.00"<<endl;
		fsum=sum*50;
		n=n-fsum;
		sum=n/20;
		cout<<sum<<" nota(s) de R$ 20.00"<<endl;
		fsum=sum*20;
		n=n-fsum;
		sum=n/10;
		cout<<sum<<" nota(s) de R$ 10.00"<<endl;
		fsum=sum*10;
		n=n-fsum;
		sum=n/5;
		cout<<sum<<" nota(s) de R$ 5.00"<<endl;
		fsum=sum*5;
		n=n-fsum;
		sum=n/2;
		cout<<sum<<" nota(s) de R$ 2.00"<<endl;
		fsum=sum*2;
		n=n-fsum;
		sum=n/1;
		cout<<"MOEDAS:"<<endl;
		cout<<sum<<" moeda(s) de R$ 1.00"<<endl;
		fsum=sum*1;
		n=n-fsum;
		sum=n/.50;
		cout<<sum<<" moeda(s) de R$ 0.50"<<endl;
		fsum=sum*.50;
		n=n-fsum;
		sum=n/.25;
		cout<<sum<<" moeda(s) de R$ 0.25"<<endl;
		fsum=sum*.25;
		n=n-fsum;
		sum=n/.10;
		cout<<sum<<" moeda(s) de R$ 0.10"<<endl;
		fsum=sum*.10;
		n=n-fsum;
		sum=n/.05;
		cout<<sum<<" moeda(s) de R$ 0.05"<<endl;
		fsum=sum*.05;
		n=n-fsum;
		fsum=n/.01;
		cout<<fsum<<" moeda(s) de R$ 0.01"<<endl;

	return 0;
	}
