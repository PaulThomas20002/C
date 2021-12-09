#include <iostream>
using namespace std;
int main()
{
 int password,passcode=7,num,snum=2255;
 char name[25];
 cout<<"Are you a Robot"<<"\n";
 cout<<"Enter the Captcha #^%7*%$#*"<<"\n"; 
 for( int i=0;i<5;i++)
  {
  	cin>>password;
	  if (passcode==password)
	  {
	  	   cout<<"Name of the Player";
	  	   cin>>name;
	  	   cout<<"\n"<<"Hi"<<name<<"\n";
		   cout<<"Welcome to the Somethin\n";
			cout<<"Guess the secret Number\n";
	  	   
	  	    for(int j=0;j<5;j++)
	  	    {
	  	     cin>>num;
	  	    if(num==snum)
		       cout<<"You win!!!";
		       break;
		    else
		       cout<<"try again man\n";
			}
		    
			 		
	  }
	  
	cout<<"\n";      
   }
	if(passcode!=password)
	    cout<<"sorry , Try again";	
   

 }
