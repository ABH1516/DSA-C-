#include <iostream>
using namespace std;  


// Function to perform linear search on the array
pair<int,int> lin_search2d(int arr[][100], int rows, int cols, int key){
    pair<int,int> p;
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j) {
            if(arr[i][j] == key){
                p = make_pair(i, j);
                return p;
            }
        }
    }
    return make_pair(-1, -1);

}

// Function to find maximum row sum
int MaxRow_Sum(int arr[][100], int rows, int cols){
    int maxSum = INT32_MIN;
    for(int i=0; i<rows; i++){
        int rowsumIth = 0;
        for(int j=0; j<cols; j++){
            rowsumIth += arr[i][j];
        }
        maxSum = max(maxSum, rowsumIth);
    }

    return maxSum;
}

// Function to find maximum column sum
int MaxCol_Sum(int arr[][100], int rows, int cols){
    int maxSum = INT32_MIN;
    for(int i=0; i<rows; i++){
        int colsumIth = 0;
        for(int j=0; j<cols; j++){
            colsumIth += arr[j][i];
        }
        maxSum = max(maxSum, colsumIth);
    }

    return maxSum;
}

// Function to find Diagonal sum = PD + SD - common element in case n is odd , else its PD + SD

int Diagonal_Sum(int arr[][100], int n){
    int DiaSum = 0;
    for(int i=0; i<n; i++){
        // for(int j=0; j<n; j++){
        //     if(i==j){
        //         DiaSum += arr[i][j];
        //     }
        //     else if(j == n-1-i){
        //         DiaSum += arr[i][j];
        //     }
        // }
        DiaSum += arr[i][i];
        if(i != n-i-1){
            DiaSum += arr[i][n-i-1];
        }
        
    }

    return DiaSum;
}   


// Function to input a 2D array
void input2DArray(int arr[][100], int rows, int cols) {
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}

// Function to output a 2D array
void output2DArray(int arr[][100], int rows, int cols) {
    cout << "2D Array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100]; // Fixed size for demonstration
    input2DArray(arr, rows, cols);
    output2DArray(arr, rows, cols);

    // pair<int,int> result = lin_search2d(arr,rows,cols,2);
    // cout << "Row: " << result.first << ", Col: " << result.second << endl;

    // cout << "Max Row Sum for this 2D Matrix is : " << MaxRow_Sum(arr,rows,cols) << endl;
    // cout << "Max Column Sum for this 2D Matrix is : " << MaxCol_Sum(arr,rows,cols) << endl;
    cout << "Diagonal Sum for this 2D Matrix is : " << Diagonal_Sum(arr,rows) << endl;

    return 0;
}
