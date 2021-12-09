#include<iostream>
using namespace std;
struct stud
{
	int rollno;
	char name[25];
	int mark[6];
};
int main()
{
	int i,total=0;
	stud s;
	cout<<"Enter the RollNo. : ";
	cin>>s.rollno;
	cout<<"Enter ur name : ";
	cin>>s.name;
	cout<<"Enter ur marks\n";
	for(i=0;i<6;i++)
	{
		cin>>s.mark[i];
		total=total+s.mark[i];
	}
	cout<<"UR details ARE \n";
	cout<<"Rollno  : "<<s.rollno;
	cout<<"\nName    : "<<s.name;
	cout<<"\nTotal   : "<<total;
	
	
return 0;	
}
