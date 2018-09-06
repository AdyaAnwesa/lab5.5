#include<iostream>
using namespace std;

int main() {

	//Print Inverted Right Triangle Star Pattern
	//Ask user for Required size Triangle
	int n;
	cout << "What is size of the Inverted Right Triangle star pattern that you want?"<<endl;
	cin >> n;
		//Printing Rows
		for(int i=0; i<n; i++){
			//Printing Columns
			for(int j=n; j>i; j--){
			cout<<"*";
			}
		cout<<endl;
		}
return 12;
}

