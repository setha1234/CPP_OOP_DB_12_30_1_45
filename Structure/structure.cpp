// Structure :
/*
    struct StructureName{
        data member
        ...
    };

*/

// #include<iostream>
// using namespace std;
// struct Employee{
//     int id;
//     string name;
//     char gender;
//     int age;
//     string tel;
// };
// int main(){
//     system("clear");
//     struct Employee e1,e2,e3;

//     e1.name = "setha";
//     e1.age = 18;
//     e1.gender = 'M';
//     e1.id = 123;
//     e1.tel = "855 123 456 789";

//     e2.name = "kaka";
//     e3.name = "sasa";

//     cout<<"Name   Employee : "<<e1.name<<endl;
//     cout<<"ID     Employee : "<<e1.id<<endl;
//     cout<<"Gender Employee : "<<e1.gender<<endl;
//     cout<<"Age    Employee : "<<e1.age<<endl;
//     cout<<"Tel    Employee : "<<e1.tel<<endl;

//     cout<<"Employee 2 Name : "<<e2.name<<endl;
//     cout<<"Employee 3 Name : "<<e3.name<<endl;
//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
}book1;

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