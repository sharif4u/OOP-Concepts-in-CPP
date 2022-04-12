//Access Modifiers
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int marks1;
        void marks(){
            cout << "Score is: " << marks1 << endl;
        }
    private:
        //int marks2;
    protected:
        int marks3;

};

int main(){
    Student s1;
    s1.marks1 = 67;
    //s1.marks2 = 98; marks 2 is private so, I cant call it
    s1.marks();
    //s1.marks3; marks 2 is protected so, I cant call it
    return 0;
}
