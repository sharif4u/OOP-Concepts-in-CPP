//Abstractions
#include<bits/stdc++.h>
using namespace std;
class abstracStudent{
    virtual void scolarship() = 0;
};

class Student : abstracStudent{
public:
    string name;
    int marks;
    string course;
    void scolarship(){
        if(marks > 70){
            cout << "Scolarship has been given to " << name << endl;
        }else{
            cout << "Deny" << endl;
        }
    }
};

int main(){

    Student s1;
    s1.name = "Sharif";
    s1.marks = 66;
    s1.scolarship();
    return 0;
}
