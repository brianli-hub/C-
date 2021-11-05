#include <iostream>

using namespace std;

int main() {
	// DECLARATION OF VARIABLES AND CONSTANTS
	double temp1, temp2, temp3, averageTemp;
	
	// GETTING INPUTS FROM USER
	cout<<"Please enter the temperature found in the Math department: ";
	cin>>temp1;
	cout<<"Please enter the temperature found in the English department: ";
	cin>>temp2;
	cout<<"Please enter the temperature found in the IT department: ";
	cin>>temp3;
	
	// PROCESS
	averageTemp=(temp1+temp2+temp3)/(3);
	
	// OUTPUT
	if(averageTemp<17){
		cout<<"The average temperature is: "<<averageTemp<<endl;
		cout<<"Heating should be turned on"<<endl;
	}else{
		cout<<"The average temperature is: "<<averageTemp<<endl;
		cout<<"Heating should be turned off"<<endl;
}
	system("pause");
	return 0;
}
