#include <iostream>
using namespace std;

class Person
{
    public:
    void talk()
    {
        cout << "talk" << endl;
    }
    void sleep()
    {
        cout << "sleep" << endl;
    }
};

class Trainer : public Person
{
    public:
    void teach()
    {
        cout << "teach" << endl;
    }
};

class Devloper : public Person
{
    public:
    void code()
    {
        cout << "code" << endl;
    }
};

class Player : public Person
{
    public:
    void play()
    {
        cout << "play" << endl;
    }
};



int main()
{
    
    Trainer t;
    Devloper d;
    Player p;
    
    cout<<"This is for trainer"<<endl;
    t.talk();
    t.sleep();
    t.teach();
    
    cout <<"This is for developer"<<endl;
    d.talk();
    d.sleep();
    d.code();

    cout <<"This is for player"<<endl;
    p.talk();
    p.sleep();
    p.play();

    return 0;
}