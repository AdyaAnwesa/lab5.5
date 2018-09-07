#include<iostream>
using namespace std;

//Printing Hollow Inverted Mirror Right Triangle Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Inverted Mirror Right Triangle Star Pattern " << endl;
	cin>> n;
	
	//Printing Stars
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			//Printing stars only in 1st row or when row no equals column no or last coloumn
			if(i==0 || i==j || j==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else
			}
		}
	cout<<endl;
	}
return 15;
}
