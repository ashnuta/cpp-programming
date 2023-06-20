#include<iostream>
using namespace std;

// int main(){

//     // int n;
//     // cout<< "Enter the value of n"<< endl;
//     // cin>> n;

//     // for(int i=0; i<n; i++){
//     //     cout<< "uppu"<< endl;
//     // }
//     //yeh agar hume baar baar arwana ho toh copy paste ya bohot lengthy and bulky isliye functions 
// }

// void printName(){
        
//     int n;
//     cout<< "Enter the value of n"<< endl;
//     cin>> n;

//     for(int i=0; i<n; i++){
//     cout<< "uppu"<< endl;
//     }
// }

// int main(){
//     //function calling
//     printName(); 
// }

// void printNumber(int num) //different name bhi le sakte hain
// {
//     cout<< num<< endl;
// }

// int main(){

//     int a=5;
//     // printNumber(a);

//     cout<< "Address of a is"<< &a << endl;
   
// }

//function to add 2 numbers
//funtion declaration+defined
// int add(int a, int b){  //idhar (int x, int y) bhi likh sakte hain
//     int result= a+b;
//     return result;
// }

// //function call or invoke
// int main(){

//     int a;
//     cout<< "Enter the value of a"<< endl;
//     cin>> a;

//     int b;
//     cout<< "Enter the value of b"<< endl;
//     cin>> b;

//     int sum= add(a,b);
//     cout<< "Addition result is:" << sum<< endl;

//     return(0);   

// }

//function ot find max of 3 numbers

//declaration

// int findMax(int num1, int num2, int num3){

//     if(num1>num2 && num1>num3){
//         return num1;
//     }
//     else if(num2>num2 && num2>num3){
//         return num2;
//     }
//     else{
//         return num3;
//     }

// }

// int main(){

//     //int a,b,c
//     //cin>> a>>b>>c; other way of taking input

//     int a;
//     cout<< "Enter first num" << endl;
//     cin>> a;

//     int b;
//     cout<< "Enter second num" << endl;
//     cin>> b;

//     int c;
//     cout<< "Enter third num" << endl;
//     cin>> c;

//     int maximumNumber = findMax(a,b,c); //findMax is the function created 
//     cout<< "Maximum of three numbers is"<< endl;
//     cout<< maximumNumber<< endl;
//     return (0);
// }

//coutning from 1 to N

    //here n is a parameter
    // void printCounting(int n){  //jab coutning print kar rhe toh hume value toh return nhi karni sirf print karwana

    //     for(int i=1; i<=n;i++){
    //         cout<< i<< " ";
    //     }
    //     cout<< endl;
    // }
    
    
    // int main(){

    //     int n;
    //     cout<< "Enter the value of n"<< endl;
    //     cin >> n;

            //here n is an argument
    //     printCounting(n);
    // }

//Function for student grade problem

    // char getGrade(int marks){

        // if(marks >= 90){
        //     return 'A';
        // }
        // else if(marks >= 80){
        //     return 'B';
        // }
        // else if(marks >= 70){
        //     return 'C';
        // }
        // else if(marks >= 60){
        //     return 'D';
        // }
        // else{
        //     return 'E';
        // }

    //using switch case

    //     switch (marks/10){
    //         case 10: return 'A'; break;
    //         case 9 : return 'A'; break;
    //         case 8 : return 'B'; break;
    //         case 7 : return 'C'; break;
    //         case 6 : return 'D'; break;
    //         default: return 'E';
    //     }
    // }



    // int main(){

        // int marks;
        // cout<< "Enter marks";
        // cin>> marks;

        // char finalGrade= getGrade(marks);
        // cout<< finalGrade<< endl;

        //saare dekhne keliye
    //     for(int i=0; i<=100; i++){
    //         char ans= getGrade(i);
    //         cout<< "Grade for marks= "<< i << " is " << ans<< endl;
    //     }
    //     return (0);
    // }

//sum of no upto n

    // int getSum(int n){

    //     int sum=0;
    //     for(int i=1; i<=n; i++){
    //         sum= sum+ i;
    //     }
    //     return sum;
    // }

    // int main(){

    //     int n;
    //     cout<< "Enter the value of n"<< endl;
    //     cin >> n;

    //     int sum= getSum(n);
    //     cout<< "Sum of numbers upto " << n << " is " << sum << endl;
        
    //     return(0);
    // }

//even numbers sum upto n

    int getEvenSum(int n){

        int sum=0;
        for(int i=2; i<=n; i=i+2){
            sum= sum+i;
        }

        //another way
        // int sum=0;
        // for(int i=1; i<=n; i++){
        //     if(i%2==0){
        //         sum=sum+i;
        //     }
        // }
        return sum;
    }

    
    
    int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;

        int sum= getEvenSum(n);
        cout<< "Sum of even numbers upto "<< n<< " is "<< sum<< endl;

        return(0);
    }