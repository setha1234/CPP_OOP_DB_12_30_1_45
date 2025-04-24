// Structure :
/*
    struct StructureName{
        data member
        ...
    };

*/
/*
#include<iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    char gender;
    int age;
    string tel;
};
int main(){
    system("clear");
    struct Employee e1,e2,e3;

    e1.name = "setha";
    e1.age = 18;
    e1.gender = 'M';
    e1.id = 123;
    e1.tel = "855 123 56 789";
    

    e2.name = "kaka";
    e3.name = "sasa";

    cout<<"Name   Employee : "<<e1.name<<endl;
    cout<<"ID     Employee : "<<e1.id<<endl;
    cout<<"Gender Employee : "<<e1.gender<<endl;
    cout<<"Age    Employee : "<<e1.age<<endl;
    cout<<"Tel    Employee : "<<e1.tel<<endl;

    cout<<"Employee 2 Name : "<<e2.name<<endl;
    cout<<"Employee 3 Name : "<<e3.name<<endl;
    return 0;
}

*/

/*
#include <iostream>
#include <cstring>
using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
}book1,book2,book3;

int main(){
    system("clear");

    cout<<"===================== Input ==========================="<<endl;
    cout<<"Tilte   : ";cin.getline(book1.title,50);
    cout<<"Author  : ";cin.getline(book1.author,50);
    cout<<"Subject : ";cin.getline(book1.subject,100);
    cout<<"Book ID : ";cin>>book1.book_id;

    cout<<"===================== Output ==========================="<<endl;
    cout<<"Title   :"<<book1.title<<endl;
    cout<<"Author  :"<<book1.author<<endl;
    cout<<"Subject :"<<book1.subject<<endl;
    cout<<"Book ID :"<<book1.book_id<<endl;
    return 0;
}

*/


#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float grade;
};
void InputStudent(Student &s){
    cout<<"Enter Student Name  : ";cin.ignore();getline(cin,s.name);
    cout<<"Enter Student Age   : ";cin>>s.age;
    cout<<"Enter Student Grade : ";cin>>s.grade;
}
void OutputStudent(Student &s){
    cout<<"Student Name  : "<<s.name<<endl;
    cout<<"Student Age   : "<<s.age<<endl;
    cout<<"Student Grade : "<<s.grade<<endl;
}
int main(){
    system("clear");
    cout<<"=============[Student Information System]======================"<<endl;
    int size;   
    cout<<"Enter size of student : ";cin>>size;   
    struct Student student[size];
    cout<<"===================[Input Infromation]========================="<<endl;
    for(int i=0;i<size;i++){
        cout<<endl;
        InputStudent(student[i]);
    }
    cout<<"===================[Output Infromation]========================="<<endl;
    for(int j=0;j<size;j++){
        cout<<endl;
        OutputStudent(student[j]);
    }
    return 0;
}