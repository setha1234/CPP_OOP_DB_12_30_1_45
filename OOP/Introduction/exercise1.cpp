#include<iostream>
#include<iomanip>
using namespace std;
class Book{
    private : 
        // date member
        int book_id[10],book_qty[10],choose,size_lib,issued[10],qty_issued,n,issued_qty[10];
        string book_title[10],author_name[10],search_item,issued_book,tel[10],username[10],datetime[10],title_issued[10];
        bool check;
    public : 
        Book(){   
            for(int i=0;i<10;i++){
                book_id[i] = 0;
                book_qty[i] = 0;
                book_title[i] = "Null";
                author_name[i] = "Null";
                issued[i]     = 0;
            }
            
        }
        void Create_Book(){
            cout<<"Enter size of books for store in library : ";
            cin>>size_lib;
            cin.ignore();
            if(size_lib>0 && size_lib < 10){
                for(int i=0;i<size_lib;i++){
                    cout<<"Book #"<<i+1<<endl;
                    cout<<"Enter Book Title : ";getline(cin,book_title[i]);
                    cout<<"Enter Book ID    : ";cin>>book_id[i];
                    cout<<"Enter Book Qty   : ";cin>>book_qty[i];
                    cout<<"Enter Book Author: ";cin.ignore();getline(cin,author_name[i]);
                    cout<<"==========[Input Complate Book # "<<i+1<<"]=============\n"<<endl;
                }
            }else{  
                cout<<"Sorry I can't store the books.becuase i can store only 10."<<endl;
            }
        }

        void Display_Book(){
            cout<<"ID"<<setw(20)<<"Title"<<setw(20)<<"Quantity"<<setw(20)<<"Author"<<setw(10)<<"Issued"<<endl;
            for(int i=0;i<size_lib;i++){
                cout<<book_id[i]<<setw(20)<<book_title[i]<<setw(20)<<book_qty[i]<<setw(20)<<author_name[i]<<setw(10)<<issued[i]<<endl;
            }
        }
        void Search_Book(){
            check = false;
            cout<<"Enter the title book for search : ";cin>>search_item;
            for(int i=0;i<size_lib;i++){
                if(book_title[i]==search_item){
                    cout<<"ID    : "<<book_id[i]<<endl;
                    cout<<"Title : "<<book_title[i]<<endl;
                    cout<<"Author : "<<author_name[i]<<endl;
                    cout<<"Quantity : "<<book_qty[i]<<endl;
                    check = true;
                    break;
                }
            }
            if(check == false){
                cout<<"Can not found it!!!"<<endl;
            }
        }
        void Issued_Book(){
            cout<<"Enter the title for issued : ";cin>>issued_book;
            for(int i=0;i<size_lib;i++){
                if(issued_book==book_title[i]){// check title of book
                    cout<<"Found it!!"<<endl;
                    cout<<"What you want to borrow book? => ";cin>>qty_issued;
                    if(qty_issued > book_qty[i]){
                        cout<<"Can not borrow it.beacuse we have only : "<<book_qty[i]<<endl;
                    }else{
                        cout<<"You can borrow it."<<endl;
                        issued[i]+=qty_issued;
                        cout<<"Enter cumstomer borrow book : ";cin>>n;
                        cin.ignore();
                        for(int j=0;j<n;j++){
                            cout<<"Enter Username  : ";getline(cin,username[j]);
                            cout<<"Enter Tel       : ";getline(cin,tel[j]);
                            cout<<"Enter Date Time : ";getline(cin,datetime[j]);
                            issued_qty[j]=issued[i];
                            title_issued[j] = book_title[i];
                        }
                    }

                }
            }
        }
        void Menu(){
            do{
                cout<<"================================================"<<endl;
                cout<<"| 1. Create Books.                              "<<endl;
                cout<<"| 2. Display all Books.                         "<<endl;
                cout<<"| 3. Search Book.                               "<<endl;
                cout<<"| 4. Issued Book.                               "<<endl;
                cout<<"| 5. Return Book.                               "<<endl;
                cout<<"| 6. Diplay Customer for issued                 "<<endl;
                cout<<"| 0. Exit.                                      "<<endl;
                cout<<"================================================"<<endl;
                cout<<"| => Please enter your choosing : ";cin>>choose;
                switch(choose){
                    case 1 : {
                        cout<<"================================================"<<endl;
                        cout<<"                    Create Book                 "<<endl;
                        cout<<"================================================"<<endl;
                        Create_Book();
                        break;
                    }
                    case 2 : {
                        cout<<"================================================"<<endl;
                        cout<<"                   Display Book                 "<<endl;
                        cout<<"================================================"<<endl;
                        Display_Book();
                        break;
                    }
                    case 3 : {
                        cout<<"================================================"<<endl;
                        cout<<"                  Search Book                   "<<endl;
                        cout<<"================================================"<<endl;
                        Search_Book();
                        break;
                    }
                    case 4 : {
                        cout<<"================================================"<<endl;
                        cout<<"                  Issued Book                   "<<endl;
                        cout<<"================================================"<<endl;
                        Issued_Book();
                        break;
                    }
                    case 6 : {
                        cout<<"================================================"<<endl;
                        cout<<"                 Display Customer               "<<endl;
                        cout<<"================================================"<<endl;
                        cout<<"Username"<<setw(16)<<"Tel"<<setw(12)<<"Date Time"<<setw(12)<<"Title"<<setw(12)<<"Issued"<<endl;
                        for(int i=0;i<n;i++){
                            cout<<username[i]<<setw(16)<<tel[i]<<setw(12)<<datetime[i]<<setw(12)<<title_issued~[i]<<setw(12)<<issued_qty[i]<<endl;
                            cout<<"================================================"<<endl;
                        }
                        break;
                    }
                }
            }while(choose !=0);

        }


};
int main(){
    system("clear");
    Book book;
    book.Menu();

    return 0;
}