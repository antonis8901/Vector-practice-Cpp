#include <iostream>
#include <vector>
using namespace std;

class ID {
private:
    int id{0};
public:
    //ID();
    ID(int id_local)//Constructor
        :id(id_local) {
        cout << "Constructor" << endl;
    }
    ~ID() {//Destructor
        cout<<"Object eliminated"<<endl;
    }
    int get_id(int number) {
        cout<<"ID is : "<<id<<endl;
        return id;
    }

};
int main() {
    int id{0};
    vector<ID> ids;//vector
    while (true) {//loop
        if (id==1) {//exit
            break;
        }
        cout << "Please enter an ID" << endl;
        cin >> id;
        ID new_id(id);//pass id in the new Class Object
        ids.push_back(new_id);//pass the id in the vector slot
    }
    cout<<"Information of all IDs : "<<endl;
    for (size_t i=0;i<ids.size();++i) {
        ids[i].get_id(i+1);
    }
    //cout<<ids.size()<<endl;


}