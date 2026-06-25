#include <iostream>
using namespace std;

class A
{
public:
    class B
    {
    public:
        void display()
        {
            cout << "Nested class B inside class A";
        }
    };
};

int main()
{
    A::B obj;   
    obj.display();

    return 0;
}
    
