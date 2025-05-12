// #include<iostream>
// using namespace std;
// // Base / Super class / mom class
// class Person{
//     public:
//         // data member
//         string name;
//         int id;
//         float salary;
//         // method member
//         void input(){
//             cout<<"Enter your name : ";cin>>name;
//             cout<<"Enter your id : ";cin>>id;
//             cout<<"Enter your salary : ";cin>>salary;
//         }
// };
// // devrided / sub class
// class Employee:public Person{
//     public: 
//         void Output(){
//             cout<<"Employee name : "<<name<<endl;
//             cout<<"Employee ID   : "<<id<<endl;
//             cout<<"Employee Salary : "<<salary<<endl;
//         }

// };
// // Sub Class / class kon
// class Student :public Person{
//    public : 
//    void Output(){
//     cout<<"Student name : "<<name<<endl;
//     cout<<"Student ID   : "<<id<<endl;
//     cout<<"Student Salary : "<<salary<<endl;
// }
// };

// int main(){
//     system("clear");
//     Employee e;
//     e.input();
//     e.Output();

//     Student obj;
//     obj.input();
//     obj.Output();
    

//     return 0;
// }


// // Create a program by Inheritae
// create bass class Animal : 
// data memeber (string color,string name,string type_of_animal)
// Method Member : Create_Detail_Animal
// Sub Class 3-4 del inheritance jit pi class bass 
// Method Member : Display_Detail_Animal  

// #include<iostream>
// using namespace std;
// // Bass Class
// class Animal {
//     public : 
//         string color;
//         string name;
//         string type_of_animal;

//         // Method members
//         void Create_Detail_Animal(){
//             cout<<"Enter The Color of Animal : ";cin>>color;
//             cout<<"Enter The name of animal  : ";cin>>name;
//             cout<<"Enter the type of animal  : ";cin>>type_of_animal;
//         }
// };
// // sub class
// class Cat:public Animal{
//     public : 
//         void Display_Detail_Animal  (){
//             cout<<"Color of Cat : "<<color<<endl;
//             cout<<"Name of cat : "<<name<<endl;
//             cout<<"Type of Cat : "<<type_of_animal<<endl;
//         }
// };

// class Dog:public Animal{
//     public : 
//         void Display_Detail_Animal  (){
//             cout<<"Color of Dog : "<<color<<endl;
//             cout<<"Name of Dog : "<<name<<endl;
//             cout<<"Type of Dog : "<<type_of_animal<<endl;
//         }
// };

// int main(){
//     Cat c;
//     cout<<"=========================================="<<endl;
//     c.Create_Detail_Animal();
//     c.Display_Detail_Animal();
//     cout<<"=========================================="<<endl;
//     Dog d;
//     d.Create_Detail_Animal();
//     d.Display_Detail_Animal();

//     return 0;
// }


#include <iostream>
using namespace std;
class Dad{
    private:
        string car_brand,model;
        int year_of_car;
    public :
        void Car(){
            cout<<"The car brand : ";cin>>car_brand;
            cout<<"The model     : ";cin>>model;
            cout<<"The year of car : ";cin>>year_of_car;
        }
        string getBrand(){
            return car_brand;
        }
        string Model(){
            return model;
        } 
        int YearCar(){
            return year_of_car;
        }

};
class Mom{
    private : 
        string house,land;
    public: 
        void Input(){
            cout<<"Enter house address : ";cin>>house;
            cout<<"Enter the area of land : ";cin>>land;
        }
        string GetHouse(){
            return house;
        }
        string GetLand(){
            return land;
        }

};

class Son:public Dad,public Mom{
    public : 

        void Enter_Detail(){
            Car();
            Input();
        }
        void Display_Detail(){
            cout<<"The car brand is : "<<getBrand()<<endl;
            cout<<"The model of the car : "<<Model()<<endl;
            cout<<"The year of the car : :"<<YearCar()<<endl;
            cout<<"House : "<<GetHouse()<<endl;
            cout<<"Land Area : "<<GetLand()<<endl;
        }
};

int main(){
    system("clear");
    Son s;
    s.Enter_Detail();
    s.Display_Detail();
}