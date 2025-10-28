#include <iostream>
#include <vector>
using namespace std;
double calc_cost(double base_cost,double tax_rate=0.06);
double calc_cost(double base_cost,double tax_rate) {
    return base_cost+=(base_cost*tax_rate);
}
int main() {
    double cost{0};
    cost=calc_cost(200.0);
    cout<<cost<<endl;
    cost=calc_cost(100.0,0.08);
    cout<<cost<<endl;
    return 0;
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Position one is :"<<vector1.at(0)<<" Position two is : "<<vector1.at(1)<<" Total size :"<<vector1.size()<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"Position one is :"<<vector2.at(0)<<" Position two is : "<<vector2.at(1)<<" Total size :"<<vector2.size()<<endl;
    vector<vector<int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    cout<<vector2D.at(0).at(0)<<vector2D.at(0).at(1)<<endl;
    cout<<vector2D.at(1).at(0)<<vector2D.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<vector2D.at(0).at(0)<<vector2D.at(0).at(1)<<endl;
    cout<<vector2D.at(1).at(0)<<vector2D.at(1).at(1)<<endl;
    cout<<"Position one is :"<<vector1.at(0)<<" Position two is : "<<vector1.at(1)<<" Total size :"<<vector1.size()<<endl;


}