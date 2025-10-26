#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=23 , b=84 , c=774;
    
    cout<<"the value of a without setw: "<<a<<endl;
    cout<<"the value of b without setw: "<<b<<endl;
    cout<<"the value of c without setw: "<<c<<endl;


    cout<<"the value of a with setw is: " <<setw(4)<<a<<endl;//using setw (set the width of the next output field to n characters)
    cout<<"the value of b with setw is: " <<setw(4)<<b<<endl;//using setw (set the width of the next output field to n characters)
    cout<<"the value of c with setw is: " <<setw(4)<<c<<endl;//using setw (set the width of the next output field to n characters)


    return 0;
}

