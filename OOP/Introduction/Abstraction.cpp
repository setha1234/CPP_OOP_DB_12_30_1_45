// #include<iostream>
// using namespace std;
// class Person{
//     private :
//     //  Data Member
//         string name;
//         string gender;
//         int id;
//     public : // assign for public
//         // Method Member
//         void Input(){
//             cout<<"Enter your name   : ";cin>>name;
//             cout<<"Enter your gender : ";cin>>gender;
//             cout<<"Enter your Id     : ";cin>>id;
//         }
//         void Output(){
//             cout<<"Name   : "<<name<<endl;
//             cout<<"Gender : "<<gender<<endl;
//             cout<<"ID     : "<<id<<endl;
//         }     
// };
// int main(){
//     Person p,obj;   
//     p.Input();
//     p.Output();
//     return 0;
// }


// Exercise: Student Information System
// Objective: Create a program that stores and displays student

// Requirements:

// Define a class called Student that contains:
// Data Member - Private
// string name
// int age
// float grade
// Method Member - Public
// Write a function void inputStudent() to input the student data.
// Write a function void displayStudent() to display student data.
// In the main() function nput their data using the function, and then display the data.


#include<iostream>
using namespace std;
class Student{
    // Data Member
    private :
        string name;
        int age;
        float grade;
    // Method Member
    public :
        void inputStudent(){
            cout<<"Enter Student Name : ";getline(cin,name);
            cout<<"Enter Student Age  : ";cin>>age;
            cout<<"Enter Student Grade: ";cin>>grade;
        }
        void displayStudent(){
            cout<<"---------- Display Student ------------"<<endl;
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Age  : "<<age<<endl;
            cout<<"Student Grade: "<<grade<<endl;
        }


};
int main(){
    system("clear");
    Student stu1;

    stu1.inputStudent();
    stu1.displayStudent();


    return 0;
}

