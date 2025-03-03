// * Loop : have 3 special values in initialization(Start), condition(Stop) and increment/decrement (Step).
// * Loop have 3 is : For loop, While loop, DoWhile loop
/*
for loop :
syntax : for(initialization; condition; increment/decrement){
        code block
    }

while loop :
syntax :
        initialization;
        while(condition){
            code block
            increment/decrement statement;
        }

doWhile loop :
syntax :
        do{
            code block
        }while(condition);

*/
// example for loop :
/*
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 10; i++){
        cout << i << " ";
    }
    return 0;
}

*/
// example while loop :
/*
#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i < 10){
    cout << i << " ";
        i++;
    }
    return 0;
}

*/
// example doWhile loop :
/*
#include<iostream>
using namespace std;

int main(){
    int i = 0;
    do{
        cout << i << " ";
        i++;
    }while(i < 10);
    return 0;
}

*/
// example goto label :
/*

#include<iostream>
using namespace std;

int main(){
    int i = 0;
    label1:
        cout << i << " ";
        i++;
        if(i < 10)
            goto label1;
    return 0;
}

*/

// example nest loop :
/*

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "i = " << i << " j = " << j << endl;
        }
    }
    return 0;
}

*/

// calculate exercise with loop :
/*
#include <iostream>
using namespace std;

int main()
{
    int op;
    float num1, num2;
    do
    {

        cout << "===============================[Choose Options]======================================" << endl;
        cout << "1. Addition [+]" << endl;
        cout << "2. Subtraction [-]" << endl;
        cout << "3. Multiplication [*]" << endl;
        cout << "4. Division [/]" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> op;
        switch (op)
        {
            case 1:
            {
                cout << "===============================[Addition]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Addition Result : " << num1 + num2 << endl;
                break;
            }
            case 2:
            {
                cout << "===============================[Subtraction]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Subtraction Result : " << num1 - num2 << endl;
                break;
            }
            case 3:
            {
                cout << "===============================[Multiplication]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Multiplication Result : " << num1 * num2 << endl;
                break;
            }
            case 4:
            {
                cout << "===============================[Division]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                if (num2 != 0)
                {
                    cout << "Division Result : " << num1 / num2 << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            }
            default:
            {
                cout << "===============================[Invalid Option]======================================" << endl;
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (op != 0);
}

*/
// exercise exchange amount dollar to ...
/*
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int options;
    float dollar,riel,baht,won,yuan,yen,rupee,euro,peso,exchange;
    do{
        cout<<"Welcome to ours program for exchange amount"<<endl;
        cout<<"1. Dollar to Riel"<<endl;
        cout<<"2. Dollar to Baht"<<endl;
        cout<<"3. Dollar to Won"<<endl;
        cout<<"4. Dollar to Yuan"<<endl;
        cout<<"5. Dollar to Yen"<<endl;
        cout<<"6. Dollar to Rupee"<<endl;
        cout<<"7. Dollar to Euro"<<endl;
        cout<<"8. Dollar to Peso"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>options;
        switch(options){
            case 0 :{
                cout<<"================================================"<<endl;
                cout<<"             Exiting the program...             "<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 1 :{
                riel = 4000.0;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Riel."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * riel;  
                cout<<"The amount in Riel is: "<<exchange<<endl;
                cout<<"================================================"<<endl;

                break;
            }
            case 2 :{
                baht = 33.06;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Baht."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * baht;  
                cout<<"The amount in Baht is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 3 :{
                won = 1404.54;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Won."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * won;  
                cout<<"The amount in Won is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 4 :{
                yuan = 7.15;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Yuan."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * yuan;  
                cout<<"The amount in Yuan is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 5 :{
                yen = 150.18;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Yen."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * yen;  
                cout<<"The amount in Yen is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 6 :{
                rupee = 278.20;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Rupee."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * rupee;  
                cout<<"The amount in Rupee is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 7 :{
                euro = 0.94;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Euro."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * euro;  
                cout<<"The amount in Euro is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 8 :{
                peso = 57.79;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Peso."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * peso;  
                cout<<"The amount in Peso is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            default:{
                cout<<"================================================"<<endl;
                cout<<"             Invalid option. Try again.         "<<endl;
                cout<<"================================================"<<endl;
                break;
                
            }

        }

    }while(options != 0);
}



*/