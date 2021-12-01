#include <iostream>
using namespace std;
int main(){
    
    int ar[25], n, i ,j, min, pos;
    cout<<"How many elements?";
    cin>>n;
    cout<<"Enter the array elements";
    for(i=0; i<n;i++)
        cin>>ar[i];
    for(i=0; i<n-1;i++){
        min=ar[i];
        pos=i;
        for(j=i+1; j<n; j++){
            if(ar[j]<min){
                min=ar[j];
                pos=j;
            }
        }
        if(pos!=i){
            ar[pos]=ar[i];
            ar[i]=min;
        }
    }
cout<<"Sorted array is..\n";
for(i=0;i<n;i++){
    cout<<ar[i];
}
    return 0;
}
