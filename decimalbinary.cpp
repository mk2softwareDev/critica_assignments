#include<iostream>
#include<cmath>
using namespace std ;
// Decimal to binary
int main() {
    /*
    cout<<" enter the number "<<endl;
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;

    while(n != 0)
    {
        /* bit & 1 == 0 is 'even' bit & 1 == 1 is 'odd'
    int digit = n & 1;
    ans = digit * (pow (10, i)) + ans;
    /* right shift
    n = n >> 1;
    i++;
}
cout<<" binary equivalent of the "<<n<<ans<<" ";
*/
// Binary to decimal
    int n;
    cout << " enter the number "<<" ";cin>>n;
    int ans = 0;
    int i = 0;
    while ( n != 0)
    {
        /* digit extraction */
        int digit = n % 10;
        if  (digit  == 1)
        {
            ans = digit*(pow(2,i)) + ans ;
        }
        /* divide */
        n = n/10;
        i++;

    }
    cout<<" the decimal equivalent "<<n<<" is "<<ans<<endl;
}