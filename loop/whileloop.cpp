#include <iostream>
using namespace std;
int main()
{
    string answer;
    cout << "Do you like to go outside? (yes/no): ";
    cin >> answer;
    while(answer == "NO" || answer == "no" || answer == "No"){
        cout << "Please answer 'yes' to go outside: ";
        cin >> answer;
    }
    cout << "Let's go outside!" << endl;


    return 0;
}