// Description: Write a C++ Program to calculate the Area and Perimeter of a Rectangle
//Solution:

#include <iostream>
using namespace std;

int main(){
    // declaration of variables
    double width, height, area, perimeter;
    // Getting the inputs fromn the user
    cout<<" Enter the Rectangle Length: "<<endl;
    cin>>height;
      cout<<" Enter the Rectangle Width: "<<endl;
    cin>>width;
  
    // Process
    area=height * width;
    perimeter=2*(height + width);
    // Output
    cout<<"The Area of the rectangle is : "<<area<<endl;
    cout<<"The Perimeter of the rectangle is : "<<perimeter<<endl; 
	system("pause");
	return 0; } 
