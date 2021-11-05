#include <iostream>

using namespace std;

int main() {
	// declaration of variables and constants
	double price, quantity, subtotal, tax, totalCost;
	const double taxRate = .0875;
	
	// getting the inputs from the user
	cout<<"Enter the price of the item: "<<endl;
	cin>>price;
	cout<<"Enter the quantity of the item: "<<endl;
	cin>>quantity;
	
	// process
	subtotal=(price*quantity);
	tax=(price*quantity*taxRate);	
	totalCost=(subtotal+tax);
	
	// output
	cout<<"The total cost is: "<<totalCost<<endl;
	system("pause");
	return 0;
}
