// *  DataType Array[block][Row][column];
// Example : 
#include<iostream>
using namespace std;
int main(){
	int arr[2][3][4];
	// Input Arr	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<4;k++){
				cout<<"Enter value arr ["<<k<<"] :";cin>>arr[i][j][k];
			}
		}
	}
    //	Output 
	for(int i=0;i<2;i++){// Block 2
		cout<<"Block  : "<<i<<endl;
		for (int j=0;j<3;j++){// Row 6
			cout<<"Row : "<<j<<"\t\t";
			for(int k=0;k<4;k++){// Column 24
				cout<<arr[i][j][k]<<'\t';
			}
			cout<<endl;
		}	
		cout<<endl;
	}
	return 0;
}			 