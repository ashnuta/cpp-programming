#include<iostream>
using namespace std;

//Questions practice

//ques1. row sum calculate

//here pehle wale bracet ko chhodkar baaki saare brackets mein val deni padegi imp
void printRowWiseSum(int arr[][3], int rows, int cols){
    //row sum -> row wise traversal
    
    for(int i=0; i<rows; i++){
        int sum = 0; 
        for(int j=0; j<cols; j++){
            sum= sum + arr[i][j];
        }   
        cout<< sum<< endl; 
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

    cout<<"prinitng row-wise "<< endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j]<< " ";
        }
        cout <<endl ;
    }

    printRowWiseSum(arr, rows, cols);
    return 0;
}