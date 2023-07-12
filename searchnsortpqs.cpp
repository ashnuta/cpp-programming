#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//ques1. First occurence of element

// int firstOccurence(vector<int> v, int target){

//     int start = 0;
//     int end = v.size() - 1;
//     int mid = start + (end - start)/2;
//     int ans = -1;
    
//     while (start <= end){
//         if(v[mid]== target){
//            //ans store and then left search
//            ans = mid;
//            end = mid - 1;
//         }

//         else if (target > v[mid]){
//             //right search
//             start = mid+1;
//         }

//         else if (target < v[mid]){
//             //left search
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2 ;
//     }
//     return ans;
// }


// int main(){

//     vector <int> v{1,3,4,4,4,4,6,7};
//     int target = 4;

//     int ans = firstOccurence(v,target);
//     cout<< "ans is "<< ans << endl;

//     auto ans2 = lower_bound (v.begin(), v.end(), target);
//     cout << "ans2 is"<< ans2-v.begin() << endl;
//     return 0;
// }

//ques2. 
// int lastOccurence(vector<int> arr, int target){

//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = start + (end - start)/2;
//     int ans = -1;
    
//     while (start <= end){
//         if(arr[mid]== target){
//            //ans store and then right search
//            ans = mid;
//            start = mid + 1;
//         }

//         else if (target > arr[mid]){
//             //right search
//             start = mid+1;
//         }

//         else if (target < arr[mid]){
//             //left search
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2 ;
//     }
//     return ans;
// }


// int main(){

//     vector <int> arr{1,3,7,7,7,7,7,7,7,7,7,7,7,8,9};
//     int target = 7;

//     int ans = lastOccurence(arr,target);

//     cout<< "ans is "<< ans << endl;
// }


//ques3. Peak element in the array

// int findPeakIndex(vector <int> arr){
//     int s=0;
//     int e= arr.size() - 1;
//     int mid = s + (e-s)/2;

//     while(s < e){
//         if(arr[mid]< arr[mid+1]){
//             //right search
//             s = mid + 1;
//         }
//         else{
//             e= mid;
//         }
//         int mid = s + (e-s)/2;
//     }
//     return s;
// }

// class Solution {
// public:

//     int peakIndexInMountainArray (vector<int> &arr){
//         return findPeakIndex(arr);
//     }
// };

//ques4. square root of a number using binary search

// int findSqrt(int n){
//     int target= n;
//     int s = 0;
//     int e = n;
//     int mid = s+ (e-s)/2;
//     int ans= -1;

//     while(s <= e){
//         if (mid*mid == target){
//             return mid;
//         }
//         else if (mid*mid < target){
//             //store and right search
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (mid*mid > target){
//             //left search only
//             e= mid - 1;
//         }
//         mid = s+ (e-s)/2;
//     }
//     return ans;

// }



// int main(){
//     int n;
//     cout<< "Enter the number" << endl;
//     cin >> n;

//     int ans = findSqrt(n);
//     cout<< "Ans is "<< ans<< endl;

//     //for floating precision
//     int precision;
//     cout<< "Enter the number of floating digits in precision"<< endl;
//     cin>> precision;

//     double step=0.1;
//     double finalAns = ans;
//     for(int i =0; i< precision; i++){
//         for(double j=finalAns; j*j <= n; j=j+step){
//             finalAns= j;
//         }
//         step = step/10;
//     }
//     cout<< "final ans is "<< finalAns << endl;
//     return 0;
// }

//ques5. Binary search on 2D array
bool binarySearch(int arr[][4], int rows, int cols, int target){

    int s = 0;
    int n = rows;
    int m = cols;
    int totalSize = n*m;
    int e = totalSize - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
       int rowIndex = mid/m;
       int colIndex = mid%m;
       int element = arr[rowIndex][colIndex];

       if(element == target){
        cout<< "Found at "<< rowIndex << " "<< colIndex<< endl;
        return true;
       }
       else if (element > target){
        //left search
        e=mid-1;
       }
       else{
        //right search
        s=mid+1;
       }
       mid= s+ (e-s)/2;
    }
    return false;
}


int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = 5;
    int cols = 4;
    
    int target = 19;

    bool ans = binarySearch(arr, rows,cols,target);

    if(ans == true){
        cout<< "Found"<< endl;
    }
    else{
        cout<<"Not found"<<endl;    
    }
    return 0;
}