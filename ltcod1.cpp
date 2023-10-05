//Switch case
//Evenfunction
//Arithmetic progression

#include<iostream>
using namespace std;
/* syntax
 * switch(expression)
 * {
 *   case(const 1): constant = int/char/bool , constant != float/string
 *     statements
 *   case(const 2):
 *     statements
 *   default:
 *
 *  }
 */

int fibbo(int a)
{
    cout<<" enter number "<<endl;
    if(a==0 || a==1)
    {
        return a;
    }
    else
    {
        return fibbo(a-1)+fibbo(a-2);
    }
}
bool isEven(int a)
{
    cout<<" enter the number "<<endl;
    cin>>a;
    if(a&1)
    {
        return false;
    }
    return true;
}


int main()
{
    int num;
    cout<<" enter number "<<endl;
    cin>> num;
    cout<<" the number "<<isEven(num)<<endl;

    int a,b;
    char op;
    cout<<" enter first numb "<<endl;
    cin>>a;
    cout<<" enter operator "<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
        {
            for(int i = 0;i<10;i++)
            {
                cout<< a << "+" << i <<" "<<"=" << (a+i)<<endl;
            }
            break;
        }
        case '-':
        {
            for(int i = 0;i<10;i++)
            {
                cout<< a << "-" << i <<" "<<"="  << (a-i)<<endl;
            }
            break;
        }
        case '*':
        {
            for (int i = 0; i < 10; i++)
            {
                cout << a << "*" << i << " " <<"="<< (a * i) << endl;
            }
            break;
        }
        case '/':
        {
            for (int i = 1; i < 10; i++)
            {
                cout << a << "/" << i << " " <<"="<< (a / i) << endl;
            }
            break;
        }
    }
    int value;
    cout<<" enter the number "<<endl;
    cin>>value;
    cout<<" the fibbonacci of the number "<<fibbo(value)<<endl;
}


