#include <iostream>
using namespace std;

int main() {
double hours=0.0, rate=0.0, grossPay=0.0;
char answer;

while(answer!='n'){
  cout<<"Enter the employee's hours: "<<endl;
  cin>>hours;
  cout<<"Enter the employee's rate: "<<endl;
  cin>>rate;

  if(hours<=40){
  grossPay=hours*rate; 
  }else{
  grossPay=(40*rate)+(hours-40)*(1.5*rate);
  }
  cout<<"The grosspay of the employee is: "<<grossPay<<endl;
  cout<<"Do you wish to continue (y/n): "<<endl;
  cin>>answer;
  }
system("pause");
return 0;
}
