#include<iostream>
using namespace std;


int main(){
    // int n;
    // cin >>n;

    // for(int row=0; row<n; row++){

    //     int start= row+1;
    //     for(int col=0; col<row+1; col++){   //this shows that we have to print till row+1 elements
    //         cout<< start <<" ";
    //         start++;
    //         //alt is cout<< row+col+1<< " ";
    //     }
    //     cout<<endl;
    // }
    // return(0);

//Full Numerical Pyramid

    // int n;
    // cin>> n;
    
    // for(int row=0; row<n; row++)
    // {
    //     //spaces
    //     for(int col=0; col<n-row-1; col++)
    //     {
    //         cout<< " ";
    //     }
        
    //     //number
    //     // int start= row+1;
    //     for(int col=0; col<row+1; col++){
    //     cout<< row+col+1;
    //     // cout<< start;
    //     // start++;
    //     }
        
    //     //reverse counting
    //     int start= 2*row;
    //     for(int col=0; col< row; col++)
    //     {
    //         cout<< start;
    //         start--; //due to reverse counting 
    //     }
    //     cout<< endl;
    // }
    // return(0);

//Numeric Holllow pyramid

    int n;
    cin>> n;

    for (int row=0; row<n; row++)
    {
        //spaces
        for(int col=0; col<n-row-1; col++)
        {
            cout<< " ";
        }
        //numbers with spaces wala part
        int start = 1;
        for (int col=0; col<2*row+1; col++)
        {
            //print kya? first and last row keliye same and baaki keliye same 
           
            if(row==0 || row==n-1)
            {
                if(col %2 ==0){
                    cout<< start;
                    start++;
                }
            
                else{ //odd mein spaces
                cout<< " ";
                }
            }
            else{
                //baaki rows
                //first col
                if(col==0){
                cout<< 1;
                }
                
                else if(col == 2*row+1-1){
                cout<< row+1;
                }

                else{
                //beech ki spaces
                cout<<" ";
                }
            }
        }
        cout <<endl;
    }
    return(0);
}