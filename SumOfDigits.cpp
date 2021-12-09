#include <iostream>
using namespace std;
int main()
{
	int sum=0,p,n;
	cout<<"Enter the number : ";
	cin>>n;
	while(n>0)
	{
		p=n%10;
		sum=sum+p;
		n=n/10;
	}
	cout<<"The sum of the digits = "<<sum;
return 0;
}


