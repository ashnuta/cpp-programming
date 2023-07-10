#include<iostream>
#include<limits.h> //for INT_MIN/Max
using namespace std;

//Questions practice

//ques1. row sum calculate

//here pehle wale bracet ko chhodkar baaki saare brackets mein val deni padegi imp
// void printRowWiseSum(int arr[][3], int rows, int cols){
//     //row sum -> row wise traversal
    
//     for(int i=0; i<rows; i++){
//         int sum = 0; 
//         for(int j=0; j<cols; j++){
//             sum= sum + arr[i][j];
//         }   
//         cout<< sum<< endl; 
//     }
       
// }

// int main(){
    

    
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     //row- wise input
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>> arr[i][j];
//         }
//     }

//     cout<<"prinitng row-wise "<< endl;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<< arr[i][j]<< " ";
//         }
//         cout <<endl ;
//     }

//     printRowWiseSum(arr, rows, cols);
//     return 0;
// }

//ques2. Linear search
// bool findKey(int arr[][3], int rows, int cols, int key){
//     //outer loop for rows
//     for (int i=0; i<rows; i++){
//         //inner loop for cols
//         for(int j=0; j<cols; j++){
//             if (arr[i][j] == key)
//             return true;
//         }
//     }
//     //value is not present 
//     return false;
// }

// int main(){
    
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     //row- wise input
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>> arr[i][j];
//         }
//     }

//     cout<<"prinitng row-wise "<< endl;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<< arr[i][j]<< " ";
//         }
//         cout <<endl ;
//     }

//     int key = 3;
//     // cout<< findKey(arr,3,3,key); isme output comes as 1 or 0
//     // so for true and false
//     if(findKey(arr,3,3,key)){
//         cout<< "true"<< endl;
//     }
//     else{
//         cout<< "false"<<endl;
//     }
//     return 0;
// }


//ques3. Min/Max in 2D Array

// int getMax(int arr[][3], int rows, int cols){
//     int maxi= INT_MIN;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(arr[i][j]>maxi){
//                 maxi= arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }

// int main(){
    
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     //row- wise input
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>> arr[i][j];
//         }
//     }

//     cout<<"printing row-wise "<< endl;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<< arr[i][j]<< " ";
//         }
//         cout <<endl ;
//     }

//    cout<< "Max Number : "<< getMax(arr,rows,cols);
//     return 0;
// }

//Min of 2D Array
// int getMin(int arr[][3], int rows, int cols){
//     int mini= INT_MAX;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(arr[i][j]<mini){
//                 mini= arr[i][j];
//             }
//         }
//     }
//     return mini;
// }

// int main(){
    
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     //row- wise input
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>> arr[i][j];
//         }
//     }

//     cout<<"printing row-wise "<< endl;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<< arr[i][j]<< " ";
//         }
//         cout <<endl ;
//     }

//    cout<< "Min Number : "<< getMin(arr,rows,cols);
//     return 0;
// }

//ques5. Transpose of a matrix

void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for (int i=0; i< rows; i++){
        for (int j=0; j< cols; j++){
            // swap(arr[i][j],arr[j][i]);
            transposeArr[j][i]= arr[i][j];
        }
    }
}

void printArray (int arr[][3], int r, int c){
    for (int i=0; i <r; ++i) {
        for (int j=0; j <c; ++j){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}

int main(){
    
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    //row- wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>> arr[i][j];
        }
    }

    cout<<"printing row-wise "<< endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j]<< " ";
        }
        cout <<endl ;
    }

    cout<< "Printing Array" << endl;
    printArray(arr, rows, cols);
    cout<< "Starting Transpose"<< endl;
    int transposeArr[3][3];
    transpose(arr, rows, cols, transposeArr);
    cout<< "Printing array again"<< endl;
    printArray(transposeArr, rows, cols);
    return 0;
}