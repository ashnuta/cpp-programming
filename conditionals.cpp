#include<iostream>
using namespace std;

// int main(){
//     //This is only else condition which makes it a bit illogical
//     //declare an integer type variable
//     int score;
//     //print Enter the score (taking it from the user)
//     cout << "Enter the score" << endl;
//     //take input into the score variable and store
//     cin >> score;
//     //if condition
//     if(score<300) {
//         cout << "India wins" << endl;
//     }
//     cout << "Pak wins" << endl;
//     return(0);
// }

//if-else condition
// int main(){
//     int age;
//     cout << "Enter the age" << endl;
//     cin >> age;
//     if(age>=18) {
//         cout << "Can vote" << endl;
//     }
//     else{
//         cout << "Cannot vote" << endl;
//     }
//     return(0);
// }

//multiple conditions nested if-else
// int main(){
//     int marks;
//     cout << "Enter Marks" << endl;
//     cin >> marks;
//     if (marks>=90){
//         cout << "A Grade";
//     }
//     else if(marks>=80){
//         cout << "B Grade";
//         }
//         else if(marks>=60){
//                 cout<< "C Grade";
//             }
//             else if(marks>=40){
//                 cout<< "D Grade";
//                 }
//                 else{
//                     cout<< "F Grade";
//                     }
//         } 
// //There is no compulsion go add last else condition


int main(){
    int sisnum;
    cout << "Enter number of sisters you have"<< endl;
    cin >> sisnum;
    if(sisnum==0){
        cout << "Baat nhi banegi"<< endl;
    }
    else{
        cout << "Baat ban jaegi"<< endl;
    }
    return(0);
}
     
