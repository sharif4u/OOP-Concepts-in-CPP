//polymorphism
//function overloading
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    void marks(int a){
        cout << "Score is: " << a << endl;
    }
    void marks(double b){
        cout << "Score is: " << b << endl;
    }
    void marks(){
        cout << "None" << endl;
    }
};

int main(){
    Student s1;
    s1.marks(10);
    s1.marks(94.2);
    s1.marks();
    return 0;
}
