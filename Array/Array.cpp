// #include <iostream>
// #include <iomanip>
// using namespace std;

// int code[20], qty[20],n;
// string name[20];
// float price[20], discount, total;
// double payment,riel
// ;

// void InputProduct() {
//     cout << "Enter the number of products: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter product code: ";
//         cin >> code[i];
//         cout << "Enter product name: ";
//         cin.ignore();
//         getline(cin, name[i]);
//         cout << "Enter product price: ";
//         cin >> price[i];
//         cout << "Enter product quantity: ";
//         cin >> qty[i];
//         cout << endl;
//     }
// }

// void DisplayProduct() {
//     cout << "\t\t======================[Product List]=======================" << endl;
//     cout << "\t\t" <<setw(12)<<"Code"
//          << setw(20)<<"Name"
//          << setw(12)<<"Price"
//          << setw(12)<<"Quantity"
//          << "|" << endl;
//     cout << "\t\t==============================================" << endl;
//     cout << "\t\t==============================================" << endl;
//     for (int i = 0; i < n; i++) {
//         if (code[i] != 0) {
//             cout << "\t\t" << setw(12) << code[i]
//                  << setw(20) << name[i]
//                  << setw(12) << price[i]
//                  << setw(12) << qty[i]
//                  << "|" << endl;
//         }
//     }
//     cout << "\t\t==============================================" << endl;
// }

// float TotatCost(){
//     total = 0;
//     for(int i = 0; i<n;i++){
//         total += price[i] * qty[i];// 
//     }
//     return total;
// }

// float DiscountCost(){
//     total = TotatCost();
//     discount = (total > 1 && total <=100 ) ? 0.01 :
//                 (total > 100 && total <= 200 )? 0.02 :
//                 (total > 200 && total <= 300 )? 0.03 :
//                 (total > 300 && total <= 400) ? 0.04 :
//                 (total > 500 )? 0.05 :
//                 0;

//     return total * discount;
// }

// float PaymentRiel(){
//     total = TotatCost();
//     discount = DiscountCost();
//     payment = total - discount;// ?
//     riel  = payment * 4000; 
//     cout<<"Payment in cost riel :"<<fixed<<setprecision(2)<<riel <<" Riel "<<endl;
// }

// float PaymentDollar(){
//     total = TotatCost();
//     discount = DiscountCost();
//     payment = total - discount;
//     cout<<"Payment in cost dollar :"<<fixed<<setprecision(2)<<payment <<" Dollar "<<endl;
// }


// int main() {

//     system("clear");
//     int options;
//     do {
//         cout << "\t\t======================[Menu]===================" << endl;
//         cout << "\t\t[ 1. Input Product." << endl;
//         cout << "\t\t[ 2. Display Product." << endl;
//         cout << "\t\t[ 3. Payment Riel." << endl;
//         cout << "\t\t[ 4. Payment Dollar." << endl;
//         cout << "\t\t[ 0. Exit." << endl;
//         cout << "\t\t==============================================" << endl;
//         cout << "\t\tChoose an option: ";
//         cin >> options;

//         switch (options) {
//             case 1:
//                 // Input Product
//                 InputProduct();
//                 break;
//             case 2:
//                 // Display Product
//                 DisplayProduct();
//                 break;
//             case 3:
//                 PaymentRiel();
//                 break;
//             case 4:
//                 PaymentDollar();
//                 break;
//             case 0:
//                 cout << "\t\tExiting..." << endl;
//                 break;
//             default:
//                 cout << "\t\tInvalid Option! Please try again." << endl;
//                 break;
//         }
//     } while (options != 0);

//     return 0;
// }


// Create a stock coffee
// Code Name Quantity Price

