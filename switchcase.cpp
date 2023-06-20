#include<iostream>
using namespace std;

int main(){

    int val;
    cout << "Enter the value" << endl;
    cin >> val;

    switch(val){
        case 1: cout<< "Uppu";
        break;
        case 2: cout<< "Ashnu";
        break;
        case 3:cout<< "ziku";
        break;
        case 4: cout<< "oink oink";
        break;
        default: cout<< "chinki";
    }
}