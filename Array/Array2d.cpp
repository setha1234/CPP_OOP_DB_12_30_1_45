// * Syntax array 2D :
//  DataType ArrayName[SizeRow][SizeColumn];
//  Index start from 0 in computer
//
//#include<iostream>
//using namespace std;
//int main(){
//	int a[2][4];	
//	// input value to variable a by index use nest loop
//	
//	cout<<"=========Input=========\n";
//	for(int i=0;i<2;i++){
//		for(int j=0;j<4;j++){
//			cout<<"********** a ["<<j<<"]************"<<endl;
//			cout<<"Enter value a :";cin>>a[i][j];
//		}
//	}
//	
//	cout<<"=========Output=========\n";
//	// output by loop we nest loop
//	for(int i=0;i<2;i++){ 
//		cout<<"Set : "<<i<<endl;
//		for(int j=0;j<4;j++){
//			cout<<"\t a = "<<a[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//}

// * Create seat system in movie
// * Pass by value

/*
	DATATYPE FUNCTION (PARAMETER1,PARAMETER2,...){
	
    }
    
    INT MAIN(){
    	FUNCTION(AQUMENT1,AQUMENT2,...);
   }

*/


// * PASS BY ARRAY 

/*
	INT ROW[5]
	DATATYPE FUNCTION (5[ROW],ARRAY2[SIZEARRAY]{
		
	}
	INT MAIN(){
		FUNCTION(5,2,3,4,3);
    }


*/

#include<iostream>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
using namespace std;
const int ROWS=5; // const can't change value 
const int COLUMS=5;

void ViewSeat(char seat[ROWS][COLUMS]){
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMS;j++){
			// Update for set color
			if(seat[i][j]=='X'){
				cout<<RED<<seat[i][j]<<RESET;
			}else{
				cout<<GREEN<<seat[i][j]<<RESET;
			}
		}
		cout<<endl;
	}
}

void BookedSeat(char seat[ROWS][COLUMS]){
	int row,cols;
	
	cout<<"Enter row seat    : ";cin>>row;
	cout<<"Enter column seat : ";cin>>cols;
	
	if(row>=0 && row<ROWS && cols>=0 && cols<COLUMS){
		if(seat[row][cols]=='0'){
			seat[row][cols]='X';
		}else{
			cout<<"Seat is have booked!!"<<endl;
		}
	}else{
		cout<<"Invalid Seat!!"<<endl;
	}
	
}

void RemoveSeat(char seat[ROWS][COLUMS]){
	int row,column;
	cout<<"Enter row to remove : ";cin>>row;
	cout<<"Enter col to remove : ";cin>>column;
	
	if(row>=0 && row<ROWS && column>=0 && column<COLUMS){
		if(seat[row][column]=='X'){
			seat[row][column]='0';
		}else{
			cout<<"Seat is not booked"<<endl;
		}
	}else{
		cout<<"Invalid Seat"<<endl;
	}
	
}

int main(){
	
	char seat[ROWS][COLUMS];
	int op;
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMS;j++){
			seat[i][j] = '0';
		}
	}
	do{
		cout<<"*******System Movie Seat*********"<<endl;
		cout<<"1. Views Seat"<<endl;
		cout<<"2. Booked Seat"<<endl;
		cout<<"3. Remove Seat"<<endl;
		cout<<"Please Choose an option : ";cin>>op;
		switch(op){
			case 0 :{
				cout<<"*************[Thank You For use our Program]*************"<<endl;
				break;
			}
			case 1 :{
				ViewSeat(seat);
				break;
			}
		    case 2 :{
		    	BookedSeat(seat);
		    	
				break;
			}
			case 3 :{
				RemoveSeat(seat);
				break;
			}
			
			
		}
	}while(op!=0);
}




