#include<iostream>
using namespace std;
int main () {

    int power (long long x, unsigned int y, int p) {
        int res = 1;

        x = x % p;

        if (x == 0) return 0;

        while (y > 0) {

            if (y & 1) {
                res = (res * x) % p;

                y = y >> 1;
                x = (x * x) % p;
            }
            return res;
        }


        int main () {
            cout <<" enter the value of x " <<endl;
            cin>>x;
            cout <<" enter the value of y " <<endl;
            cin>>y;
            cout <<" enter the value of p " <<endl;
            cin>>p;
            cout << " the required value is " << power (x, y, p);
            return 0;
        }
    }
}
