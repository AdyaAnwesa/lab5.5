#include<iostream>
using namespace std;

//Printing Hollow Inverted Pyramid Star Patter

int main(){
	int n;
	cout<<"Enter your Required size of Hollow Inverted Pyramid Star Pattern " << endl;
	cin>> n;

	//Printing the Star Structure
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n; j++){

			//Condition to find the Row and Column number where we want Stars
			//Stars in 1st row and when row no=column no and other required spots
			if(i==0 || i==j || i+j==2*n-2){
				cout<<"*";	//Printing Stars where required
			}
			else{
				cout<<" ";	//Printing Spaces everywhere else	
			}
		}
	cout<<endl;
	}
	
	return 19;
}
