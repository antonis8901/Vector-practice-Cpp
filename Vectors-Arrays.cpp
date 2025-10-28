#include <iostream>
#include <vector>
using namespace std;
int main() {
    int small_rooms,big_rooms,total;
    int test_score [5] {100,99,98,97,96};
    vector <int> test1{100,90,80};
    float tax_total;
    const float small_charge=25,big_charge=35,tax=0.06;
    cout<<"Welcome to the service!"<<endl;
    cout<<test1.at(0)<<endl;
    cout<<test1.at(1)<<endl;
    cout<<test1.at(2)<<endl;
    //test1.push_back(70);
    //cout<<test1.at(3)<<endl;
    cout<<endl;
    cout<<"How many small rooms do you want cleaned?";
    cin>>small_rooms;
    cout<<"How many big ones?";
    cin>>big_rooms;
    cout<<"Total of small rooms : "<<small_rooms<<endl;
    cout<<"Total of big rooms : "<<big_rooms<<endl;
    cout<<"Price per small room : "<<small_charge<<endl;
    cout<<"Price per big room : "<<big_charge<<endl;
    total=(small_rooms*small_charge)+(big_rooms*big_charge);
    cout<<"Total cost is : "<<total<<endl;
    tax_total=total*tax;
    cout<<"Tax is : "<<tax_total<<endl;
    return 0;


}
