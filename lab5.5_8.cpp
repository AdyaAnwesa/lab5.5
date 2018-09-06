#include<iostream>
using namespace std;

int main() {

	//Print Right Triangle Star Pattern
	//Ask user for Required size Triangle
	int n;
	cout << "What is size of the Right Triangle star pattern that you want?"<<endl;
	cin >> n;
		//Printing Rows
		for(int i=0; i<n; i++){
			//Printing Columns
			for(int j=0; j<i+1; j++){
			cout<<"*";
			}
		cout<<endl;
		}
return 8;
}

