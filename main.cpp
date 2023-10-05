#include <iostream>
#include <iomanip>// iomanip is h file
using namespace std;// std is address of syntax's and struct. from iostream

int c = 46;
int main() {

    int num1, num2;
    cout << "enter the value of num 1: \n";  /* "<<" this is insertion operator , output operator*/
    cin >> num1;   /* ">>" this is extraction operator , input operator */
    cout << " enter the value of num 2: \n";
    cin >> num2;
    cout << "the product  of two numbers is : " << num1 * num2;
    cout << "the different types of operators : " << endl;
    cout << "following are types of operators in c++" << endl;
    //arithmetic opeartors
    cout << "the value of num1 + num2 is : " << num1 + num2 << endl;
    cout << "the value of num1 - num2 is : " << num1 - num2 << endl;
    cout << "the value of num1 * num2 is : " << num1 * num2 << endl;
    cout << "the value of num1 / num2 is : " << num1 / num2 << endl;// "/" have to be an integer
    cout << "the value of num1 % num2 is :" << num1 % num2 << endl;
    cout << "the value of num1++ is :" << num1++ << endl;// "first print" and then "add"
    cout << "the value of num1-- is :" << num1-- << endl;// "first print " and then "subtract"
    cout << "the value of --num1 is :" << --num1 << endl;// "first subtract" and then " print "
    cout << "the value of ++num1 is :" << ++num1 << endl;// "first add " and then "print "
    // assignment operators ---- used to assign the values to variables
    // int a = 3,b=9;
    // char d = 'd';

    //comparison opeartors
    cout << "the value of a==b : " << (num1 == num2) << endl;
    cout << "the value of a!=b : " << (num1 != num2) << endl;
    cout << "the value of a>b : " << (num1 > num2) << endl;
    cout << "the value of a<b : " << (num1 < num2) << endl;
    cout << "the value of a<=b : " << (num1 <= num2) << endl;
    cout << "the value of a>=b : " << (num1 >= num2) << endl;

//local variables and global variables distinguish by ' scope operators '
    int c = num1 + num2;
    cout << "the sum of the two numbers is : " << c << endl;
    cout << "the global varible c " << ::c
         << endl;// "scope variable (::)" is the operator used to distinguish between global and local variable
// glimpse of float and double
    float d = 34.F;
    long double e = 34.4l;
    cout << "the size of 34.4 is " << sizeof (34.4) << endl;// 'decimal' in c+p is 'double' by default
    cout << "the size of 34.4f is " << sizeof (34.4f) << endl;// 'decimalf' in c+p is 'float' by default
    cout << "the size of 34.4F is " << sizeof (34.4F) << endl;// 'decimalF' in c+p is 'long double ' by default
    cout << "the size of 34.4l is " << sizeof (34.4l) << endl;// 'decimall' in c+p is 'long double' by default
    cout << "the size of 34.4L is " << sizeof (34.4L) << endl;

    // refernce variables ------, for making names of single variables different names .....
    // examples Rohan Das , Monty , Rohu , Dangerous coder is the name of same person with differnt names....
    float x = 455;
    float &y = x;
    cout << "the value of x is : " << x << endl;
    cout << "the value of y is : " << y << endl;

// typecasting ....( method of converting one datatype into other datatype ) /
    int a = 47;
    float b = 45.56;
    cout << "the value of a is : " << a << endl;
    cout << "the value of b is : " << b << endl;
    cout << "the value of typecasting a is : " << (float) a << endl;
    cout << "the value of typecasting b is : " << (int) a << endl;

// constant .... those differnt values that has constant value throughout thre programme /
//const float d = 3;
//d = 48;// we will get an error as value of d is set to constant;
//cout<<"the value of d is : "<<d<<endl;

// use of (setw) function from <iomanip> header file ...to set up the gap to make it beautiful /
    int k = 3, f = 99, g = 1233;
    cout << "the value of y without setw is: " << k << endl;
    cout << "the value of f without setw is: " << f << endl;
    cout << "the value of g without setw is: " << g << endl;
    cout << "the value of y with setw is: " << setw (4) << k << endl;//setw(4) is 4 character space before e....
    cout << "the value of f with setw is: " << setw (4) << f << endl;
    cout << "the value of g with setw is: " << setw (4) << g << endl;

// CONTROLL STRUCTURES .... (they are syntaxes of codes to provide logic and flow to programme.....)
//three types of CONTROLL STRUCTURES :
// a] sequence conditional structure ( normal controll structures , eg . all syntax code before this topic)
// b] selection conditional structure ( [ mera left hand ]) :
//                                       1] ladder if else structure   (donot includes break)
//                                       2] switch if else structure  (includes break)
// c] loop conditional structure  ([ mera right hand ])

//b]
//  1] ladder if else controll structures ;
    int age;
    cout << "tell the age : " << endl;
    cin >> age;
    if (age < 18) {
        cout << "you are a kid and you are not allowed to party " << endl;
    } else if (age == 18) {
        cout << "you cannot come to party" << endl;
    } else {
        cout << "you are allowed to party " << endl;

    }

//b]
//  2] switch if else controll structures
    switch (age) { // switch (variable) and cases of variables value we want to check
        case 18 :
            cout << "you are 18" << endl;
            break; // here 'break statement' instructs next statement into 'out of the block{}'
        case 22 :
            cout << "you are 22" << endl;
            break;
        case 2:
            cout << "you are 2" << endl;
            break;
        default :
            cout << "no special cases" << endl;

    }
    cout << "done with switch case" << endl;




// LOOP CONDITIONAL STRUCTURES .... ( they are the 'right hand' tools of programming language
// a] for loop
// b] while loop
// c] do while loop

// for loop syntax ( aka structure )
    // for ( initialization ; condition ; updation )
    //{ block open
    //       loop body( c+p code)
    //} block closed
    for (int i = 0; i < 40; i++) {
        cout << i << endl;
    }



// while loop ( when terminal or initial condition is not known and iteration is required )
// syntax:
// while (condition ):
//{ block open
// cp+ statements ;
//} block closed

//DO WHILE LOOP
    int i = 1;
    int n;
    cout << "enter the number whose table is required " << endl;
    cin >> n;
    do {
        cout << n * i << endl;
        i++;
    } while (i < 11);
    return 0;
}

