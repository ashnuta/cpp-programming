#include<iostream>
#include<vector>
using namespace std;

//1. selection sort
// int main(){
//     vector <int> arr{5,4,3,2,1};
//     int n = arr.size();

//     //loop for the block i='' jidhar sahielement place karna hai and uske andar sabmein min dhundh rhena
//     for(int i=0; i<n-1; i++){   //why n-1 since last element keliye min nhi find out kiya
//         //min find
//         //assuming jis number pe khade woh min hai and fir isko baaki aage ke elements se compare
//         int minIndex=i;
//         //ab aage check karnekeliye loop chalega
//         for(int j=i+1; j<n; j++){
//             if (arr[j]<arr[minIndex]){
//                 //new min found, toh store
//                 minIndex= j;
//             }
//         }
//         //store ke baad swap
//         swap(arr[i], arr[minIndex]);
        
//     }  
//     //printing
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<< " ";
       
//     } cout<< endl;
    
//     return 0;
// }


//2. Bubble sort

// int main(){
//     vector <int> arr{10,1,7,6,14,9};
//     int n = arr.size();

//     //outer loop for rounds
//     for(int round = 1; round<n; round++){
//         //flag variable for optimizaton
//         bool swapped = false; //shuru mein toh kuchh swap nhi hua toh false rakha
//         //second loop for comparison
//         // for(int j=0; j<= n-round-1; j++) or
//         for(int j=0; j< n-round; j++){
//             //comparing j ko uske aage wale se
//             if(arr[j]> arr[j+1]){ //idhar swap hoga toh flag ko true
//                 swapped= true;
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//         //jab inner loop se bahar nikle
//         if(swapped == false){
//             //sorted hai, no need to check in further rounds and loop se bahar
//             break;
//         }    
//     }
//     //printing 
//     for(int i=0; i<n; i++){
//         cout << arr[i]<< " ";
//     }
//     cout<< endl;
//     return 0;
// }


//3. Insertion sort

int main(){
    vector <int> arr{10,1,7,6,14,9};
    int n = arr.size();

    //outer loop for rounds
    for(int round=1; round<n; round++){
        //step A - fetch
        int val = arr[round]; //ab round 1 se shuru and value bhi 1 se toh woh 0 index wala waise hi pada hua hai dont have to check only

        //step B - compare 
        //jis bhi element pe khade usse pehle jitne bhi elements unse compare
        //thus if at ith element toh i=1 se 0th index tk check
        int j =round-1;
        for(; j>=0; j--){
            if (arr[j] > val){
                //step C- shift
                arr[j+1] = arr[j];
            }
            else{
                //rukna hai 
                break;
            }
        }
        //jab poora for loop finish hua shifting wala toh copy karenge
        //step D - copy
        arr[j+1] = val;
    }
    //printing 
    for(int i = 0 ; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}