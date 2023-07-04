#include<iostream>
#include<vector>
using namespace std;

//ques 1. find unique element 

// int findUnique(vector <int> arr){
//     int ans = 0;

//     for(int i=0; i<arr.size(); i++){
//         ans= ans ^ arr[i]; //0^1^1^2^3^3 =2
//     }
//     return ans;
// }

// int main() {

//     int n;
//     cout<< "Enter size of array"<< endl;
//     cin>> n;

//     vector <int> arr(n);
//     cout<< "Enter the elements"<< endl;
//     // taking inputs
//     for(int i=0; i<arr.size(); i++){
//         cin>> arr[i];
//     }
//     int uniqueElement = findUnique(arr);
//     cout<< "Unique element is "<< uniqueElement <<endl;

//     return 0;
// }

//ques 2. union of 2 arrays assumind no duplicates

    // int main(){

    //     int arr[]={1,3,5,7,9};
    //     int sizea=5;
    //     int brr[]={2,4,6,8};
    //     int sizeb= 4;

    //     vector<int> ans;

    //     //push all elements of a in ans array
    //     for(int i=0; i<sizea; i++){
    //         ans.push_back(arr[i]);
    //     }

    //      //push all elements of b in ans array
    //     for(int i=0; i<sizeb; i++){
    //         ans.push_back(brr[i]);
    //     }

    //     //print ans
    //     cout<< "Printing ans array"<< endl;
    //     for(int i=0; i<ans.size(); i++){
    //         cout<< ans[i]<<" ";
    //     }
    // return 0;
    // }

//ques3. Intersection of arrays

    // int main(){
    //     vector<int> arr{1,2,3,3,4,6,8};
    //     vector<int> brr{3,3,4,10};

    //     vector<int> ans;

    //     //outer loop on vector a
    //     for(int i=-0; i<arr.size(); i++){
    //         int element = arr[i];
    //          //for every element of a, run loop on brr
    //         for(int j=0; j<brr.size(); j++){
    //             if (element == brr[j]){
    //                 //marking for duplicacy ki ek baar element checked toh done 
    //                 brr[j]= INT8_MIN; //or -1 
    //                 ans.push_back(element);
    //             }
    //         }
    //     }
    //     //print ans
    //     for(auto value: ans){
    //         cout<< value<< " ";
    //     }
    //     cout<< endl;
    //     return 0;
//}

//ques4. Pair sum problem   

    // int main(){
    //     vector <int> arr={10,20,40,60,70};
    //     int sum=80;

    //     //print all pairs
    //     //outer loop will traverse for each element
    //     for(int i=0; i<arr.size(); i++){
    //         // cout<<"We are at element: "<< arr[i] << endl;
    //         int element = arr[i];

    //         //for every element, will traverse on aage wala element
    //         for(int j=i+1; j<arr.size(); j++){
    //             // cout<< "pair " << element << " with "<< arr[j]<< endl;
    //             // cout<<"("<< element << "," << arr[j]<< ")"<< endl;
    //             if(element+ arr[j]== sum){
    //                 cout<< "Pair found "<< element<< " , "<< arr[j]<< endl;
    //             }
    //         }
    //     }

    // }

//ques5. Triplet Sum problem

    // int main(){
    //     vector<int> arr{10,20,30,40};
    //     int sum= 80;

    //     for(int i=0; i<arr.size(); i++){
    //         int element1 = arr[i];
            
    //         for(int j=i+1; j<arr.size(); j++){
    //              int element2 = arr[j];
                
               
    //             for(int k=i+2; k<arr.size(); k++){
    //             int element3 = arr[k];

    //                 if(element1+ element2+ element3 == sum ){
    //                 cout<< "("<< element1 <<" ,"<< element2 <<","<< element3<<")" << endl;
    //                 }
    //             }
    //         }
    //     }
        

    // }
        
//ques6. Sort 0's and 1's

    int main(){
        vector<int> arr{0,1,0,1,1,0,1,0,1,1};

        int start=0;
        int end= arr.size() - 1;
        int i=0;

        while(i != end){
            if(arr[i] == 0){
                //swap from left
                swap(arr[start], arr[i]);
                start++;
                i++;
            }

            else{
                //swap from right
                swap(arr[end], arr[i]);
                end--;
            }
            
        } 

        //print
        for(auto val: arr){
            cout<< val << " ";
        }

    }