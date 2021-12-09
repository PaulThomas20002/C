#include <iostream>
using namespace std;
int fact (int);
int main()
{
	int n,f;
	cout<<"Enter the Number : ";
	cin>>n;
	f=fact(n);
	cout<<"\nFactorial = "<<f;
    

return 0;
}
int fact (int n)
{
	int res=1,i;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
return res;		
}
