#include<iostream>
using namespace std;

//Printing Hollow Mirrored Right Triangle Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Mirrored Right Triangle Star Pattern " << endl;
	cin>> n;
	
	//Printing Stars
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			//Printing stars only in last row, last coloumn and in other required places
			if(i==n-1 || i+j==n-1 || j==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else
			}
		}
	cout<<endl;
	}
return 11;
}
