#include<iostream>
using namespace std;

//Printing Hollow Diamond Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Diamond Star Pattern " << endl;
	cin>> n;

	//Printing Upper Half	
	for(int i=0; i<n; i++){

		//Printing Stars
		for(int j=0; j<n-i; j++){
			cout<<"*";
		}

		//Printing Spaces
		for(int j=0; j<2*i; j++){
			cout<<" ";
		}

		//Printing Stars
		for(int j=0; j<n-i; j++){
			cout<<"*";
		}
	cout<<endl;
	}

	//Printing Lower Half
	for(int i=n; i>0; i--){

		//Printing Stars
		for(int j=0; j<=n-i; j++){
			cout<<"*";
		}

		//Printing Spaces
		for(int j=0; j<2*(i-1); j++){
			cout<<" ";
		}

		//Printing Stars
		for(int j=0; j<=n-i; j++){
			cout<<"*";
		}
	cout<<endl;
	}
return 23;
}
