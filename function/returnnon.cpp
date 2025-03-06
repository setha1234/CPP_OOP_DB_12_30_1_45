// #include<iostream>
// using namespace std;

// int X()
// {
//     int x; 
//     x = 10;
//     return x;
// }

// int Y(){
//     int y;
//     y  = 20;
//     return y;
// }

// float Sum(){
//     int a; // a = x => 10
//     int b; 
//     a = X(); // a = x => 10
//     b = Y(); // b = y => 20
//     a = 50; // a = 50
//     b = 50; // b = 50
//     return a * b;
    
// }

// int main(){
//     system("cls");

//     cout<<Sum();
// }



/* 
    Create a program for store item
    - id
    - name
    - price
    - quantity
    - tax
    - discount
    - payment
    - total
*/	
#include <iostream>
using namespace std;
string fname,lname;

string Main(string firstname, string lastname)
{
    fname = firstname;
    lname = lastname;

    return fname + " " + lname;
}

void Display(){
    cout<<fname<< " " << lname<<endl;
}

int main(){
    system("cls");
    Main("Sith","Setha");
    Display();
}

