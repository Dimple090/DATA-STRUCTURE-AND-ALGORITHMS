//array->array is a collection of items that stored similar data type at contiguoius memory location
// #include<iostream>
// using namespace std;

// int main(){
//     int marks[5] = {56,79,33,45,99};
    // int mathmarks[4];
    // mathmarks[0]=344;
    // mathmarks[1]=5678;
    // mathmarks[2]=446;
    // mathmarks[3]=4678;

    // cout<<"these are the maths marks "<<endl;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;

    // cout<<"these are the marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;


    //in array you can change the values 
    // marks[4]=3456;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;




    //solve array in  for-loop
    // for(int i=0;i<4;i++){
    //     cout<<"the value of marks "<<i<<" is :"<< marks [i]<< endl;
    // }



    //while loop
    // int i=0;
    // while(i<=4){
    //     cout<<"the value of marks "<<i<<" is :"<< marks [i]<< endl;
    //     i++;
    // }



    // //do-loop
    // int i = 0;

    // do {
    //     cout<<"the value of marks "<<i<<" is :"<< marks [i]<< endl;
    //     i++;
    // } while(i <= 4);



    // //pointer and array
    // int*p =marks;
    // cout<<"the value of *p is :"<<*p<<endl;
    // cout<<"the value of *(p+1) is :"<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is :"<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is :"<<*(p+3)<<endl;
    // cout<<"the value of *(p+4) is :"<<*(p+4)<<endl;



    //Relationship Between Pointers and Arrays
    // int arr[5] = {10, 20, 30, 40, 50};
    // int* p = arr;  // arr decays into &arr[0]

    // cout << *p<<endl;        // 10
    // cout << *(p + 2)<<endl;  // 30











    //Array Access Using Pointers
    // arr[i] == *(arr + i) == *(p + i)



    //Array with Pointer Access
//     #include <iostream>
// using namespace std;

// int main() {
//     int arr[4] = {1, 2, 3, 4};
//     int* p = arr;

//     for (int i = 0; i < 4; i++) {
//         cout << "arr[" << i << "] = " << *(p + i) << endl;
//     }

//     return 0;
// }


//     return 0;
// }















// 














//array with fn
// #include<iostream>
// using namespace std;

// void printarray(int arr[], int size) {
//     cout << "Printing array:" << endl;
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
 
// int main() {
//     int third[15] = {1, 4};     // Only first two initialized; rest are 0
//     printarray(third, 15);

//     int fourth[10] = {0};       // All initialized to 0
//     printarray(fourth, 10);

//     int fifth[5] = {1};         // First element 1, rest 0
//     printarray(fifth, 5);


//     int fifthsize= sizeof (fifth)/sizeof (int);
//     cout<<"size of fifth is : "<<fifthsize<<endl;



//     //char
//     char ch[4]={'a','b','c','d'};
//     cout<<ch[3]<<endl;



//     //float
    
//     return 0;
// }
















//max and min array
// #include<iostream>
// #include<climits>  // Required for INT_MIN and INT_MAX
// using namespace std;

// int getMax(int num[], int n) {
//     int maxi = INT_MIN;

//     for(int i = 0; i < n; i++) {

//         maxi=max(maxi,num[i]);
//         // if(num[i] > maxVal) {
//         //     maxVal = num[i];
//         // }
//     }
//     return maxi;
// }

// int getMin(int num[], int n) {
//     int mini = INT_MAX;

//     for(int i = 0; i < n; i++) {

//         //you can also written like this
//         mini=min(mini,num[i]);
//         // if(num[i] < minVal) {
//         //     minVal = num[i];
//         // }
//     }
//     return mini;
// }

// int main() {
//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int num[1000];

//     cout << "Enter array elements: ";
//     for(int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     cout << "MAX value is: " << getMax(num, size) << endl;
//     cout << "MIN value is: " << getMin(num, size) << endl;

//     return 0;
// }








// //print sum of all the elements in an array
// #include<iostream>
// using namespace std;

// int getSum(int arr[], int size) {
//     int sum = 0;

//     for(int i = 0; i < size; i++) {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main() {
//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[1000];

//     cout << "Enter array elements: ";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int total = getSum(arr, size);
//     cout << "Sum of array elements = " << total << endl;

//     return 0;
// }











//-----------------------------------------------------------------------------------------------------//




//An array ia  a collection of fixed size element of the same data type ,store in contingeous memoery
//Finding the Largest and Smallest Element in an Array
// #include<iostream>
// using namespace std;

// int findMax (int arr[],int n){
//     int Maxval = arr[0];   //assume first element is largest
//     for(int i=1;i<n;i++){
//         if(arr[i]>Maxval){
//             Maxval = arr[i];
//         }
//     }
//     return Maxval;
// }

// int findMin (int arr[],int n){
//     int Minval = arr[0];   //assume first element is smallest
//     for(int i=1;i<n;i++){
//         if(arr[i] < Minval){
//             Minval = arr[i];
//         }
//     }
//     return Minval;
// }

// int main(){
//     int arr[7] = {2,9,5,90,38,71,45};
//     int n = sizeof(arr)/sizeof(arr[0]);   //calaculate n number of element in the array

//     int Maxelement = findMax(arr,n);   //fn call for largest no
//     int Minelement = findMin(arr,n);   //fn call for smallest no

//     cout<< "MAXIMUM VALUE IS :" <<Maxelement <<endl; //print largest no
//     cout<< "MINIMUM VALUE IS :" <<Minelement <<endl;   //print smallest no


//     return 0;
// }
// time complexity for Finding the Largest and Smallest Element in an Array is O(n) for best case (sorted array),worst(reverse array),and average case(random array)




//----------------------------------------------------------------------------------------------------------------//

//Reverse array using function
#include <iostream>
using namespace std;

// 🔹 Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Swap elements from both ends until they meet in the middle
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// 🔹 Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // 🔹 Initialize array
    int arr[7] = {2, 9, 5, 90, 38, 71, 45};

    // 🔹 Calculate number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // 🔹 Print original array
    cout << "Original array: ";
    printArray(arr, n);

    // 🔹 Reverse the array using function
    reverseArray(arr, n);

    // 🔹 Print reversed array
    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}
