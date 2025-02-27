#include<iostream>
using namespace std;
int main(){
    system("cls"); 
    int age;

    cout << "Enter your age : ";
    cin >> age;
     
    // age = 18

    if(age >= 18){ 
        cout << "You are eligible to vote." << endl;
    }
    if(age < 18){ 
        cout << "You are not eligible to vote." << endl;
    }
    
   


    return 0;
}