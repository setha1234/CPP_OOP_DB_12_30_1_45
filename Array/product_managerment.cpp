/*
    Create a program product managerment for store phone
    code/id
    name
    price
    quantity

    switch case with loop
    1. Create a product.
    2. Display all products.
    3. Search for products.(search id,name)
    4. Update a product.
    5. Delete a product.(delete by id, name)
    6. insert a product.
    7. Sort product. (sort by id,by name)
    8. Exit.


*/

#include<iostream>
#include<iomanip>
using namespace std;
int code[100],quantity[100],n;
string name[100];
float price[100];

void InputStoreManager(){
    // code, name, price, quantity
    int i = 0;
    cout<<"\t\t========================[Input Product]============================="<<endl;
    cout<<"\t\tEnter Size for Store Prodcuct :";cin>>n;
    while(i<n){
        cout<<"\t\t================================================================"<<endl;
        cout<<"\t\tEnter Product Code : ";cin>>code[i];
        cout<<"\t\tEnter Product Name : ";cin.ignore();getline(cin,name[i]);
        cout<<"\t\tEnter Product Price : ";cin>>price[i];
        cout<<"\t\tEnter Product Quantity : ";cin>>quantity[i];
        i++;
    }
}

void DisplayStoreManager(){
    int i = 0;
    cout<< "\t\t===========================[DisplayStoreManager]==========================="<<endl;
    cout<<"\t\t"<<setw(12)<<"Code"<<setw(12)<<"Name"<<setw(12)<<"Price"<<setw(12)<<"Quantity"<<endl;// Message Header
    while(i<n){
        cout<<"\t\t"<<setw(12)<<code[i]<<setw(12)<<name[i]<<setw(12)<<price[i]<<setw(12)<<quantity[i]<<endl; // Data
        i++;
    }
}

int main(){
    int options;
    do{
        cout << "\t\t======================[Product Managerment]=======================" << endl;
        cout << "\t\t[ 1. Create a product." << endl;
        cout << "\t\t[ 2. Display all products." << endl;
        cout << "\t\t[ 3. Search for products." << endl;
        cout << "\t\t[ 4. Update a product." << endl;
        cout << "\t\t[ 5. Delete a product." << endl;
        cout << "\t\t[ 6. Insert a product." << endl;
        cout << "\t\t[ 7. Sort product." << endl;
        cout << "\t\t[ 0. Exit." << endl;
        cout << "\t\t====================================================================" << endl;
        cout << "\t\tChoose an option: ";
        cin >> options;
        switch(options){
            case 0 : {
                cout<<"\t\t=========================[Byebye]========================="<<endl;
                break;
            }
            case 1 :{
                InputStoreManager();
                break;
            }
            case 2 :{
                DisplayStoreManager();
                break;
            }
        }


    }while(options != 0);

    return 0;
}