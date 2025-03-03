#include<iostream>
using namespace std;
int id;
float salary;
char gender;
string name; // global variable

void InsertEmployee(){
    cout<<"\t\t\t==========================[ Insert Information ]==================================="<<endl;
    cout<<"\t\t\tEnter employee id:";
    cin>>id;
    cout<<"\t\t\tEnter employee name:";
    cin.ignore();getline(cin,name);
    cout<<"\t\t\tEnter employee gender (M/F):";
    cin>>gender;
    cout<<"\t\t\tEnter employee salary:";
    cin>>salary;

}
void Header(){
    cout<<"\t\t\t============[Employee Information]=============="<<endl;
    cout<<"\t\t\tID\t"<<"Name\t"<<"Gender\t"<<"Salary"<<endl;
    cout<<"\t\t\t================================================"<<endl;
}


void DisplayEmployee(){
    cout<<"\t\t\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<endl;

}

int main(){
    system("cls");

    InsertEmployee();
    Header();
    DisplayEmployee();
    

    return 0;
}

