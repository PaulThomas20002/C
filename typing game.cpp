#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	 string a,c;
	 char b[50],d[50];
	 cout<<"This Is A Typing Game \n";
	 a="As all know in America, blacks and whites crisis";
	 c="This is A Typing Game";
	 cout<<"Start Typing Which comes on screen \n"<<c<<"\n";
	 cin.getline(b,50);
	 if(c==b)
	 {
	 	cout<<"Success \n"<<a<<"\n";
	 	cin.getline(d,50);
	 	if(a==d)
		 {
	 		cout<<"Success";
		 }
		 else{
		 	cout<<"shit ....*****&&*%";
		 }
     }
	 else
	 {
     	cout<<"Shit";
	 }

return 0;
}

