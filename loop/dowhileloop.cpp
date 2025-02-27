#include<iostream>
using namespace std;
int main(){
    system("cls");
    int op;
    float a,b;
    do{
        cout<<"============[Menu Operator]================="<<endl;
        cout<<"1. a + b "<<endl;
        cout<<"2. a - b "<<endl;
        cout<<"3. a * b "<<endl;
        cout<<"4. a / b "<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Enter your choice : ";cin>>op;
        switch(op){
            case 1 : {
                cout<<"Enter value of a : ";cin>>a;
                cout<<"Enter value of b : ";cin>>b;
                cout<<"a + b = "<<a+b<<endl;
            }break;
            case 2 : {
                cout<<"Enter value of a : ";cin>>a;
                cout<<"Enter value of b : ";cin>>b;
                cout<<"a - b = "<<a-b<<endl;
                break;
            }
            case 3 :{
                cout<<"Enter value of a : ";cin>>a;
                cout<<"Enter value of b : ";cin>>b;
                cout<<"a * b = "<<a*b<<endl;
                break;
            }
            case 4 :{
                cout<<"Enter value of a : ";cin>>a;
                cout<<"Enter value of b : ";cin>>b;
                cout<<"a / b = "<<a/b<<endl;
                break;
            }
            case 5 : {
                cout<<"Exiting..."<<endl;
                break;
            }
            default : {
                cout<<"Invalid choice. Please try again."<<endl;
            }
        }
        

        

    }while(op!=5);


   


    return 0;
}