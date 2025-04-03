#include<iostream>
#include<string> // handing file to use with string 
#include<algorithm>
using namespace std;
int main(){
    system("cls");
    // char greeting[] = "Hello, Guy!";
    // // normal calling
    // cout<<greeting<<endl;
    // // calling by index
    // cout<<greeting[7]<<endl;
    // // change value in index 7
    // greeting[7] = 'H';
    // cout<<greeting<<endl;
    // // output by loop    
    // for(int i=0;i<10;i++){
    //     cout<<greeting[i]<<endl;
    // }
    // string : is text/character
    string greeting = "Hello, I am Setha.";

    cout<<greeting<<endl;
    // replace is used for change value in variable
    cout<<greeting.replace(12,5,"Kaka")<<endl;
    // length is used for count value in variable
    cout<<greeting.length()<<endl;

    string extra = "How it going!";
    greeting += extra; // value1 += value2 : value1 = value1+value2 
    cout<<greeting<<endl;
    // check null 
    string str = "";
    cout<<"Check Empty : "<<((str.empty() )? "true" : "false")<<endl;

    string str2 = "Hwlodf 234245";
    cout<<str.capacity()<<endl;

    string str3 = "PApa";
    cout<<str3.at(str3.length() -4)<<endl;
    // add value
    greeting.append(str3);
    cout<<greeting<<endl;
    // insert to value
    greeting.insert(7, "Hi");
    cout<<greeting<<endl;
    // remove
    greeting.erase(7,2);
    cout<<greeting<<endl;


    greeting.substr(0, 8);
    cout<<greeting<<endl;

    size_t pos =  greeting.find("Hello");
    cout<<pos<<endl;
    reverse(greeting.begin(), greeting.end());
    cout<<greeting<<endl;
}   