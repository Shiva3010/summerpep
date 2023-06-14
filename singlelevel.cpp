#include <iostream>
using namespace std;

class Shape 
{
    protected:
    int width, height;
    public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Rectangle : public Shape
{
    public:
    int area()
    {
        return (width * height);
    }
};

int main ()
{
    Rectangle rect;
    rect.set_values(5, 7);
    cout << "Area: " << rect.area() << endl;
    return 0;
}