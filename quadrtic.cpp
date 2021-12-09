#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,d,root1,root2;
	
	cout<<"Enter the co-efficients\n";
	cin>>a>>b>>c;
	if(!a)
	{ 
	cout<<"A shouls not be zero...Aborting!!!";
	}
	else
	{
	 d=(b*b-4*a*c);
	 if(d>0)
	 {
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		cout<<"roots are real and unequal\n";
		cout<<"Root1="<<root1<<"\nRoot2="<<root2;
	}
	else if(d==0)
	{
		root1=-b/(2*a);
		cout<<"Roots are real and equal\n"<<"Root="<<root1;
	}
	else if(d<0)
	{
		cout<<"root are unreal and imaginary";
	}
	}//end of  else
	
	return 0;
}
