/*
* Function :
        1. Non-Return Function
            - Non-Return with non-parameter
            - Non-Return with parameter
        2. Return Function
            - Return with non-parameter
            - Return with parameter


* Syntax 1 :

 *  Declare function at the top int main
    void Hello(){
        // code
    }

    int main(){
        Hello();
    }
        
* Syntax 2 :
    
 *  Declare function top int main
    void Hello(); 

    int main(){
        Hello();
    }
 *  And then calling the function to using the function at the top int main 
    void Hello(){
        cout << "Hello World!";
    }
        
* Syntax 3 :

    int main(){
    * Declare Function in int main
        void Hello(){
            cout << "Hello World!";
        }

        Hello();
    }

* How to Declare Function?

*   1. Non-Return Function with Non-parameter
        void Hello(){
            cout << "Hello World!";
        }
            
*   2. Non-Return Function with Parameter
        void Hello(string name){
            cout << "Hello " << name;
        }
            
*   3. Return Function with Non-parameter
        int Add(){
            int a = 10;
            int b = 20;
            return a + b;
        }
            
*   4. Return Function with Parameter
        int Add(int a, int b){
            return a + b;
        }

*/

// Example Function :
/*
*   1.Non-Return
#include<iostream>
using namespace std;

// Non-Return Function with Non-parameter
void Hello(){
    cout << "Hello World!";
}
int main(){
    Hello();
}

// Non-Return Function with Parameter

#include<iostream>
using namespace std;

void Hello(string name){
    cout << "Hello " << name;
}
int main(){
    Hello("Rahul");
}

 * 2. Return Function


// Return Function with Non-parameter

#include<iostream>
using namespace std;

int Add(){
    int a = 10;
    int b = 20;
    return a + b;
}
int main(){
    cout << Add();
}

// Return Function with Parameter

#include<iostream>
using namespace std;

int Add(int a, int b){
    return a + b;

}
int main(){
    cout << Add(10, 20);
}

*/

// Exercise Function :


/* 
    Create a program for store item
    - id
    - name
    - price
    - quantity
    - tax
    - discount
    - payment
    - total
*/	

#include<iostream>
using namespace std;
// global variables
int id,quantity;
string name;
float price,tax,discount,payment,total;

// function to store item

void StockItem(){

    cout<<"Enter Code of Item : ";
    cin>>id;
    cout<<"Enter Name of Item : ";	
    cin>>name;
    cout<<"Enter Price of Item : ";
    cin>>price;
    cout<<"Enter Quantity of Item : ";
    cin>>quantity;

}

// function to calculate total cost of item

float CalTotal(){
    return  price * quantity;
}

// function to calculate tax

float CalTax(){
    return total * 0.05;
}

// function to calculate discount

float CalDiscount(){

    total = CalTotal();
    
    discount =  (total > 1 && total <= 100) ? 0.1 : // 10% = 10 / 100
                (total > 100 && total <= 200) ? 0.2 : 
                (total > 200 && total <= 300) ? 0.3 : 
                (total > 300 && total <= 400) ? 0.4 :
                (total > 500 ) ? 0.5 :    
                0; 
    return total * discount; 
}

// function to calculate payment

float CalPayment(){
    total = CalTotal();
    tax = CalTax();
    discount = CalDiscount();
    return total + tax - discount;
}

// fuction to display item

void DisplayItem(){
    cout<<"==========================[Display]=================================="<<endl;
    cout<<"Code\tName\tPrice\tQuantity\tTotal\tTax\tDiscount\tPayment"<<endl; 
    cout<<id<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t\t"<<CalTotal()<<"\t"<<CalTax()<<"\t"<<CalDiscount()<<"\t\t"<<CalPayment()<<endl;
    cout<<"==========================[End]======================================"<<endl;
}


int main(){
    system("cls");
    int option;
    do{
        cout<<"==============================[Start]================================"<<endl;
        cout<<"1. Stock Item"<<endl;
        cout<<"2. Display Item"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Choose an option : ";
        cin>>option;
        switch(option){
            case 1 : {
                StockItem();
                break;
            }
            case 2 : {
                DisplayItem();
                break;
            }
            case 0 : {
                cout<<"Exiting..."<<endl;
                break;
            }
        }

    }while(option != 0);


    return 0;
}

