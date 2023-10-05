/*#include<iostream>
using namespace std;
int main()
{
    /* the size of array cannot be user input , vector or pointer method method have to be used .*/
    /* makke a big size array and take input of array[i] smaller from number , eg is below */
    /*int item ;
    cout <<" the number of item in arrays "<<endl;
    cin>>item;
    int binsearch[100];
    if (item <=100) {
        for (int i = 1; i <= item; i++) {
            cout << " enter nums "<<endl;
            cin >>binsearch[i - 1];
        }
        int max = binsearch[0];
        for (int i = 1; i <= item; i++) {
            if (binsearch[i] > max) {
                max = binsearch[i];

            }
        }
        cout << " maximum of nums " << max << endl;
    }
    else
    {
        cout <<" array is too lengthy"<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int d[3];
int a;
int b;
int min(int a,int b)
{
    int minimum;
    if (a>b)
    {
        minimum = a;
    }
    else
    {
        minimum = b;
    }
    return minimum;
}
int gcd(int a, int b)
{
    int divisor;
    for (int i =1;i<=min(a,b);i++)
    {
        if (a%i==0&&b%i==0)
        {
            divisor = i;
        }
    }
    return divisor ;
}
int t[5];
int main()
{
    cout <<" enter two numbers "<<endl;
    cin>>a>>b;
    cout <<" gcd of two numbers "<<gcd(a,b)<<endl;
    for (int j = 1;j<=5;j++)
    {
        cout << " enter five nums "<<endl;
        cin>>t[j];
    }
    for (int j = 1;j<=5;j++)
    {
        cout << t[j];
    }
}
*/ /*
#include<iostream>
using namespace std;

class relMarks
{
private:
    int individual_marks[30];
    int new_marks[30];
    int avg_marks[30];
    int nums;
    void individualmarks();
public:
    void relnewmarks();
};
void relMarks :: individualmarks()
{
    cout <<" enter the total number of students whose marks would be entered "<<endl;
    cin>> nums;

    for (int i = 1;i<=nums;i++)
    {
        cout <<" enter the marks "<<endl;
        cin>>individual_marks[i];
    }
    int total = 0;
    for (int i = 1;i<=nums;i++)
    {
        total += individual_marks[i];
    }
    avg_marks[1] = (total)/nums ;
}
void relMarks :: relnewmarks()
{
    individualmarks();
    for (int i = 1;i<=nums;i++)
    {
        new_marks[i] = individual_marks[i]-avg_marks[1];
        cout <<" your new marks is "<<new_marks[i]<<endl;
    }
}
int main()
{
    relMarks markg;
    markg.relnewmarks();
}*/
#include<iostream>
using namespace std;
int t[100];
int n[100];
int v[100];
int g[100];
int a;
int b;
int min(int a,int b)
{
    int minimum;
    if (a>b)
    {
        minimum = a;
    }
    else
    {
        minimum = b;
    }
    return minimum;
}
int gcd(int a, int b)
{
    int store;
    for (int i =1;i<=min(a,b);i++)
    {
        if ((a%i==0)&&(b%i==0))
        {
            t[i] = i;
            store = t[i];
        }
    }
    return store;
}
int lcd(int a, int b)
{
    int i;
    int j;
    for ( i =1;i<=a;i++)
    {
        if(a%i==0)
        {
            n[i]=i;
        }
    }
    for ( j=1;j<=b;j++)
    {
        if(b%j==0)
        {
            v[j]=j;
        }
    }
    for (i=1;i<=n[i];i++)
    {
        if (n[i]==v[j])
    }
    {
        for (int c = 1;c<=i;c++)
            g[c]=i;
    }
    for (int h=1;h<=;)
}
int main ()
{
    cout <<" enter two numbers "<<endl;
    cin>>a>>b;
    cout <<"gcd of two numbers "<<gcd(a,b)<<endl;
}