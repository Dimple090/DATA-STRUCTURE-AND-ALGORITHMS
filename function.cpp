// #include<iostream>
// using namespace std;

// // Function with parameters
// int power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;

//     int answer = power(a, b);
//     cout << "Answer is " << answer << endl;

//     // Second set of input
//     int c, d;
//     cin >> c >> d;

//     answer = power(c, d);  // Reuse the same 'answer' variable
//     cout << "Answer is " << answer << endl;

//     return 0;
// }









//Write a C++ program using a function named isPrime(int n) to check whether a number is prime or not.
//The function should return true if the number is prime, otherwise return false.
//Take input from the user and display the result.
// #include<iostream>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if(n <= 1)
//         return false;

//     for(int i = 2; i * i <= n; i++) {
//         if(n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     // Function call
//     if(isPrime(number)) {
//         cout << number << " is a prime number." << endl;
//     } else {
//         cout << number << " is not a prime number." << endl;
//     }

//     return 0;
// }











//Write a function to check the fn is even or odd
// #include<iostream>
// using namespace std;

// bool isEven(int a){
//     if(a%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"The given no is even :"<<num;
//     }
//     else{
//         cout<<"The given no is odd :"<<num;
//     }
    
// }





// #include<iostream>
// using namespace std;

// // Function to calculate factorial
// int fact(int n){
//     int ans = 1;
//     for(int i = 1; i <= n; i++){
//         ans = ans * i;
//     }
//     return ans;
// }

// // Function to calculate nCr
// int nCr(int n, int r){
//     int num = fact(n);
//     int denom = fact(r) * fact(n - r);
//     int ans = num / denom;

//     return ans;
// }

// int main (){
//     int n, r;
//     cout << "Enter n and r: ";
//     cin >> n >> r;

//     if (r > n) {
//         cout << "Invalid input: r cannot be greater than n." << endl;
//     } else {
//         cout << "nCr is: " << nCr(n, r) << endl;
//     }

//     return 0;
// }








// #include<iostream>
// using namespace std;

// void PrintCounting(int n){//fn signature
//     for(int i=1;i<=n;i++){//fn body
//     cout<<i<<endl;
//     }
// }
// int main (){
//     int n;
//     cin>>n;

//     PrintCounting(n);//fn call


//     return 0;
// }





  










//prime or not prime
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return false; // not prime
//         }
//     }
//     return true; // prime
// }

// int main() {
//     int n;
//     cin >> n;

//     if (isPrime(n)) {
//         cout << "The given number is Prime." << endl;
//     } else {
//         cout << "The given number is Not Prime." << endl;
//     }

//     return 0;
// }




