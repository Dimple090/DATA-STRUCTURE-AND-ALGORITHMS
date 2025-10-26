// //finding the largest and smallest no in the array
// #include<iostream>
// using namespace std;

// int findMax (int arr[],int n,int key){
//     int s = 0;
//     int e = n-1 ;
//     int mid = s + (e - s) / 2;

//     while(s <= e){
//         int Maxval = arr[0];
//         for (int i = 1; i < n ;i++){
//             if(arr[i] > Maxval){
//                 Maxval = arr[i];
//             }
//         }
//         return Maxval;
//     }
// }
// int findMin (int arr[],int n,int key){
//     int s = 0;
//     int e = n-1 ;
//     int mid = s + (e - s) / 2;

//     while(s <= e){
//         int Minval = arr[0];
//         for (int i = 1; i < n ;i++){
//             if(arr[i] < Minval){
//                 Minval = arr[i];
//             }
//         }
//         return Minval;
//     }
// }
// int main(){
// int arr[4] = {12,34,56,78};
// int n = sizeof(arr)/sizeof(arr[0]);

// int Maxelement = findMax(arr,4,34);
// cout<<"the largest number is: "<< Maxelement << endl;


// int Minelement = findMin(arr,4,34);
// cout<<"the smallest number is: "<< Minelement << endl;

// return 0;

// }


//<--------------------------------------------------------------------------------------------->


// //reverse array
// #include<iostream>
// using namespace std;

// void reverseArray (int arr[],int n){
//     int s = 0;
//     int e = n-1;

//     while(s < e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;


        
//     }
// }
// void printArray(int arr[],int n ){
//     for(int i = 0;i <n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[4]={12,34,56,78};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<"orginal array";
//     printArray(arr,n);

//     reverseArray(arr,n);

//     cout<<"reverse array";
//     printArray(arr,n);

//     return 0;
// }



//<--------------------------------------------------------------------------------------------------->
// //binary search
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int n,intt key){
//     int s = 0;
//     int e = n-1;
  


//     while(s <= e){
        
//         int mid  = s + (e - s) / 2;
//         if(arr[mid] == key){
//             return mid;
//         }

//         else if (arr[mid] < key){
//                 s = mid + 1;
//             }

//         else{
//             e = mid -1;
//         }
//     } 

//  return -1;
//     }


// int main(){
//     int evenarr[4] = {12,34,56,78};
//     int oddarr[3] = {123,456,789};
    

//     int evenelement = binarySearch(arr,4,34);
//     cout<<"the index of 1 is : "<<evenelement <<endl;

//     int oddelement = binarySearch(arr,3,789);
//     cout<<"the index of 2 is : "<<oddelement <<endl;

//     return 0;

// }

//-------------------------------------------------------------------------------------------//
`  