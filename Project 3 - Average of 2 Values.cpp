#include <iostream>

using namespace std;

int main() {
	// DECLARATION OF VARIABLES AND CONSTANTS
	double value1, value2, average;
	
	// GETTING INPUTS FROM USER
	cout<<"Please enter the first value: ";
	cin>>value1;
	cout<<"Please enter the second value: ";
	cin>>value2;
	
	// PROCESS
	average=(value1 + value2)/2;
	
	// OUTPUT
	cout<<"The average of your two values is: "<<average<<endl;
	system("pause");
	return 0;
}
