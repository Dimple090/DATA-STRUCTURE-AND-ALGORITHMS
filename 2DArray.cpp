// //2D Array
// #include<iostream>
// using namespace std;

// int main(){
// //create 2D Array
// int arr[3][4];

// // //taking input->row wise input
// // for(int i=0;i<3;i++){
// //     for(int j=0;j<4;j++){
// //         cin >> arr[i][j];
// //     }
// // }


// //taking input->col wise input
// for(int i=0;i<4;i++){
//     for(int j=0;j<3;j++){
//         cin >> arr[j][i];
//     }
// }

// //print
// for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// return 0;
// }









// //element search in 2d array
// #include <iostream>
// using namespace std;

// // Function to check if a given target is present in a 2D array
// bool isPresent(int arr[][4], int target, int row, int col) {
//     // Loop through each row
//     for (int i = 0; i < row; i++) {
//         // Loop through each column in the current row
//         for (int j = 0; j < col; j++) {
//             // Check if the current element matches the target value
//             if (arr[i][j] == target) {
//                 return true;  // Return true if found
//             }
//         }
//     }
//     // If not found in the entire array, return false
//     return false;
// }

// int main() {
//     // Declare a 2D array with 3 rows and 4 columns
//     int arr[3][4];

//     // Take input for the array (row-wise input)
//     cout << "Enter elements of 3x4 array:" << endl;
//     for (int i = 0; i < 3; i++) {         // loop for each row
//         for (int j = 0; j < 4; j++) {     // loop for each column
//             cin >> arr[i][j];             // take input for each element
//         }
//     }

//     // Take input for the element you want to search
//     int target;
//     cout << "Enter element to search: ";
//     cin >> target;

//     // Call the function to check if the target is present or not
//     if (isPresent(arr, target, 3, 4)) {
//         cout << " Element " << target << " is present in the array." << endl;
//     } else {
//         cout << " Element " << target << " is NOT present in the array." << endl;
//     }

//     return 0;
// }
  











// //row -wise sum
// #include <iostream>
// using namespace std;

// int main() {
//     // Create a 2D array of size 3x4
//     int arr[3][4];

//     // Input elements row-wise
//     cout << "Enter elements of 3x4 matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Print the matrix (optional)
//     cout << "\nMatrix is:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Find and print row-wise sum
//     cout << "\nRow-wise sums are:" << endl;
//     for (int i = 0; i < 3; i++) {
//         int sum = 0; // reset sum for each row
//         for (int j = 0; j < 4; j++) {
//             sum += arr[i][j]; // add all elements of current row
//         }
//         cout << "Sum of row " << i + 1 << " = " << sum << endl;
//     }

//     return 0;
// }









// //col-wise add
// #include <iostream>
// using namespace std;

// int main() {
//     // Define number of rows and columns
//     const int rows = 3;
//     const int cols = 4;

//     // Create a 2D array of size 3x4
//     int arr[rows][cols];

//     // Input elements row-wise
//     cout << "Enter elements of 3x4 matrix:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Print the matrix
//     cout << "\nMatrix is:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // 🔹 Column-wise sum
//     cout << "\nColumn-wise sums are:\n";
//     for (int j = 0; j < cols; j++) {   // outer loop = column fixed
//         int sum = 0;
//         for (int i = 0; i < rows; i++) { // inner loop = move down rows
//             sum += arr[i][j];            // add all elements in same column
//         }
//         cout << "Sum of column " << j + 1 << " = " << sum << endl;
//     }

//     return 0;
// }








// //largest sum of row and col
// #include <iostream>
// #include <climits>
// using namespace std;

// const int rows = 3, cols = 4;

// // 🔹 Function to find largest row sum
// int largestRowSum(int arr[rows][cols]) {
//     int maxSum = INT_MIN;
//     for (int i = 0; i < rows; i++) {
//         int sum = 0;
//         for (int j = 0; j < cols; j++)
//             sum += arr[i][j];
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }

// // 🔹 Function to find largest column sum
// int largestColSum(int arr[rows][cols]) {
//     int maxSum = INT_MIN;
//     for (int j = 0; j < cols; j++) {
//         int sum = 0;
//         for (int i = 0; i < rows; i++)
//             sum += arr[i][j];
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }

