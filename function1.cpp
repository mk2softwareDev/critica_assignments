// FACTORIAL (COMBINATION)
#include<iostream>
using namespace std;

unsigned int fact(int n)
{
    int factorial = 1;
    for( int i = 1;i<= n;i++)
    {
        factorial *= i;
    }
    return factorial;
}

// FIBONACCI( using a function prototype ) ----- MODEL - RECURSSION
                         /* int type is used as return type plan is  return int , no other datatype*/
int fibbo( int a )
{

    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
       return fibbo(a-1)+fibbo(a-2);
    }

}

// FIBONACCI ( using a function prototype ) ----- ( FOR LOOP )
int fibb( int v )
{
    int t1 = 0;
    int t2 = 1;
    int term ;
    for (int i = 1;i<=v;i++)
    {
        term = t1+t2;
        t1 = t2;
        t2 = term;
    }
    return term;
}

int main()
{
    int exp,r;
    cout <<" enter the number of combination "<<endl;
    cin>>exp>>r;

    int ans = fact(exp)/(fact(r)*fact(exp - r));
    cout <<" the combination of the number "<<ans<<endl;

    unsigned int a;
    cout <<"enter value of a"<<endl;
    cin>>a;
    cout <<"the fibbo(a) is "<<fibbo(a)<<endl;

    unsigned int v;
    cout <<"enter value of v"<<endl;
    cin>>v;
    cout <<"the fibb(v) is "<<fibb(v)<<endl;

}
