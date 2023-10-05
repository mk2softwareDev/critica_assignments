// GCD
#include<iostream>
using namespace std;

int gcd(int a , int b)
{

    while(a%b > 0)
    {
       int dividend = b;
       int divisor = a%b;
       b = divisor;
       a = b;

    }
    return b;
}
int main()
{
    int a;
    int b;
    cout <<" enter dividend "<<endl;
    cin>>a;
    cout <<" enter divisor "<<endl;
    cin>>b;
    if ((a>b))
    {
        cout <<" the gcd of numbers are "<<endl;
        cout <<gcd(a,b)<<endl;
    }
    else
    {
        cout <<" learn gcd then try "<<endl;
    }

}

