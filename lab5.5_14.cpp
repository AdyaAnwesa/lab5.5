#include<iostream>
using namespace std;

int main() {

	//Print Inverted Mirror Right Triangle Star Pattern
	//Ask user for Required size Triangle
	int n,j;
	cout << "What is size of the Inverted Mirror Right Triangle star pattern that you want?"<<endl;
	cin >> n;
		//Printing Rows
		for(int i=n; i>0; i--){

			//Printing Columns
			//Print Spaces
			for(j=i; j<n; j++){
				cout<<" ";
			}
			//Print Stars
			for(j=0; j<i; j++){
				cout<<"*";
			}
			
			cout<<endl;
		}
return 14;
}

