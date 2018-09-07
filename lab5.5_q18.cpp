#include<iostream>
using namespace std;

//Printing Inverted Pyramid Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Inverted Pyramid Star Pattern " << endl;
	cin>> n;

	for(int i=0; i<n; i++){

		//Printing Spaces
		for(int j=0; j<=i; j++){
			cout<< " ";
		}

		//Printing Stars
		for(int j=0; j<(4+n-(2*i)); j++){
			cout<< "*";
		}

		//Printing Spaces
		for(int j=0; j<=i; j++){
			cout<< " ";
		}
	cout<<endl;
	}
return 18;
}
