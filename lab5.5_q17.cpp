#include<iostream>
using namespace std;

//Printing Hollow Pyramid Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Pyramid Star Pattern " << endl;
	cin>> n;

	//Printing the Star Structure
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n-1; j++){

			//Condition to find the Row and Column number where we want Stars
			//Stars in last row and other required places 
			if(i==n-1  || i+n-1==j || i+j==n-1){
				cout<<"*";	//Printing Stars where required
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else	
			}
		}
	cout<<endl;
	}
	
	return 17;
}
