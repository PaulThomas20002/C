#include<iostream>
using namespace std;
int main(){
    int ar[25], max,first, last, mid, i, item , loc=-1;
    cout<<"How many elements : ";
    cin>>max;
    cout<<"Enter the array elements in ascending order ";
    for(i=0; i<max; i++)   
        cin>>ar[i];
    cout<<"Enter the item to search : ";
    cin>>item;
    first=0;
    last=max-1;
    while(first<=last){
        mid=(first+last)/2;
        if(item==ar[mid]){
            loc=mid;
            break;
        }
        if(item<ar[mid])
            last=mid-1;
        else
            first=mid+1;
    }    
    if (loc==-1)
        cout<<"The item is not found in the array";
    else
        cout<<"The item found at position"<<loc+1;
    
    return 0;
}
