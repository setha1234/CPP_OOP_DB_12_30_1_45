
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
    StockItem();
    DisplayItem();

    return 0;
}

