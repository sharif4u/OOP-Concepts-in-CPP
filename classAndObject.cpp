//class and objects
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int id;
    string course;

    void Introduce(){
        cout << " Name of Student :" << name << endl;
        cout << " ID of Student :" << id << endl;
        cout << " Course of Student :" << course << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Sharif";
    s1.id = 18;
    s1.course = "OOP Concepts";
    s1.Introduce();
    return 0;
}
