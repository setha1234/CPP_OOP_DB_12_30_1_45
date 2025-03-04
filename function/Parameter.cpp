#include<iostream>
using namespace std;


// float Sum(float a, float b){
//     float result;
//     result = a + b;
//     cout<<"Result : " <<result<<endl;
// }

// int main(){

//     Sum(10,2.5);


//     return 0;
// }

// create a program for store item
int id,quantity;
string name;
float price,tax,dis,pay,total;

void StockItem(string Proname,int ProId,int ProQuantity,float ProPrice){
    name = Proname;
    id = ProId;
    quantity = ProQuantity;
    price = ProPrice;

    total = price * quantity;
    tax = total * 0.05;
    dis =   ( total > 1 && total <=100) ? 0.1 :
            ( total > 100 && total <= 200)? 0.2 :
            ( total > 200 && total <= 300)? 0.3 : 
            ( total > 300 && total <= 400)? 0.4 :
            ( total > 400 ) ? 0.5 :
            0;
    pay = total + tax - (total * dis)/100;

}


void DisplayItem(){
   
    cout<<"=============================[Stock Item]=================================="<<endl;
    cout<<"Name\tID\tPrice\tQuantity\tDiscount\tTotal\tTax\tPayment"<<endl; // message for header
    cout<<name<<"\t"<<id<<"\t"<<price<<"\t"<<quantity<<"\t\t"<<dis<<"%\t\t"<<total<<"\t"<<tax<<"\t"<<pay<<endl; // 
    cout<<"=============================[Stock Item]=================================="<<endl;

}


int main(){
    system("cls");
    int Id;
    string Name;
    float Price,Quantity;
    cout<<"Enter the code item:";
    cin>>Id;
    cout<<"Enter the name item:";
    cin>>Name;
    cout<<"Enter the price item:";
    cin>>Price;
    cout<<"Enter the quantity item:";
    cin>>Quantity;
    StockItem(Name,Id,Quantity,Price);
    DisplayItem();

    return 0;
}







