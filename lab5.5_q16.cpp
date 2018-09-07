#include<iostream>
using namespace std;

//Printing Pyramid Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Pyramid Star Pattern " << endl;
	cin>> n;
	
	for(int i=1; i<n+1; i++){

		//Printing Spaces
		for(int j=n-i; j>0; j--){
			cout<< " ";
		}

		//Printing Stars
		for(int j=1; j<2*i; j++){
			cout<< "*";
		}

		//Printing Spaces
		for(int j=n-i; j>0; j--){
			cout<< " ";
		}
	cout<<endl;
	}


return 16;
}
