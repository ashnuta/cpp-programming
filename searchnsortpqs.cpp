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