//arrays and functions
#include<iostream>
#include <limits.h>
using namespace std;


// void printArray(int arr[], int size){
//     //printing the array
//     for(int i=0; i<size; i++){
//         cout<< arr[i]<< " ";
//     }
//     cout<< endl;
// }

// void inc(int arr[], int size){
//     arr[0]= arr[0]+10;
//     printArray(arr, size);
//     }

// int main(){
//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size);
//     printArray(arr,size);
// }

//linear search in array

    // bool find(int arr[],int size, int key){
    //     //linear search

    //     for(int i=0; i<size; i++){
    //         if(arr[i] == key)
    //             return true;
    //      }
    //      //not present
    //     return false;
    // }

    // int main(){

    //     int arr[5]={1,3,5,7,8};
    //     int size=5;

    //     cout<< "Enter the key to find" << endl;
    //     int key;
    //     cin>>key;
    //     //find function
    //     if (find(arr,size,key)){
    //         cout<< "Found"<< endl;
    //     }
    //     else{
    //         cout<<"Not Found "<<endl;
    // //     }
    //  return 0;
    
    // }

    int main(){
        //alternate code for linear search
        // int arr[]={1,2,3,4,5,6,7,8};
        // int size=8;

        // int key=9;

        // bool flag=0;
        // //0 -> not found
        // //1 -> found

        // //linear search
        // for(int i=0; i<size; i++){
        //     if(arr[i]==key){
        //        //found
        //        flag = 1;
        //        break;
        //     }
        // }

        // if(flag==1){
        //     cout<< "Present"<< endl;
        // }
        // else{
        //     cout<< "Not present" << endl;
        // }

        // return 0;


        //count 0's and 1's in array
        // int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
        // int size= 15;

        // int numZero = 0;
        // int numOne = 0;

        // for (int i=0; i< size; i++){
        //     if(arr[i]==0){
        //         numZero++;
        //     }
        //     if(arr[i]==1){
        //         numOne++;
        //     }
        // }
        // cout<< "number of zeroes: " << numZero<< endl;
        // cout<< "number of ones: "<< numOne<< endl;

        // return 0;

        //Maximum number in an array
        //important to find max num in array best practice is to initialize maxNum with INT_MIN
        // and vice versa
        //int_Min maxkeliye file include upar limits.h

        // int arr[]= {2,3,4,99,87};
        // int size= 5;
        // int maxi = INT_MIN;

        // for(int i=0; i< size; i++){
        //     if(arr[i]>maxi){
        //         maxi = arr[i];
        //     }
        // }
        // cout<< "maximum number is: "<< maxi<< endl;
        // return 0;

        // int arr[]= {2,3,4,99,87};
        // int size= 5;
        // int mini = INT_MAX;

        // for(int i=0; i< size; i++){
        //     if(arr[i]<mini){
        //         mini = arr[i];
        //     }
        // }
        // cout<< "minimum number is: "<< mini<< endl;
        // return 0;

        //print extremes of array
        //i.e if arr= 1,2,3,4,5,6,7,8
        //o/p is 1 8 2 7 3 6 4 5
        //uses 2 pointer approach

        // int arr[8]={10,20,30,40,50,60,70,80};
        // int size= 8;

        // int start=0;
        // int end= size-1;

        // while(true){
        //    if(start>end)
        //    break;
        //    cout<< arr[start]<< " ";
        //    cout<< arr[end]<< " ";
        //    start++;
        //    end--;
        // }

        //alternate code
        // while(true){
        //     if(start>end)
        //     break;

        //     if(start==end){
        //         cout<< arr[start]<< " ";
        //     }

        //     else{
        //         cout<< arr[start]<< " ";
        //         cout<< arr[end]<< " ";
        //     }
        //     start++;
        //     end--;
        // }
        // return 0;

        //reverse and array

        
        int arr[8]={10,20,30,40,50,60,70,80};
        int size= 8;

        int start=0;
        int end= size-1;

        while(start<=end){

            //step1;
            swap(arr[start], arr[end]);
            //step2
            start++;
            //step3
            end--;
        }

        //pritning array
        for(int i=0; i< size; i++){
            cout<< arr[i]<< " ";
        }
        return 0;

    }