// int main() {
//     int arr[rows][cols];
//     cout << "Enter elements of 3x4 matrix:\n";
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             cin >> arr[i][j];

//     cout << "\nLargest Row Sum = " << largestRowSum(arr);
//     cout << "\nLargest Column Sum = " << largestColSum(arr) << endl;

//     return 0;
// }











//wave print
// #include <iostream>
// using namespace std;

// // Function to perform wave print of a matrix
// void wavePrint(int arr[][4], int rows, int cols) {
//     cout << "Wave Print of matrix: ";

//     // Loop through each column
//     for (int j = 0; j < cols; j++) {
//         if (j % 2 == 0) {
//             // Even column: top to bottom
//             for (int i = 0; i < rows; i++)
//                 cout << arr[i][j] << " ";
//         } else {
//             // Odd column: bottom to top
//             for (int i = rows - 1; i >= 0; i--)
//                 cout << arr[i][j] << " ";
//         }
//     }

//     cout << endl;
// }

// int main() {
//     const int rows = 3, cols = 4;
//     int arr[rows][cols];

//     // Input elements
//     cout << "Enter elements of 3x4 matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             cin >> arr[i][j];

//     // Call the wave print function
//     wavePrint(arr, rows, cols);

//     return 0;
// }








// //spiral print
// #include <iostream>
// using namespace std;

// void spiralPrint(int arr[3][3], int n, int m) {
//     int top = 0, bottom = n - 1;
//     int left = 0, right = m - 1;

//     while (top <= bottom && left <= right) {
//         // 1. Left → Right
//         for (int i = left; i <= right; i++)
//             cout << arr[top][i] << " ";
//         top++;

//         // 2. Top → Bottom
//         for (int i = top; i <= bottom; i++)
//             cout << arr[i][right] << " ";
//         right--;

//         // 3. Right → Left
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--)
//                 cout << arr[bottom][i] << " ";
//             bottom--;
//         }

//         // 4. Bottom → Top
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--)
//                 cout << arr[i][left] << " ";
//             left++;
//         }
//     }
// }

// int main() {
//     int arr[3][3] = {{1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}};

//     spiralPrint(arr, 3, 3);
//     return 0;
// }









// //rotate matrix by 70 degree
// #include <iostream>
// #include <algorithm>  // for reverse
// using namespace std;

// void rotate90(int arr[3][3], int n) {
//     // Step 1: Transpose
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     // Step 2: Reverse each row
//     for (int i = 0; i < n; i++) {
//         reverse(arr[i], arr[i] + n);
//     }

//     // Print rotated matrix
//     cout << "Matrix after 90-degree rotation:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
// }

// int main() {
//     int arr[3][3] = {{1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}};

//     rotate90(arr, 3);
//     return 0;
// }














// //binary search part 1
// #include <iostream>
// #include <vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     int low = 0, high = m * n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         int row = mid / n;
//         int col = mid % n;

//         if (matrix[row][col] == target)
//             return true;
//         else if (matrix[row][col] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return false;
// }

// int main() {
//     vector<vector<int>> matrix = {
//         {1, 3, 5, 7},
//         {10, 11, 16, 20},
//         {23, 30, 34, 50}
//     };

//     int target;
//     cout << "Enter target element to search: ";
//     cin >> target;

//     if (searchMatrix(matrix, target))
//         cout << "Element found " << endl;
//     else
//         cout << "Element not found " << endl;

//     return 0;
// }
















// //Binary search part 2  (2D array)
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to search in the matrix
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     int row = 0, col = n - 1;  // start from top-right corner

//     while (row < m && col >= 0) {
//         if (matrix[row][col] == target)
//             return true;
//         else if (matrix[row][col] > target)
//             col--;   // move left
//         else
//             row++;   // move down
//     }

//     return false;
// }

// // Main function for testing
// int main() {
//     vector<vector<int>> matrix = {
//         {1, 4, 7, 11, 15},
//         {2, 5, 8, 12, 19},
//         {3, 6, 9, 16, 22},
//         {10, 13, 14, 17, 24},
//         {18, 21, 23, 26, 30}
//     };

//     int target;
//     cout << "Enter target element to search: ";
//     cin >> target;

//     if (searchMatrix(matrix, target))
//         cout << "Element found " << endl;
//     else
//         cout << "Element not found " << endl;

//     return 0;
// }

