#include<iostream>
using namespace std;

//Printing Hollow Right Triangle Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Right Triangle Star Pattern " << endl;
	cin>> n;
	
	//Printing Stars
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			//Printing stars in last row, 1st coloumn and if row no= coloumn no
			if(i==n-1 || i==j || j==0){
				cout<<"*";
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else
			}
		}
	cout<<endl;
	}
return 9;
}
