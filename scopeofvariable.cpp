#include<iostream>
using namespace std;

int raja=420;

int main(){

//variable scoping

    //declaration
    int a;

    //intialization
    int b= 5;

    //updation
    b= 10;

    // int b=8;
    //redefining aise nhi kar sakte but

    if(true){
        // int b= 15;

        // cout<< b<< endl; //isme 15 print hogi since yeh if condition keandar wala b hai
        cout<< b<< endl; //yeh wala b  hi ab bahar main function wale b ko refer kar rha hoga i.e 10
        
        int raja=421; //redeclare bhi karsakte
        cout<< raja<< endl;
    }

    cout<< b<< endl; // idhar b ki main function mein updated value print hogi
    cout<< raja<< endl;
    return(0); 
}
