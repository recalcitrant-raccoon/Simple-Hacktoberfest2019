#include<iostream>
using namespace std;

int  Factorial(int n)
{
    if(n==1) return 1;
    else 
    return n*Factorial(n-1);
}

int main()
{
    int num;
    cin >> num;
    int Result = Factorial(num);
    cout << Result;
    return 0;
}