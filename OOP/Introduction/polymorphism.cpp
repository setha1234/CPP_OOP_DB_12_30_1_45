// #include <iostream>
// using namespace std;
// class A{
//     public : 
//         void CreateA(){
//             cout<<"This is a"<<endl;
//         }
// };

// class B:public A{
//     public :
//     // override
//         void CreateA(){
//             cout<<"This is B"<<endl;
//         }

// };
// int main(){
//     B b;
//     b.CreateA();
//     return 0;
// }




#include <iostream>
using namespace std;
// template<typename T>
template<class f>
class Area{
    private: 
        f a,b;
    public : 
        void InputArea(){
            cout<<"Enter value a : ";cin>>a;
            cout<<"Enter value b : ";cin>>b;
        }
        f result(){
            return a*b;
        }
        f getA(){
            return a;
        }
        f getB(){
            return b;
        }
        
        void Display(){
            cout<<"Result : "<<result()<<endl;
            
        }
};
int main()
{
    Area<float> area;
    area.InputArea();
    // cout<<"Area = "<<area.result();
    area.Display();

}