#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create vector
    vector<int> arr;

    // int ans= (sizeof(arr)/ sizeof(int));
    // cout<< ans << endl;

    cout<< arr.size()<< endl;
    cout<< arr.capacity() << endl;

    //insert elements
    arr.push_back(5);
    arr.push_back(6);

    //print 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
   
    //delete or remove
    arr.pop_back();
     for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;

    vector <int> brr(10);
    cout<<"Size of Vector brr: "<<brr.size()<<endl;
    cout<<"Capacity of Vector brr:"<<brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<< " ";
    }
    cout<< endl;

    vector <int> crr(10, -101);
    cout<<"Size of Vector brr: "<<crr.size()<<endl;
    cout<<"Capacity of Vector brr:"<<crr.capacity()<<endl;

    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<< " ";
    }
    cout<< endl;

    int n;
    cout<< "Enter the value of n"<< endl;
    cin>>n;

    vector <int> drr(n, -101);
    cout<<"Size of Vector brr: "<<drr.size()<<endl;
    cout<<"Capacity of Vector brr:"<<drr.capacity()<<endl;


    vector <int> err{10,20,30,40};
    cout<< "Printing err"<< " ";
    for(int i=0; i<err.size(); i++){
        cout<<err[i]<< " ";
    }
    cout<< endl;

    cout<< "VEctor crr is empty or not " << crr.empty()<< endl;
//0 matlab empty? false i.e 0 
//1 matlab emoty? true i.e 1

    
    return 0;
}