#include <iostream>
#include <math.h>

using namespace std;

int main() {
	// DECLARATION OF VARIABLES AND CONSTANTS
	double position, time;
	const double acceleration = 9.81;
	
	// GETTING INPUTS FROM THE USER
	cout<<"Enter the position: "<<endl;
	cin>>position;
	
	// PROCESS
	time=sqrt(position/(.5*acceleration));
	
	// OUTPUT
	cout<<"The time it will take the object to fall from the given position is (neglecting air friction): "<<time<<endl;
	system("pause");
	return 0;
}
