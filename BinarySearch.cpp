// // // //binary search
// // // #include<iostream>
// // // using namespace std;

// // // int binarysearch(int arr[],int size,int key){
// // //     int start=0;
// // //     int end=size-1;

// // //     int mid = start + (end - start) / 2;

// // //     while(start<=end){
// // //         if(arr[mid]==key){
// // //             return mid;
// // //         }
// // //         if(key>arr[mid]){
// // //             start=mid+1;
// // //         }
// // //         else{
// // //             end=mid-1;
// // //         }
// // //         mid = start + (end - start) / 2;
// // //     }
// // //     return -1;
// // // }

// // // int main(){
// // //     int even[8]={2,4,6,8,10,12,14,16};
// // //     int odd[7]={3,5,7,9,11,13,15};



// // //     int evenindex=binarysearch(even,6,20);
// // //     cout << "index of 18 is : "<< evenindex <<endl;

    
// // //     int oddindex=binarysearch(odd,7,9);
// // //     cout << "index of 3 is : "<< oddindex <<endl;


// // //     return 0;
    
// // // }





// // //First occurence and last occurence
// // #include<iostream>
// // using namespace std;

// // int firstOccurrence(int arr[], int n, int key) {
// //     int s = 0, e = n - 1;
// //     int ans = -1;
    

// //     while (s <= e) {
// //         int mid = s + (e - s) / 2;

// //         if (arr[mid] == key) {
// //             ans = mid;
// //             e = mid - 1; // go left for first occurrence
// //         }
// //         else if (key > arr[mid]) {
// //             s = mid + 1;
// //         }
// //         else {
// //             e = mid - 1;
// //         }
// //     }

// //     return ans;
// // }

// // int lastOccurrence(int arr[], int n, int key) {
// //     int s = 0, e = n - 1;
// //     int ans = -1;

// //     while (s <= e) {
// //         int mid = s + (e - s) / 2;

// //         if (arr[mid] == key) {
// //             ans = mid;
// //             s = mid + 1; // go right for last occurrence
// //         }
// //         else if (key > arr[mid]) {
// //             s = mid + 1;
// //         }
// //         else {
// //             e = mid - 1;
// //         }
// //     }

// //     return ans;
// // }

// // int main() {
// //     int even[5] = {1, 2, 3, 3, 5};

// //     int key = 3;

// //     cout << "First occurrence of " << key << " is at index: " << firstOccurrence(even, 5, key) << endl;
// //     cout << "Last occurrence of " << key << " is at index: " << lastOccurrence(even, 5, key) << endl;

// //     return 0;
// // }











//peak index in the mountain index
#include<iostream>
using namespace std;

int peakIndex(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
     
    while (s < e) {
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s; // or return e (both are same here)
}

int main() {
    int arr[4] = {3, 4, 5, 1};

    int index = peakIndex(arr, 4);
    cout << "Peak of mountain is at index: " << index << " with value: " << arr[index] << endl;

    return 0;
}


 

// //pivot element 
// #include<iostream>
// using namespace std;
 
// int getPivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid = s+(e-s)/2;

//     while (s<e){
//         if(arr[mid] >= arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid = s+(e-s)/2;
//     }
//    return s; 
// }
// int main(){
//     int arr[5]={3,8,10,17,1};
//     cout<< "Pivot element is : "<< getPivot(arr,5)<<endl;

//     return 0;
// }











//square root using  recursion
#include<iostream>
using namespace std;

int binarySqrt(int n, int start, int end, int& ans) {
    if(start > end)
        return ans;

    int mid = start + (end - start) / 2;

    if(mid * mid == n)
        return mid;

    if(mid * mid < n) {
        ans = mid;  
        return binarySqrt(n, mid + 1, end, ans);
    } else {
        return binarySqrt(n, start, mid - 1, ans);
    }
}

int squareRoot(int n) {
    int ans = -1;
    return binarySqrt(n, 0, n, ans);
}

int main(){
    int num = 17;
    cout << "Square root is: " << squareRoot(num) << endl;
    return 0;
}

