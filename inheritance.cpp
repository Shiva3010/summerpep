#include <iostream>
using namespace std;

// class Base 
// {
//     public:
//     int a = 10;
// };

// class Derived : public Base
// {
//     public:
//     int b = 20;
// };

// int main()
// {
//     Derived D;
//     cout<< D.a<<endl;
//     cout<< D.b<<endl;
//     return 0;
// }

// class Whatapp1
// {
//     public :
//     void chat()
//     {
//         cout<<"Chatting"<<endl;
//     }
// };

// class Whatapp2 : public Whatapp1
// {
//     public : 
//     void calling ()
//     {
//         cout << "Voice Calling"<<endl;
//     }
// };

// class Whatapp3 : public Whatapp2
// {
//     public :
//     void status ()
//     {
//         cout << "Status"<<endl;
//     }
// };

// int main()
// {
//     Whatapp3 WA;
//     WA. calling();
//     WA.chat();
//     WA.status();

//     return 0;
// }

class Insta {
    public:
    void username ()
    {
        cout << "UserName" << endl;
    }
};

class Insta1 : public Insta {
    public:
    void password(){
    cout << "Password" << endl;
    }
};

class Insta2 : public Insta {
    public: 
    void story () {
    cout << "Story and posts"<<endl;
    }
};

int main ()
{
    Insta2 gram;
    gram.story();
    // gram.password();
    gram.username();
    return 0;

}