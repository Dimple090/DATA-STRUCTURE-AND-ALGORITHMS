//A pointer is a variable that stores the memory address of another variable.
// #include<iostream>
// using namespace std;

// int main(){
//     int a=23;//variable
//     int * b=&a;//&a  (address of the variable) / *(pointer(get values from address vaiable))
//     cout<<"the address of a is : "<<b<<endl;
//     cout<<"the address of a is : "<<&a<<endl;


//     //(value at )deference address
//     cout<<"the address of a is : "<<*b<<endl;//value of b


// }







#include<iostream>
using namespace std;
 int main(){
    int a=345;//variable
    int*b = &a;//address of the variable a
    int **c = &b;//address of the b 

    cout << "a: " << a << endl;
    cout << "*b: " << *b << endl;
    cout << "**c: " << **c << endl;

    cout << "Address of a: " << &a << endl;
    cout << "b (address of a): " << b << endl;
    cout << "*c (b): " << *c << endl;
    cout << "c (address of b): " << c << endl;
 }