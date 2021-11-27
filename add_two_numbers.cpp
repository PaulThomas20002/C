#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2, sum;
    
    cout << "Enter two integers: ";
    cin >> Num1 >> Num2;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sum = Num1 + Num2;

    // Prints sum 
    cout << Num1 << " + " <<  Num2 << " = " << sum;     

    return 0;
}
