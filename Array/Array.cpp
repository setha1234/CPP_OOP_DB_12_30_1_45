#include <iostream>
#include <iomanip>
using namespace std;

int code[20], qty[20],n;
string name[20];
float price[20], discount, total;
double payment,riel
;

void InputProduct() {
    cout << "Enter the number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter product code: ";
        cin >> code[i];
        cout << "Enter product name: ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter product price: ";
        cin >> price[i];
        cout << "Enter product quantity: ";
        cin >> qty[i];
        cout << endl;
    }
}

void DisplayProduct() {
    cout << "\t\t======================[Product List]=======================" << endl;
    cout << "\t\t" <<setw(12)<<"Code"
         << setw(20)<<"Name"
         << setw(12)<<"Price"
         << setw(12)<<"Quantity"
         << "|" << endl;
    cout << "\t\t==============================================" << endl;
    cout << "\t\t==============================================" << endl;
    for (int i = 0; i < n; i++) {
        if (code[i] != 0) {
            cout << "\t\t" << setw(12) << code[i]
                 << setw(20) << name[i]
                 << setw(12) << price[i]
                 << setw(12) << qty[i]
                 << "|" << endl;
        }
    }
    cout << "\t\t==============================================" << endl;
}

float TotatCost(){
    total = 0;
    for(int i = 0; i<n;i++){
        total += price[i] * qty[i];// 
    }
    return total;
}

float DiscountCost(){
    total = TotatCost();
    discount = (total > 1 && total <=100 ) ? 0.01 :
                (total > 100 && total <= 200 )? 0.02 :
                (total > 200 && total <= 300 )? 0.03 :
                (total > 300 && total <= 400) ? 0.04 :
                (total > 500 )? 0.05 :
                0;

    return total * discount;
}

float PaymentRiel(){
    total = TotatCost();
    discount = DiscountCost();
    payment = total - discount;// ?
    riel  = payment * 4000; 
    cout<<"Payment in cost riel :"<<fixed<<setprecision(2)<<riel <<" Riel "<<endl;
}

float PaymentDollar(){
    total = TotatCost();
    discount = DiscountCost();
    payment = total - discount;
    cout<<"Payment in cost dollar :"<<fixed<<setprecision(2)<<payment <<" Dollar "<<endl;
}


int main() {

    system("clear");
    int options;
    do {
        cout << "\t\t======================[Menu]===================" << endl;
        cout << "\t\t[ 1. Input Product." << endl;
        cout << "\t\t[ 2. Display Product." << endl;
        cout << "\t\t[ 3. Payment Riel." << endl;
        cout << "\t\t[ 4. Payment Dollar." << endl;
        cout << "\t\t[ 0. Exit." << endl;
        cout << "\t\t==============================================" << endl;
        cout << "\t\tChoose an option: ";
        cin >> options;

        switch (options) {
            case 1:
                // Input Product
                InputProduct();
                break;
            case 2:
                // Display Product
                DisplayProduct();
                break;
            case 3:
                PaymentRiel();
                break;
            case 4:
                PaymentDollar();
                break;
            case 0:
                cout << "\t\tExiting..." << endl;
                break;
            default:
                cout << "\t\tInvalid Option! Please try again." << endl;
                break;
        }
    } while (options != 0);

    return 0;
}
