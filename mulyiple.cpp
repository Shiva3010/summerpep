#include <iostream>
using namespace std;

// class Base1 
// {
//     public:
//     void base1()
//     {
//         cout << "Base1" << endl;
//     }
// };

// class Base2
// {
//     public:
//     void base2()
//     {
//         cout << "Base2" << endl;
//     }
// };

// class Derived : public Base1, public Base2
// {
//     public:
//     void derived()
//     {
//         cout << "Derived" << endl;
//     }
// };

// int main()
// {
//     Derived d;
//     d.base1();
//     d.base2();
//     d.derived();
//     return 0;
// }

class student {
    protected:
    int roll,m1,m2;
    public:
    void getdata(){
        cout << "Enter the roll number: ";
        cin >> roll;
        cout << "Enter the marks of m1: ";
        cin >> m1;
        cout << "Enter the marks of m2: ";
        cin >> m2;
    }
};
class Extracurriculum
{
    protected:
    int marks;
    public:
    void getdata(){
        cout << "Enter the marks: ";
        cin >> marks;
    }
};


int main()
{
    student s;
    Extracurriculum e;
    s.getdata();
    e.getdata();
    return 0;
}