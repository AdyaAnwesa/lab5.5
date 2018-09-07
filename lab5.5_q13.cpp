#include<iostream>
using namespace std;

//Printing Hollow Inverted Right Triangle Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Inverted Right Triangle Star Pattern " << endl;
	cin>> n;
	
	//Printing Stars
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			//Printing stars only in 1st row, 1st coloumn and if row no=column no
			if(i==0 || i+j==n-1 || j==0){
				cout<<"*";
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else
			}
		}
	cout<<endl;
	}
return 13;
}
