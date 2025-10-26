// //switch Case Statement
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int age;
// //     cout<<"enter the age: ";
// //     cin>>age;
// //     switch(age){
// //         case 18:
// //           cout<<"you are 18 now"<<endl;
// //           break;

// //         case 22:
// //           cout<<"you are now elder"<<endl;
// //           break;

// //         case 2:
// //           cout<<"you are just a kid "<<endl;
// //           break;

// //         default:
// //            cout<<"no special case"<<endl;
// //            break;

// //     }
// //     cout<<"hey there! what's up ";
// //     return 0;
// // }





// //Q: Write a program to perform addition, subtraction, multiplication, and division using switch-case.
// //📌 Input two numbers and an operator.
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char op;

//     // Input from user
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> num2;

//     // Switch-case to handle operation
//     switch(op) {
//         case '+':
//             cout << "Result: " << num1 + num2 << endl;
//             break;

//         case '-':
//             cout << "Result: " << num1 - num2 << endl;
//             break;

//         case '*':
//             cout << "Result: " << num1 * num2 << endl;
//             break;

//         case '/':
//             if (num2 != 0)
//                 cout << "Result: " << num1 / num2 << endl;
//             else
//                 cout << "Error: Division by zero!" << endl;
//             break;

//         default:
//             cout << "Invalid operator!" << endl;
//             break;
//     }

//     return 0;
// }










// #include<iostream>
// using namespace std;

// int main(){
//     int num=2;//match the case 2

//     cout<<endl;
//     switch (num)
//     {
//     case 1: 
//         cout<<"First"<<endl;
//         break;

//     case 2: 
//         cout<<"Second"<<endl;//case 2
//         break;
    
//     default:
//         break;
//     }

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     char ch=4;//match the case 2

//     cout<<endl;
//     switch (ch)
//     {
//     case 1: 
//         cout<<"First"<<endl;
//         break;

//     case 2: 
//         cout<<"Second"<<endl;//case 2
//         break;
    
//     default: cout<<"It is default case"<<endl;
//         break;
//     }

//     return 0;
// }





//we can use switch inside the switch
//we can convert switch case into if else ladder










// //continue
// #include <iostream>
// using namespace std;

// int main(){
//     int num=4;

//     for(int i=0;i<=4;i++){
//         cout<<i==2<<endl;
//         continue;
//     }

//     cout<<"Program end here";

//     return 0;
// }








#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int note100 = 0, note50 = 0, note20 = 0, note10 = 0;

    int choice = 1;

    switch (choice) {
        case 1:
            note100 = amount / 100;
            amount = amount % 100;

        case 2:
            note50 = amount / 50;
            amount = amount % 50;

        case 3:
            note20 = amount / 20;
            amount = amount % 20;

        case 4:
            note10 = amount / 10;
            amount = amount % 10;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    cout << "₹100 notes: " << note100 << endl;
    cout << "₹50 notes: " << note50 << endl;
    cout << "₹20 notes: " << note20 << endl;
    cout << "₹10 notes: " << note10 << endl;

    return 0;
}
