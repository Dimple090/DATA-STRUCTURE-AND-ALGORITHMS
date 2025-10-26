//arithematic operator(+,-,*,/,%)
//Addition
#include<iostream>
using namespace std;
int main(){
    int a = 23;
    int b = 426;
    int c;
    c = a+b;
    cout<<c<<endl;

//Subtraction

    int e = 2300;
    int f = 426;
    int g;
    g = e-f;
    cout<<c<<endl;

//Multiplication

    int x = 23;
    int y = 426;
    int z;
    z = x*y;
    cout<<c<<endl;

//modulo

    int l = 23;
    int m = 426;
    int n;
    n = l%m;
    cout<<n<<endl;

//Division

    int s = 23;
    int t = 426;
    int r;
    r = s/t;
    cout<<r<<endl;


//Relational (Comparison) Operators
    int a = 10;
    int b = 20;

    cout << "a == b: " << (a == b) << endl;    // false (0)
    cout << "a != b: " << (a != b) << endl;    // true (1)
    cout << "a > b: " << (a > b) << endl;      // false (0)
    cout << "a < b: " << (a < b) << endl;      // true (1)
    cout << "a >= b: " << (a >= b) << endl;    // false (0)
    cout << "a <= b: " << (a <= b) << endl;    // true (1)

 

//Logical Operators
    int a = 15;
    int b = 5;

    cout << "a > 10 && b < 10: " << (a > 10 && b < 10) << endl;   // true && true → 1
    cout << "a < 10 || b < 10: " << (a < 10 || b < 10) << endl;   // false || true → 1
    cout << "!(a < 10): " << !(a < 10) << endl;                   // !false → true → 1

 
//Bitwise Operators
//Assignment Operators
//Increment/Decrement Operators
    int a = 5, b;

    // Prefix increment
    b = ++a; // a becomes 6, then b = 6
    cout << "Prefix ++: a = " << a << ", b = " << b << endl;

    a = 5; // reset a

    // Postfix increment
    b = a++; // b = 5, then a becomes 6
    cout << "Postfix ++: a = " << a << ", b = " << b << endl;

    a = 5; // reset a

    // Prefix decrement
    b = --a; // a becomes 4, then b = 4
    cout << "Prefix --: a = " << a << ", b = " << b << endl;

    a = 5; // reset a

    // Postfix decrement
    b = a--; // b = 5, then a becomes 4
    cout << "Postfix --: a = " << a << ", b = " << b << endl;

  












    return 0;
}