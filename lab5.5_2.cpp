#include<iostream>
using namespace std;

int main() {

	//Print Hollow Square Star Pattern
	//Ask user for Required size of square
	int n;
	cout << "What is size of the Hollow square star pattern that you want?"<<endl;
	cin >> n;
		//Printing Rows
		for(int i=0; i<n; i++){
			//Print stars for 1st and last row
			if(i==0 || i==n-1){
				for(int j=0; j<n; j++){
					cout<<"*";
				}
			cout<<endl;
			}
			//Printing for intermediate rows
			else{
				for(int j=0; j<n; j++){
					if(j==0 || j==n-1){
						cout<<"*";
					}
					else{
						cout<<" ";
					}
				}
			cout<<endl;
			}
			
		}
return 2;
}

