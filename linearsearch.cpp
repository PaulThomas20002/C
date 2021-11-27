#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num, loc=-1;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            loc = i;
            break;
        }
    }
    if(loc!=-1)
      cout<<"\nFound at Index No."<<index;
     else
      cout<<"\n Element not found";
      
    return 0;
}
