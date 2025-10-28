#include <iostream>
#include <vector>
using namespace std;

int main() {
 int amount{0};
 vector<int>  change;
 cout<<"Enter an amount in cents : ";
 cin>>amount;
 change.push_back(amount/100);//0
  amount = amount - change.at(0)*100;
 change.push_back(amount/25);//1
  amount=amount - change.at(1)*25;
 change.push_back(amount/10);//2
  amount=amount - change.at(2)*10;
 change.push_back(amount/5);//3
  amount=amount - change.at(3)*5;
 change.push_back(amount/1);//4
 cout<<"Dollars : "<<change.at(0)<<endl;
 cout<<"Quarters : "<<change.at(1)<<endl;
 cout<<"Dimes : "<<change.at(2)<<endl;
 cout<<"Nickels : "<<change.at(3)<<endl;
 cout<<"Pennies : "<<change.at(4)<<endl;


}