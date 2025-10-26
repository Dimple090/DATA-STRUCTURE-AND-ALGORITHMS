//if we want to change the value,we can write the code like this

#include<iostream>
using namespace std;
int main(){
    int x = 267;
    cout<<"the value of a  was:"<<x<<endl;
    int y = 3563;
    cout<<"the value of a is:"<<y<<endl;

    return 0;

}

//if we don't want to change the value then we can write the code like this 

#include<iostream>
using namespace std;
int main(){
    const int x = 456;
    cout<<"the value of a  was:"<<x<<endl;
   

    return 0;

}