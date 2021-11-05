#include <iostream>

using namespace std;

int main() {
	// DECLARATION OF VARIABLES AND CONSTANTS
	double price, subtotal, total, discount;
	int quantity;
	
	// GETTING INPUTS FROM USER
	cout<<"Please enter the item's price: ";
	cin>>price;
	cout<<"Please enter the quantity of the item: ";
	cin>>quantity;
	
	// PROCESS
	subtotal=price*quantity;
	
	// SELECTION STRUCTURE
	if(quantity>=10){
		if(quantity>20){
			discount=subtotal*0.2;
			total=subtotal-discount;
		}else{
			discount=subtotal*0.1;
			total=subtotal-discount;
		}
	}else{
		discount=subtotal*0.0;
		total=subtotal-discount;
	}
	
	// OUTPUT
	cout<<"The total before discount is: "<<subtotal<<endl;
	cout<<"The discounted amount is: "<<discount<<endl;
	cout<<"The total after discount is: "<<total<<endl;
	system("pause");
	return 0;
}
