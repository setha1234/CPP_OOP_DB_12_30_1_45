// *  Controls or Condition Statements

// 1. If Statements

/*
syntax : 

    if (conditions){
        statements to be executed if the condition is true
    }

*/

// 2. If Else Statements

/*
    syntax : 

    if (condition1){
        statements to be executed if condition1 is true
    } else {
        statements to be executed if none of the above conditions are true
    }
*/

// 3. If Else IF Else Statements

/*
    syntax : 

    if (condition1){
        statements to be executed if condition1 is true
    } else if (condition2){
        statements to be executed if condition2 is true
    } else {
        statements to be executed if none of the above conditions are true
    }

*/

// 4. Switch Case Statements

/*
syntax : 

    switch (expression){
        case value1:
        statements to be executed if the expression equals value1
        break;
        case value2:
        statements to be executed if the expression equals value2
        break;
        default:
        statements to be executed if the expression does not match any case
        break;
    }

*/

// 5. Ternary Operator

/*
syntax : 

    result = (condition)? expression1 : expression2;

*/


// Example Condition Statements
// * 1 -  If Statement :

/*
#include<iostream>
using namespace std;
int main(){
    int num = 10;
    
    * If Statement
    if(num > 0){
        cout << "Number is positive" << endl;
    }

}

*/

// * 2 -  If Else Statement :

/*
#include<iostream>
using namespace std;
int main(){
    int num = 10;
    
    * If Else Statement
    if(num > 0){
        cout << "Number is positive" << endl;
    } else { 
        cout << "Number is negative" << endl;
    }
}

*/ 

// * 3 -  If Else If Else Statement :

/*
#include<iostream>
using namespace std;
int main(){
    int num = 10;
    
    * If Else If Else Statement
    if(num > 0){
        cout << "Number is positive" << endl;
    } else if(num < 0){
        cout << "Number is negative" << endl;
    } else {
        cout << "Number is zero" << endl;
    }
    return 0;
}

*/


// * 4 - Switch Case Statement

/*
#include<iostream>
using namespace std;
int main(){
    int op;
    
    cout << "Enter the for select [1-3]: ";
    cin >> op;
    
    * Switch Case Statement
    switch(num){
    case 1:q
        cout << "You are select 1" << endl;
    break;
    case 2:
        cout << "You are select 2" << endl;
    break;
    case 3:
        cout << "You are select 3" << endl;
    break;
    default:
        cout << "We are have option only [1-3].Please try again." << endl;
    break;

    }
    return 0;
}

*/

// * 5 - Ternary Operator

/*

#include<iostream>
using namespace std;
int main(){
    system ("cls");
    // ternary 
    // dollars -> riel
    // riel -> dollars

    int op,rate,amount,exchange;
    string op2;

    cout<<"1 . Dollar to Riel "<<endl;
    cout<<"2 . Riel to Dollar "<<endl;
    cout<<"Choose an option : ";
    cin>>op;

    op2 = (op == 1) ? "Dollar to Riel is " :
                (op == 2) ?  "Riel to Dollar is " :
                "Invalid Option!";

    cout<<"Amount to exchange : ";
    cin>>exchange;
    

    rate = 4000;
    
    amount = (op == 1)? exchange * rate :
            (op == 2)? exchange / rate :
            0;
    
    cout<<op2<<endl;
    cout<<"You want to exchange :"<<exchange<<endl;
    cout<<"Amount for exchange :"<<amount<<"$";                


    return 0;
}
*/

// * Exercise 

// 1. Write a program for user input and the check is odd or even

/*
#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    return 0;
}
*/

// * 2. Write a program for user select option for operation 

/*
options:
Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)
Exit (0)
*/

/*
#include<iostream>
using namespace std;
int main(){
    int num1, num2, result;
    char operation;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Enter an operator (+, -, *, /, 0 to exit): ";
    cin >> operation;
    
    switch(operation){
    case '+':
        result = num1 + num2;
    break;
    case '-':
        result = num1 - num2;
    break;
    case '*':
        result = num1 * num2;
    break;
    case '/':
        if(num2 != 0){
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero" << endl;
        return 0;
        }
    break;
    case '0':
        cout << "Exiting..." << endl;
    return 0;
    default:
        cout << "Invalid operator" << endl;
    return 0;

    }
    
    cout << "Result: " << result << endl;
    return 0;

}
    
*/

