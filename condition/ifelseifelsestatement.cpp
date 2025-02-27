#include<iostream>
using namespace std;
int main(){
    system("cls");

    // write the code for input 2 values
    // if + (1value + 2value)
    // if - (1value - 2value)
    // if * (1value * 2value)
    // if / (1value / 2value)

    int num1,num2,result;
    char symbol;

    cout<<"==================================[ Input Value to Calculator ]=========================="<<endl;
    
    cout<<"Enter first number: ";
    cin>>num1;	
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter an operator (+,-,*,/): ";
    cin>>symbol;

    if(symbol == '+'){
        result = num1 + num2;
    }else if(symbol == '-'){
        result = num1 - num2;
    }else if(symbol == '*'){
        result = num1 * num2;
    }else if(symbol == '/'){
        result = num1 / num2;
    }else{
        cout<<"Invalid operator! Please enter a valid operator (+,-,*,/)."<<endl;  
    }
    
    cout<<"========================================[ Result ]=========================================="<<endl;
    cout<<"Result: "<<result<<endl;
    cout<<"========================================[ End ]=========================================="<<endl;

    return 0;
}