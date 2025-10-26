//pattern
//*******
//*******
//*******
//*******

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;//take input from the user

//     int i=1;//row(start from first row)
//     while(i<=n){//kaha se kaha tak print karna hai n no tak print karna hai
//         int j=1;//this is for column 
//         while(j<=n){//kaha se kaha tak print karna hai n no tak print karna hai
//             cout<<"*";//joh print krna ae
//             j=j+1;//ek ek column bdta jata hai
//         }
//         cout<<endl;
//         i=i+1;//ek ek row bdta jata hai
//     }
// }








//11111
//22222
//33333
//44444
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;//agr hum endl nhi krte hai toh sab hee line ,mein aayega
//         i=i+1;
//     }
// }












//1234
//1234
//1234
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;//n-j+1(reverse)
//             j=j+1;
//         }
//         cout<<endl;//agr hum endl nhi krte hai toh sab hee line ,mein aayega
//         i=i+1;
//     }
// }






// 123
//456
//789
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // User input

//     int i = 1;      // row counter
//     int count = 1;  // keeps track of the number to print
//     while (i <= n) {
//         int j = 1;  // column counter
//         while (j <= n) {
//             cout << count << " ";
//             count = count + 1;  // increment count
//             j = j + 1;          // move to next column
//         }
//         cout << endl;  // move to next row
//         i = i + 1;
//     }
// }










//*
//**
//*** 
//****
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n) {
//         int j = 1;
//         while (j <= i) {  // key change: loop till j <= i
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }