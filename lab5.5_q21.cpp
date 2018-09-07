#include<iostream>
using namespace std;

int main(){

//Printing Mirrored Half Diamond Star Pattern
int n;
cout<<"Enter Required size of mirrored half Diamond Star Patter " << endl;
cin>>n;
	//Printing Upper Half
	for(int i=0; i<n; i++){
		//Printing Spaces
		for (int j=n; j>i+1; j--){
			cout<<" ";
		}
		//Printing Stars
		for(int k=0; k<=i; k++){
			cout<<"*";
		}
	cout<<endl;
	}

	//Printing Lower Half
	for(int i=0; i<n; i++){
		//Printing Spaces
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		//Printing Stars
		for(int k=n; k>i; k--){
			cout<<"*";
		}
	cout << endl;
	}

	
return 21;
}
