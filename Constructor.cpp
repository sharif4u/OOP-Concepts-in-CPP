//Constructor
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int id;
        string course;

        Student(string n, int i, string c){
            name = n;
            id = i;
            course = c;
        }

        void introduce(){
            cout << "Name of student: " << name << endl;
            cout << "Name of id: " << id << endl;
            cout << "Name of course: " << course << endl;
        }
};

int main(){

    /*Student s2;
    s2.name = "JOY";
    s2.id = 14;
    s2.course = "OOP";
    s2.introduce();*/
    Student s2 = Student("Sharif",5,"CSE");
    s2.introduce();
    Student s3 = Student("Joy",6,"CS");
    s3.introduce();
    return 0;
}
