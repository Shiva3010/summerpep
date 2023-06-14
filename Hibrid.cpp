#inlcude <iostream>
using namespace std;

class vehicle {
    public:
    void apply_brake()
    {
        cout << "Apply brake" << endl;
    }
    void speed_up()
    {
        cout << "Speed up" << endl;
    }
};

class car : public vehicle
{
    public:
    void open_door()
    {
        cout << "Open door" << endl;
    }
};

class Fare : public vehicle
{
    public:
    void pay_fare()
    {
        cout << "Pay fare" << endl;
    }
};

class Bus : public vehicle, public Fare {
    public:
    void open_door()
    {
        cout << "Open door" << endl;
    }
    void pay_fare()
    {
        cout << "Pay fare" << endl;
    }
};

int main()
{
    Bus bus;
    bus.apply_brake();
    bus.speed_up();
    bus.open_door();
    bus.pay_fare();

    return 0;
}