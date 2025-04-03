// #include<iostream>
// using namespace std;
// int main(){
//     system("cls");
//     // * Pointer is a variable to point to another variable
//     // [*] Pointer

//     // int a =10; // Value of a variable
//     // int *ptr; // Pointer to variable
//     // ptr = &a; // ptr is point to address of variable

//     // cout<<"Value of a = "<<a<<endl; // Value of variable a 
//     // cout<<"Address of a = "<<&a<<endl;// Address of variable a 
//     // cout<<"Value of ptr = "<<ptr<<endl;// Value of Variable ptr
//     // cout<<"Address of ptr = "<<&ptr<<endl;// Address of Variable ptr
//     // cout<<"Value of *ptr = "<<*ptr<<endl; // Value of Variable ptr;

//     // int a = 10; 
//     // int b = 20;

//     // int *ptr1,*ptr2;
//     // ptr1 = &a;
//     // ptr2 = &b;

//     // cout<<"a + b = "<<*ptr1+*ptr2<<endl;
//     // cout<<"a - b = "<<*ptr1-*ptr2<<endl;
//     // cout<<"a * b = "<<*ptr1 * *ptr2<<endl;
//     // cout<<"a / b = "<<*ptr1 / *ptr2<<endl;
//     // cout<<"a % b = "<<*ptr1 % *ptr2<<endl;


//     // * Create a program in c++ for calculate area and primeter of Rectangle by pointer and input value by user
//     // * Declare variables for length and width of rectangle
//     // * Declare pointers for length and width
//     // * Calculate area and primeter using pointers
//     float width, height;
//     float *ptrWidth, *ptrHeight;
//     cout<<"Enter length of rectangle: ";
//     cin>>width;
//     cout<<"Enter width of rectangle: ";
//     cin>>height;
//     // * Calculate  of rectangle
//     ptrWidth = &width;
//     ptrHeight = &height;
//     cout<<"Area of Rectangle      = "<< (*ptrWidth) * (*ptrHeight)<<endl;
//     cout<<"Perimeter of Rectangle = "<<((*ptrWidth)+(*ptrHeight)) * 2  <<endl;



//     return 0;
// }


    // * Create a program in c++ for calculate area and primeter of Rectangle by pointer and input value by user using function
    // * Declare variables for length and width of rectangle
    // * Declare pointers for length and width
    // * Calculate area and primeter using pointers
#include<iostream>

using namespace std;

void calculateRectangle(float *ptrWidth, float *ptrHeight, float *area, float *perimeter){
    *area = *ptrWidth * *ptrHeight;
    *perimeter = 2 * (*ptrWidth + *ptrHeight);
}

int main(){
    float width, height;
    float area, perimeter;
    cout<<"Enter length of rectangle: ";
    cin>>width;
    cout<<"Enter width of rectangle: ";
    cin>>height;
    // * Calculate  of rectangle
    float *ptrWidth = &width;
    float *ptrHeight = &height;
    float *ptrArea = &area;
    float *ptrPerimeter = &perimeter;
    calculateRectangle(ptrWidth, ptrHeight, ptrArea, ptrPerimeter);
    cout<<"Area of Rectangle      = "<< area<<endl;
    cout<<"Perimeter of Rectangle = "<< perimeter  <<endl;
    return 0;
}
