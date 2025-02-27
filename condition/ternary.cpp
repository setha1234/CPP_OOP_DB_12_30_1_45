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