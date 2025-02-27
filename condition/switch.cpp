#include<iostream>
using namespace std;
int main(){
    system("cls"); // clears the console screen
    float num1,num2;
    char calculate;
    cout<<"Enter value number 1 :";cin>>num1;
    cout<<"Enter value number 2 :";cin>>num2;
    cout<<"Enter operator (+,-,*,/) :";cin>>calculate;

    switch(calculate){
        case '+':{
            cout<<"number 1 + number 2 = "<<num1+num2<<endl;
            break;
        }
        case '-':{
            cout<<"number 1 - number 2 = "<<num1-num2<<endl;
            break;
        }
        case '*':{
            cout<<"number 1 * number 2 = "<<num1*num2<<endl;
            break;
        }
        case '/':{
            cout<<"number 1 / number 2 = "<<num1/num2<<endl;
            break;
        }
        default:{
            cout<<"Invalid operator!"<<endl;
        }

    }



    return 0;
}