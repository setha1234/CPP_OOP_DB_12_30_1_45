#include<iostream>
using namespace std;
class Book{
    private : 
        // date member
        int book_id[10],book_qty[10],choose,size_lib;
        string book_title[10],author_name[10];
    public : 
        void Create_Book(){
            cout<<"Enter size of books for store in library : ";
            cin>>size_lib;
            if(size_lib>0 && size_lib < 10){
                for(int i=0;i<size_lib;i++){
                    cout<<"Book #"<<i+1<<endl;
                    cout<<"Enter Book Title : ";cin.ignore();getline(cin,book_title[i]);
                    cout<<"Enter Book ID    : ";cin>>book_id[i];
                    cout<<"Enter Book Qty   : ";cin>>book_qty[i];
                    cout<<"Enter Book Author: ";cin.ignore();getline(cin,author_name[i]);
                    cout<<"==========[Input Complate Book # "<<i+1<<"]=============\n"<<endl;
                }
            }else{  
                cout<<"Sorry I can't store the books.becuase i can store only 10."<<endl;
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