/* 
    Polymorphism
    All the object to behave diffrently in different condtions.
    Two types are :
    1) Compile time static binding

        A. Function overloading
            1. By changing numbers of arguments.
            2. By having different types of arguments.

            example : int add (int a, int b);
                      int add (int a, int b, int c);

        B. Operator overloading



    2) Run time     dynamic binding
    
        A. Function overriding (usinf virtual function)
*/

#include <iostream>
using namespace std;

// void add(int a, int b)
// {
//     cout << "First add" << endl;
// }

// void add(double x, double y)
// {
//     cout << "second add" << endl;
// }

// int main()
// {
//     add(1,2);
//     add(11.3,4.5);
//     cout << "This is overloading"<<endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// int sum (int x, int y)
// {
//     cout << x+y << endl;
//     return 0;
// }

// int sum (int a, int b, int c)
// {
//     cout<< a+b+c << endl;
//     return 0;
// }
// double sum (double x, double y)
// {
//     cout << x+y << endl;
//     return 0;
// }

// int main()
// {
//     sum (10,20);
//     sum (10,20);
//     sum (10.5,20.5);
//     return 0;
// }

// class constructor 
// {
//     public:
//     float area;
//     constructor()
//     {
//         cout << "0-arg constructor" << endl;
//     }
//     constructor(int a, int b)
//     {
//         cout << "2-arg constructor" << endl;
//         area = a*b;
//     }

//     void display()
//     {
//         cout << "area: " << area << endl;
//     }
// };

// int main()
// {
//     constructor o;
//     o.display();
//     constructor o2;
//     o2.display();
//     return 1;
// }
