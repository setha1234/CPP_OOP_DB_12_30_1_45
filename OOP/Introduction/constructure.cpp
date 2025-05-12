// // Constructure is similar function but don't return type(void, int, float ,string...)
// #include<iostream>
// using namespace std;
// class Person{
//     // Data Member - variable 
//     private : 
//         string name;
//         int id;
//         float salary;
//     public :
//         // Constructure
//         Person(){
//             name = "Unknow Name.";
//             id  = 0;
//             salary = 0.0;
//         }
//         // Method Member - function
//         void SetVariable(string Name,int ID,float Sal){
//             this->name = Name;
//             this->id = ID;
//             this->salary = Sal;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"ID   : "<<id<<endl;
//             cout<<"Salary: "<<salary<<endl;
//         }

// };
// int main(){
//     system("clear");
//     Person p;
//     string InputName;
//     int InputID;
//     float InputSalary;
    
//     cout<<"Enter your name : ";cin>>InputName;
//     cout<<"Enter your ID   : ";cin>>InputID;
//     cout<<"Enter your Salary   : ";cin>>InputSalary;

//     p.SetVariable(InputName,InputID,InputSalary);   
//     p.Display();




//     return  0;
// }

#include<iostream>
using namespace std;
class Employee{
    private :
        int id;
        string name;
    public : 
        // default constructure 
        Employee(){
            id = 0;
            name = "Unknowed";
        }
        // constructure with parameter
        Employee(string n,int i){
            this->id = i;
            this->name = n;
        }
        void Display(){
            cout<<"Name : " <<name<<endl;
            cout<<"ID   : " <<id<<endl;
        }
};
int main(){
    system("clear");
    Employee E("Setha Sith",234);
    Employee E1; 
    Employee E2("Kaka",123);
    string n;
    int id;
    cout<<"Enter ID to Object :";cin>>id;
    cout<<"Enter name to object : ";cin>>n;
    Employee Input(n,id);

    E.Display();
    E1.Display();
    E2.Display();

    Input.Display();



    return 0;
}