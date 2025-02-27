#include <iostream>
using namespace std;
int main(){
    system("cls");
    string answer;

    cout << "Do you like to play a game? (yes/no): ";
    cin >> answer;  

    if(answer == "yes" || answer == "Yes" || answer == "YES"){
        cout << "Let's start the game!" << endl;
    }else{
        cout<<"so sad to hear about that!!"<<endl;
    }

    

    return 0;
}