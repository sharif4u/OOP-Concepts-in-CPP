//Inheritance
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    //int marks = 90;
    void study(){
        cout << "Student are studing..." << endl;
    }
};
class Sharif:public Student{ // single inheritance
public:
    //int marksdeteced = 5;
    void play(){
        cout << "Sharif is playing...." <<endl;
    }
};

int main(){
    Sharif s1;
    s1.play();
    s1.study();
    //cout << "Marks of Sharif is: " << s1.marks << endl;
    //cout << "Marks of Sharif is: " << s1.marksdeteced << endl;
    return 0;
}
