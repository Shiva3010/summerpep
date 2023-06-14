/*
    Operator overloading
    the operator overloaded to provide special meaning to the user defined datatypes

    synatax : return_type operator symbol (arguments)

    types of overloading
    1. unary
        only one operand
    2. binary
        two operands
    
    non overloadable operators
    dot





*/

#include <iostream>
using namespace std;

class Marks
{
    public:
    int intmarks;
    int extmarks;

    marks()
    {
        intmarks = 0;
        extmarks = 0;
    }

    marks (int in, int em)
    {
        intmarks = in;
        extmarks = em;
    }

    void dis()
    {
        cout << intmarks << endl;
        cout << extmarks << endl;
    }

    Marks operator + (Marks m)
    {
        temp.intmarks = intmarks + m.intmarks;
        temp.extmarks = extmarks + m.extmarks;

        return temp;
    }
};

int main()
{   
    Marks m1 (10,20), m2(30,40);
    Marks m3 = m1 + m2;
    m3.dis();
    return 0;
}