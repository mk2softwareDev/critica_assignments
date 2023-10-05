#include<iostream>
using namespace std;
//1] bit pattern in floyd s triangle (one of my beautiful thought in code)
//2] rhombus pattern
//3] triangle
//4] pallindromic numbers
//5] star pattern
//6] zigzag
int main() {
    int t;
    cout <<" enter the number of times you want to check "<<endl;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int a;
        cout << "the number whoose reverse is needed "<<endl;
        cin>>a;
        cout <<" the reverse of given number is "<<endl;
        while(a>0)
        {
            int rev;
            rev = a%10;
            a = a/10;
            cout <<rev;
        }
    }
}