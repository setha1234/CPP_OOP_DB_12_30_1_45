
#include<iostream>
using namespace std;
class Person{
    private :
        int x;
        float y;
    public :
        // setter
        void SetterX(int a){
            x = a;
        }
        void setterY(float b){
            y = b;
        }
        // getter
        int getX(){
            return x;
        }
        float getY(){
            return y;
        }       
};
int main(){
    system("clear");
    Person obj;
    int a;
    float b;
    cout<<"Enter value a : ";cin>>a;
    cout<<"Enter value b : ";cin>>b;
   
    // this is a set to data member in class
    obj.SetterX(a);
    // this is a get data from class
    cout<<obj.getX()<<endl;
    
    obj.setterY(b);
    cout<<obj.getY()<<endl;

    return 0;
}
// Exercise: Coffee Simple
// Objective: Create a program that input and displays coffee

// Requirements:

// Define a class called Cofe that contains:
// Data Member - Private
// string name_coffee,type_of_coffee
// int id,quantity
// float price

// getter - setter 



