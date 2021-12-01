#include<iostream>
using namespace std;
int stack[100],ch,n,top,item,i;
void push(){
    if(top>=n-1){
        cout<<"\n\t STACK is over flow";
    }
    else{
        cout<<"Enter a value to be pushed:";
        cin>>item;
        top++;
        stack[top]=item;
    }
}
void pop(){
    if(top<=-1){
        cout<<"\n\t Stack is under flow";
    }
    else{
        cout<<"\n\t The POPPPED elements is "<<stack[top];
        top--;
    }
}
void display(){
    if(top>=0){
        cout<<"\n\t The elements in STACK \n";
        for(i=top; i>=0; i--)
            cout<<stack[i]<<"\n";
        cout<<"\n Press Next Choice";
    }
    else{
        cout<<"\n\t The STACK is empty";
    }
   
}

int main()
{
    top=-1;
    cout<<"\n Enter the size of STACK[MAX=100]:";
    cin>>n;
    cout<<"\n\t Stack implementation using array";
    
    do
    {
        cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT";
        cout<<"\nEnter the Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"\n\t Operation Aborting..... ";
                break;
            }
            default:
            {
                cout<<"\n\t Please Enter a Valid Choice(1/2/3/4)";
            }
                
        }
    }
    while(ch!=4);
    return 0;
}
