#include <iostream>
using namespace std;

int main() {
double score=0.0, sum=0.0, highest=0.0, lowest=0.0;
int counter=0;

cout<<"Enter the student's score: "<<endl;
cin>>score;

highest=score;
lowest=score;

while(score!=-1){
  sum=sum+score;
  counter=counter+1;
  cout<<"Enter the student's score or -1 to stop: "<<endl;
  cin>>score;
  if(score>highest)
  highest=score;
  if((score<lowest) && (score!=-1))
  lowest=score;
}

cout<<"The number of students' scores entered: "<<counter<<endl;
cout<<"The sum of the students' scores: "<<sum<<endl;
cout<<"The average of the students' scores: "<<sum/counter<<endl;
cout<<"The highest of the students' scores: "<<highest<<endl;
cout<<"The lowest of the students' scores: "<<lowest<<endl;

system("pause");
return 0;
}
