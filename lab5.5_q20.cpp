#include<iostream>
using namespace std;

int main(){

//Printing Half Diamond Star Pattern
int n;
cout<<"Enter Required size of half Diamond Star Patter " << endl;
cin>>n;

	//Printing Upper Half
	for(int i=0; i<n; i++){			//For Rows
		for(int j=0; j<=i; j++){	//For Columns
			cout<<"*";
		}
	cout << endl;
	}

	//Printing Lower Half
	for(int i=0; i<n; i++){			//For Rows
		for (int j=n; j>i; j--){	//For Columns
			cout<<"*";
		}
	cout<<endl;
	}
return 20;
}
