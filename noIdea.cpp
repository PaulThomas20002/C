#include<iostream>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
using namespace std;
void star(int);
int main()
{
	int i,j,ch,num,passcode,num1(7),num2(2255),a[10][10];
	string name;
	star(25);
	cout<<"\n";
	
	cout<<"VERY WARM WELCOME TO PAUL'S GUESSING GAME\n";
	star(11);
	cout<<"\n";
	star(11);
    cout<<"\n(1)= Register Now\n";
    star(11);
	cout<<"\n(2)= Trial Game\n";
	star(11);
	cout<<"\n(0)= Exit Game\n";
	cin>>ch;
	if(ch==0){
		exit(0);
	}
	switch(ch)
	{
	 case 1:
		    cout<<"NAME OF PLAYER\n";
	       

	            cin>>name;
	             
                cout<<"Hi"<<" "<<name;
             	cout<<"\n"<<"Guess this number which related to Paul fav Footballer Number (5 CHANCES)\n";
             	cout<<"1\t"<<"2\t"<<"3\n\n";
             	cout<<"4\t"<<"5\t"<<"6\n\n";
             	cout<<"7\t"<<"8\t"<<"9\n\n";
				  for(j=0;j<5;j++)
				  {
				    cin>>num;
				   
             	    if(num==num1)
             	      {
             	        cout<<"Congratulations.."<<"\n"<<name<<" WIN\a"<<"\a"<<"\a"<<"\a"<<"\a\n";
				  	    star(25);cout<<"\n";
				  	    star(25);
						  break;	
		              }
					
					   
				  }
           
			break;
             		
               
		case 2:
		        cout<<"\n"<<"Guess this number which related to Mohanlal\n";
		        for(j=0;j<5;j++)
				{
					 
             		 cin>>num;
             		 if(num==num2)
             		 {
             		  cout<<"YOU WIN\a"<<"\a"<<"\a"<<"\a"<<"\a";
					  break;			 
					 }
	
					   
				}
				break;
		        
		default:cout<<"Error found";
		               break;

	
	}

	return 0;
	   
}
void star(int n)
{
	for(int i=0;i<n;i++)
	
	{
		cout<<"*"<<" ";
	}
}
