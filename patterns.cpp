#include<iostream>
using namespace std;
//Printing Solid rectangle
int main(){
    //outer loop-row observed
    // for(int row=0; row<3; row++){
    //     //inner loop-col observed
    //     for(int col=0;col<5; col++){
    //         cout<<"*";
    //     }
    //     cout<< endl;
    // }

    //solid square
    //outer loop
    
    // for(int row=0; row<4; row++){
    //     //inner loop
    //     for(int col=0; col<4; col++){
    //         cout<< "* ";
    //     }
    //     cout<< endl;
    // }

//Taking input for rows and column
    // int n, m;
    
    // cin >> n;
    // cin >> m;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<m; col++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

//Hollow rectangle

    // for(int row=0; row<3; row=row+1)
    // {
    //     //first row or last row print 5*
    //     if(row == 0 || row == 2){
    //         for(int col=0; col<5; col++){
    //             cout<< "* " ;
    //         }
    //     }
    //     else {
    //         //remaining middle rows
    //         //first *
    //         cout << "* ";
    //         //spaces
    //         for(int i=0; i<3; i++){
    //             cout<< "  ";
    //         }
    //         //last *
    //         cout<< "* ";
    //     }
    //     cout<< endl;
    // }


// Generic code

    // int rowCount, colCount;
    // cin>> rowCount;
    // cin>> colCount;

    // for(int row=0; row<rowCount; row++){
    //     if(row==0 || row==rowCount-1){
    //         for(int col=0; col<colCount; col++){
    //             cout<< "* ";
    //         }
    //     }
    //     else{
    //         cout<< "* ";
    //         // for printing the *, already aage and peeche hume 2 stars print toh woh 2 minus and baaki col mein space
    //         for(int col=0; col<colCount-2; col++){
    //         cout << "  ";
    //         }
    //         cout<< "* ";
    //     }
    //     cout<< endl;
    // }

    // Half Pyramid

    //number of rows input 
    // int n;
    // cin >> n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col< row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

//Inverted Hald Pyramid
//Taking input 
// n is the number of rows
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col< n-row; col++){
    //         cout<< "* ";
    //        }
    //     cout << endl;
    // }
    // return(0);

//Numeric half pyramid
//number of rows =n
    // int n;
    // cin>> n;
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row+1; col++)
    //     {
    //         cout<< col+1;
    //     }
    //     cout<< endl;
    // }

//numeric inverted half pyramid
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<n-row; col++)
    //     {
    //         cout<< col+1;
    //     }
    //     cout<< endl;
    // }
    // return(0);

// Full pyramid
// n is number of rows

//     int n;
//     cin>> n;

//     //outer loop
//     for(int row=0; row<n; row++)
//     {
//         //inner loop for spaces
//         for(int col=0; col<n-row-1; col++){
//             cout<< " ";
//         }
//         //stars
//         for(int col=0; col<row+1; col++){
//             cout<< "* ";
//         }
//         cout<< endl;
//     }
//     // return(0);

// //inverted full pyramid
// //n is total no of rows

//     for(int row=0; row<n; row++)
//     {
//         //spaces 
//         for(int col=0; col<row; col++)
//         {
//             cout<<" ";
//         }
//         //stars
//         for(int col=0; col<n-row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<< endl;
    // }
    // return(0);

//solid diamond
    
    // int n;
    // cin>> n;

    // //outer loop
    // for(int row=0; row<n; row++)
    // {
    //     //inner loop for spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int col=0; col<row+1; col++){
    //         cout<< "* ";
    //     }
    //     cout<< endl;
    // }
    // for(int row=0; row<n; row++)
    // {
    //     //spaces 
    //     for(int col=0; col<row; col++)
    //     {
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col=0; col<n-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

//Hollow diamond

    // int n;
    // cin>> n;

    // for(int row=0; row<n; row++)
    // {
    //     //spaces
    //     for(int col=0; col<n-row-1; col++)
    //     {
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int col=0; col<2*row+1; col++)
    //     {
    //         // if first an last char are only stars
    //         if(col==0 || col==2*row){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<< endl;
    // }

    // for(int row=0; row<n; row++)
    // {
    //     //spaces
    //     for(int col=0; col<row; col++)
    //     {
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int col=0; col<2*n-2*row-1; col++)
    //     {
    //         // if first an last char are only stars
    //         if(col==0 || col==2*n-2*row-2){
    //             cout<< "*";
    //     }
    //     else{
    //         cout<< " ";
    //         }
        
    //     }
    //     cout<< endl;
    // }
    // return(0);


//Flipped solid diamond

    // int n;
    // cin>> n;
    
    // for(int row=0; row<n; row++)
    // {
    //     //half pyramid
    //     for(int col=0; col<n-row; col++)
    //     {
    //         cout<< "*";
    //     }
    //     //full pyramid spaces
    //     for(int col=0; col<2*row+1; col++)
    //     {
    //         cout<< " ";
    //     }
    //     //half pyramid
    //     for(int col=0; col<n-row; col++)
    //     {
    //         cout<< "*";
    //     }
    // cout<< endl;
    // }
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row+1; col++)
    //     {
    //         cout<< "*";
    //     }
    //     for(int col=0; col<2*n-2*row-1; col++)
    //     {
    //         cout<< " ";
    //     }
    //     for(int col=0; col<row+1; col++)
    //     {
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }
    // return(0);

//Numeric pattern #1

    // int n;
    // cin>> n;

    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row+1; col++)
    //     {
    //         cout<< row+1;
    //         //not a last character toh star print hoga i.e row+1 se pehle row aaega is the last char
    //         if(col != row){
    //         cout<< "*";
    //         }
    //     }
    // cout<< endl;
    // }
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col< n-row; col++)
    //     {
    //         cout<< n-row;

    //         if(col!= n-row-1){
    //         cout<< "*";
    //         }
    //     }
    //     cout<< endl;
    // }
    // return(0);

//Numeric pattern #2

    int n;
    cin>> n;

    for(int row=0; row<n; row++)
    {
        int col;
        for(col=0; col<row+1; col++)
        {
            // cout<< col+1;
            int ans= col+1;
            char ch= ans+ 'A' - 1;  // sirf A se karne mein B se hi start ho rhatoh A-1 karna padega
            cout<< ch;
           
        }
        
        col= col - 1;

        //reverse counting printing
        // for(; col>=1; col=col-1)
        for(int col=row; col>=1; col--)
        {
            // cout<<col;
            int ans = col;
            char ch= ans + 'A' - 1;  
            cout<< ch;
        }
        cout<< endl;
    }
    return(0);
}


   
