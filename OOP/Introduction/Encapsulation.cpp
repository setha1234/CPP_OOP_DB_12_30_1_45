#include<iostream>
using namespace std;
class Person{       
    public : // assign for public
        //  Data Member
        string name;
        string gender;
        int id;
        // Method Member
        void Input(){
            cout<<"Enter your name   : ";cin>>name;
            cout<<"Enter your gender : ";cin>>gender;
            cout<<"Enter your Id     : ";cin>>id;
        }
        void Output(){
            cout<<"Name   : "<<name<<endl;
            cout<<"Gender : "<<gender<<endl;
            cout<<"ID     : "<<id<<endl;
        }
        

};
int main(){
    Person p,obj; 

    cout<<"Enter id : ";cin>>obj.id;
    
    p.Input();
    p.Output();
    return 0;
}

