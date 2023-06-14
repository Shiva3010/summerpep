#include <iostream>
using namespace std;

// class garndpa{
//     public:
//     int a = 10;
// };
// class son : public garndpa
// {
//     public:
//     int b = 20;
// };

// class grandson : public son
// {
//     public:
//     int c = 30;
// };
// int main()
// {   
//     grandson g;
//     cout<<g.a<<endl;
//     cout<<g.b<<endl;
//     cout<<g.c<<endl;

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class student 
{
    public:
    int roll_no;
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void get_roll_no()
    {
        cout<<"The roll number is "<<roll_no<<endl;
    }
};
class Test : public student
{
    public:
    float maths, physics;
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout<<"The marks obtained in maths are "<<maths<<endl;
        cout<<"The marks obtained in physics are "<<physics<<endl;
    }
};
class Result : public Test
{
    public:
    float percentage;
    void display()
    {
        get_roll_no();
        get_marks();
        cout<<"Your percentage is "<<(maths + physics)/2<<"%"<<endl;
    }
};

int main()
{
    Result r;
    r.set_roll_no(420);
    r.set_marks(94.0, 90.0);
    r.display();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////