#include <iostream>
using namespace std;
void swap(int *,int *);
int main()
{
	int a,b,*ptra,*ptrb;
	cout<<"Enter the values\n";
	cin>>a>>b;
	ptra=&a;
	ptrb=&b;
	swap(ptra,ptrb);
	return 0;
	
}
void swap(int *x,int *y)
{
	int *temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"After swapping \nA and B are "<<*x<<" AND "<<*y;
	
}