/*
1. Create a coffee stock
2. Display all coffee
3. Search for coffee by name or code
4. Update coffee details
5. Delete coffee by name or code
6. Insert / Add coffee to stock
7. Sort coffee by name or code
8. Exit
*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    // Declare variables for coffee stock
    string code[100], name[100];
    float price[100];
    int quantity[100],coffee_size,choose;
    bool check;
    do{
        cout<<"\t\t======= Welcome to coffee stock =========="<<endl;
        cout<<"\t\t[1] Create a coffee stock"<<endl;
        cout<<"\t\t[2] Display all coffee"<<endl;
        cout<<"\t\t[3] Search for coffee by name or code"<<endl;
        cout<<"\t\t[4] Update coffee details"<<endl;
        cout<<"\t\t[5] Delete coffee by name or code"<<endl;
        cout<<"\t\t[6] Insert / Add coffee to stock"<<endl;
        cout<<"\t\t[7] Sort coffee by name or code"<<endl;
        cout<<"\t\t[0] Exit"<<endl;
        cout<<"\t\t=========================================="<<endl;
        cout<<"\t\t=>Choose an option: ";cin>>choose;
        switch(choose){
            case 0 :{
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t                Thank you                 "<<endl;
                cout<<"\t\t=========================================="<<endl;
                break;
            }
            case 1 : {
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t             [Create Coffee]              "<<endl;
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t => Enter the stock size of coffee : ";cin>>coffee_size;
                for(int i=0;i<coffee_size;i++){
                    cout<<"\t\t=========================================="<<endl;
                    cout<<"\t\tEnter coffee code : ";cin>>code[i];
                    cout<<"\t\tEnter coffee name : ";cin>>name[i];
                    cout<<"\t\tEnter coffee price : ";cin>>price[i];
                    cout<<"\t\tEnter coffee quantity : ";cin>>quantity[i];
                    cout<<endl;
                    cout<<"\t\t=========================================="<<endl;
                }
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t             Create Complate              "<<endl;
                cout<<"\t\t=========================================="<<endl;
                break;
            }
            case 2 :{
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t             Display Coffee               "<<endl;
                cout<<"\t\t=========================================="<<endl;
                cout<<"\t\t"<<setw(6)<<"Code"
							<<setw(12)<<"Name"
							<<setw(12)<<"Price"
							<<setw(12)<<"Quantity"<<endl;
                for(int i=0;i<coffee_size;i++){
                    cout<<"\t\t"<<setw(6)<<code[i]
								<<setw(12)<<name[i]
								<<setw(12)<<price[i]
								<<setw(12)<<quantity[i]<<endl;
                    cout<<"\t\t=========================================="<<endl;
                }
                cout<<"\t\t=========================================="<<endl;
                break;
            }
            case 3 :{
                // statement
                check = true;
                string search_code,search_name;
                int option;
                do{
                    cout<<"\t\t=========================================="<<endl;
                    cout<<"\t\t               Search Coffee              "<<endl;
                    cout<<"\t\t=========================================="<<endl;
                    cout<<"\t\t What you want to search"<<endl;
                    cout<<"\t\t 1. Search By Code."<<endl;
                    cout<<"\t\t 2. Search By Name."<<endl;
                    cout<<"\t\t 0. Go Back to Menu."<<endl;
                    cout<<"\t\t=========================================="<<endl;
                    cout<<"\t\tChoose an option: ";cin>>option;
                    switch(option){
                        case 1 :{
                            cout<<"\t\t => Enter the code for search coffee :";cin>>search_code;
                            for (int i= 0;i<coffee_size;i++){
                                if(code[i]==search_code){
                                    cout<<"\t\t=========================================="<<endl;
                                    cout<<"\t\t               Search Found               "<<endl;
                                    cout<<"\t\t=========================================="<<endl;
                                    cout<<"\t\t"<<setw(6)<<"Code"
												<<setw(12)<<"Name"
												<<setw(12)<<"Price"
												<<setw(12)<<"Quantity"<<endl;
                                    cout<<"\t\t"<<setw(6)<<code[i]
												<<setw(12)<<name[i]
												<<setw(12)<<price[i]
												<<setw(12)<<quantity[i]<<endl;
                                    cout<<"\t\t=========================================="<<endl;
                                    check = false;
                                    break;
                                }
                            }
                            if(check){
                                cout<<"\t\tNo coffee found with this code."<<endl;
                            }
                            break;
                        }  
						case 2 : {
							cout<<"\t\t=> Enter the name coffee for search : ";cin>>search_name;
							for(int i=0;i<coffee_size;i++){
								if(name[i]==search_name){
									cout<<"\t\t=========================================="<<endl;
                                    cout<<"\t\t               Search Found               "<<endl;
                                    cout<<"\t\t=========================================="<<endl;
                                    cout<<"\t\t"<<setw(6)<<"Code"
												<<setw(12)<<"Name"
												<<setw(12)<<"Price"
												<<setw(12)<<"Quantity"<<endl;
                                    cout<<"\t\t"<<setw(6)<<code[i]
												<<setw(12)<<name[i]
												<<setw(12)<<price[i]
												<<setw(12)<<quantity[i]<<endl;
                                    cout<<"\t\t=========================================="<<endl;
                                    check = false;
                                    break;
								}
							}
							if(check){
								cout<<"\t\tCoffee no found with this name."<<endl;
							} 
							break;
						}                     
                    }                      
                }while(option != 0);

                break;
            }
            case 4 :{
            	string update_detail,New_Code,New_Name;
            	int New_Qty;
            	float New_Price;
            	cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t              Update Detail               "<<endl;
            	cout<<"\t\t=========================================="<<endl;
            	cout<<"\n\t\t => Enter id for update : ";cin>>update_detail;
            	for(int i=0;i<coffee_size;i++){
            		if(update_detail==code[i]){
            			cout<<"\n\t\tEnter New Code   :";cin>>New_Code;
            			cout<<"\t\tEnter New Name   :";cin>>New_Name;
            			cout<<"\t\tEnter New Price  :";cin>>New_Price;
            			cout<<"\t\tEnter New Qty    :";cin>>New_Qty; 
            			name[i] = New_Name;
            			code[i] = New_Code;
            			price[i]= New_Price;
            			quantity[i]=New_Qty;
            			cout<<"\t\t=========================================="<<endl;
            			cout<<"\t\t          Update Complate!!!              "<<endl;
            			cout<<"\t\t=========================================="<<endl;
            			break; 
					}
				}
				break;
			}
			case 5 : {
                // Delete
                cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t              Delete Detail               "<<endl;
            	cout<<"\t\t=========================================="<<endl;
                string delete_detail;
                cout<<"\t\t => Enter code coffee for delete : ";cin>>delete_detail;
                for(int i=0;i<coffee_size;i++){// check code in stock
                    if(code[i]==delete_detail){ // condition 
                        for(int j=i;j<coffee_size-1;j++){ 
                            code[j] = code[j+1];
                            name[j] = name[j+1];
                            price[j] = price[j+1];
                            quantity[j] = quantity[j+1];
                        }
                        coffee_size--;
                    }
                }
                cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t         Delete Successfully              "<<endl;
            	cout<<"\t\t=========================================="<<endl;


                break; 
            }
            case 6 :{
				cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t            Insert / Add Detail           "<<endl;
            	cout<<"\t\t=========================================="<<endl;
            	int add_size;
            	cout<<"\t\tEnter size coffee to add : ";cin>>add_size;
            	for(int i = coffee_size;i<coffee_size+add_size;i++){
            		cout<<"\t\t=========================================="<<endl;
            		cout<<"\t\tEnter coffee code  : ";cin>>code[i];	
					cout<<"\t\tEnter coffee name  : ";cin>>name[i];
					cout<<"\t\tEnter coffee price : ";cin>>price[i];
					cout<<"\t\tEnter coffee Qty   : ";cin>>quantity[i];	
					cout<<endl;
				}
				// Add new Size
				coffee_size += add_size;  
				cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t           Add Coffee Complate            "<<endl;
            	cout<<"\t\t=========================================="<<endl;  	
				break;
			}
            case 7 :{
            	check = false;
            	int op;
            	cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t            Sort Detail           "<<endl;
            	cout<<"\t\t=========================================="<<endl;
            	cout<<"\t\t[ 1. Sort by Id."<<endl;
            	cout<<"\t\t[ 2. Sort by Name."<<endl;
            	cout<<"\t\t[ 3. Sort by Price."<<endl;
            	cout<<"\t\t[ => Please choose option : ";cin>>op;
            	switch(op){ 
            		case 1 : {
            			for(int i=0;i<coffee_size;i++){// 1 = 12
            				for(int j=i+1;j<coffee_size;j++){ // 2 = 6
            					if(code[i]>code[j]){
            						swap(code[i],code[j]);
            						swap(name[i],name[j]);
            						swap(price[i],price[j]);
            						swap(quantity[i],quantity[j]);
            						check = true;
								}
							} 
						}
						if(!check){
							cout<<"\t\t Sort Not Success!"<<endl;
						}else{
							cout<<"\t\t Sort Complate!"<<endl;
						}	
						break;
					}
					case 2 : {
						for(int i=0;i<coffee_size;i++){// 1 = 12
            				for(int j=i+1;j<coffee_size;j++){ // 2 = 6
            					if(name[i]>name[j]){
            						swap(code[i],code[j]);
            						swap(name[i],name[j]);
            						swap(price[i],price[j]);
            						swap(quantity[i],quantity[j]);
            						check = true;
								}
							} 
						}
						if(!check){
							cout<<"\t\t Sort Not Success!"<<endl;
						}else{
							cout<<"\t\t Sort Complate!"<<endl;
						}
						break;
					}
					case 3 : {
						for(int i=0;i<coffee_size;i++){// 1 = 12
            				for(int j=i+1;j<coffee_size;j++){ // 2 = 6
            					if(price[i]>price[j]){
            						swap(code[i],code[j]);
            						swap(name[i],name[j]);
            						swap(price[i],price[j]);
            						swap(quantity[i],quantity[j]);
            						check = true;
								}
							} 
						}
						if(!check){
							cout<<"\t\t Sort Not Success!"<<endl;
						}else{
							cout<<"\t\t Sort Complate!"<<endl;
						}
						break;
					}
            		default : {
            			cout<<"\t\t Invalid Option."<<endl;
						break;
					}		
				}        	
				break;
			}
            default :{
                cout<<"\t\tInvalid option."<<endl;
                break;
            }
        }
    }while(choose != 0);
}
