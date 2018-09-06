#include<iostream>
using namespace std;

int main() {

	//Print Square Star Pattern
	//Ask user for Required size of square
	int n;
	cout << "What is size of the square star pattern that you want?"<< endl;
	cin >> n;

	//Print stars in Rows 
	for(int i=0; i<n; i++){
	
		//Print Stars in Columns
		for(int j=0; j<n; j++){
			cout << "*";
		}

	cout << endl;
	}
return 1;
}

