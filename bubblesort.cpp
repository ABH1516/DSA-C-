#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){                    // O(n2)     // 4 , 1, 5, 2, 3,    n = 5 - 0 - 1 4
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<(n-i-1);j++){
            if(arr[j] > arr[j+1]){       // descending -- if(arr[j] < arr[j+1])  arr[0] < arr[1]
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){     // array is already sorted
            return;
        }
    }
}

void  printArray(int arr[], int n){
      for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
      }
      cout<<endl;
}

void selectionSort(int arr[], int n){   // O(n2)
    for(int i=0;i<n-1;i++){
        int smInd = i;
        for(int j=i+1; j<n;j++){
            if(arr[j] < arr[smInd]){                 // descending -- arr[j] > arr[smind]  for i = 0 ,  j = 1,, arr[1] > arr[0]
                smInd = j;  
            }
        }

        swap(arr[i], arr[smInd]);
    }
}

void insertionSort(int arr[],int n){   //  4 1 5 2 3
    for(int i = 1;i<n;i++){
        int curr = arr[i];  //1 
        int prev = i-1;     //0

        while(prev >= 0 && arr[prev] > curr){ // prev 0 && 4 > 1 --> t and t - true    // desc - arr[prev] < curr 
            arr[prev+1] = arr[prev];  // arr[prev+1] == arr[]
            prev--;
        }

        arr[prev+1] = curr;  //placing the curr el in its correct pos   

    }
    
}


int main()
{
   int num = 5;
   int array[] = {4,1,5,2,3};
//    bubbleSort(array,num);
//    selectionSort(array,num);
   insertionSort(array,num);
   printArray(array,num);
   
   return 0;
}