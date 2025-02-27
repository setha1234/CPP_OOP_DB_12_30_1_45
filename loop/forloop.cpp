#include <iostream>
using namespace std;
int main()
{
    system("cls");
    // for (int i=1; i<=10;i++){
    //     cout<<i<<"/ Hello world!"<<endl;
    // }

    // int i=10;

    // for (;i>=0;){
    //     cout<<i<<"/ Hello world!"<<endl;
    //     i--;
    // }

    // int a;

    // while(a!=0){
    //     cout<<"Enter a number (0 to exit): ";
    //     cin>>a;
    // }

    // int input,a=0;

    // cout<<"Enter a number: ";
    // cin>>input;

    // while(a<=input){
    //     cout<<a<<"/ hello world!"<<endl;
    //     a++;
    // }

    // string answer;
    // cout<<"Do you want to go out with me?[y/n]";
    // cin>>answer;
    // while(answer != "y" && answer != "Y"){
    //     cout<<"Do you want to go out with me?[y/n]";
    //     cin>>answer;
    // }
    // cout<<"Let's go!to out side."<<endl;

    // string answer;
    // do{
    //     cout<<"Do you want to go out with me?[y/n]";
    //     cin>>answer;
    // }while(answer!="y");
    // cout<<"Let's go! to out side."<<endl;
    int op;
    float riel, baht, won, yen, yuan, euro, exchange, dollar;
    do
    {
        cout << "===============================[ Option Menu ]====================================" << endl;
        cout << "[    1. Exchange Dollar to Riel." << endl;
        cout << "[    2. Exchange Dollar to Baht." << endl;
        cout << "[    3. Exchange Dollar to Won." << endl;
        cout << "[    4. Exchange Dollar to Yen." << endl;
        cout << "[    5. Exchange Dollar to Yuan." << endl;
        cout << "[    6. Exchange Dollar to Euro." << endl;
        cout << "[    0. Exit." << endl;
        cout << "=>   Choose an option : ";
        cin >> op;
        cout << "===============================[ Option ]====================================" << endl;

        switch (op)
        {
        case 1:
        {
            riel = 4000;
            cout << "You want to exchange Dollar to Riel." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * riel;
            cout << "Amount for exchange : " << exchange << " Riel" << endl;

            break;
        }
        case 2:
        {
            baht = 33.06;
            cout << "You want to exchange Dollar to Baht." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * baht;
            cout << "Amount for exchange : " << exchange << " Baht" << endl;

            break;
        }
        case 3:
        {
            won = 1404.54;
            cout << "You want to exchange Dollar to Won." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * won;
            cout << "Amount for exchange : " << exchange << " Won" << endl;

            break;
        }
        case 4:
        {
            yen = 150.18;
            cout << "You want to exchange Dollar to Yen." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * yen;
            cout << "Amount for exchange : " << exchange << " Yen" << endl;

            break;
        }
        case 5:
        {
            yuan = 7.15;
            cout << "You want to exchange Dollar to Yuan." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * yuan;
            cout << "Amount for exchange : " << exchange << " Yuan" << endl;

            break;
        }
        case 6:
        {
            euro = 0.94;
            cout << "You want to exchange Dollar to Euro." << endl;
            cout << "Please input amount for exchange : ";
            cin >> dollar;
            exchange = dollar * euro;
            cout << "Amount for exchange : " << exchange << " Euro" << endl;

            break;
        }
        case 0:
        {
            cout << "Exit Program." << endl;
            break;
        }
        default:
        {
            cout << "Invalid Option. Please try again." << endl;

            break;
        }
        }

    } while (op != 0);

    return 0;
}