#include <iostream>
using namespace std;

class Circle {
private:
    float rad;

public:
    void getradius();
    void calc_area();
};

void Circle::getradius() {
    cout << "Enter Radius" << endl;
    cin >> rad;
}

void Circle::calc_area() {
    float a;
    a = 3.14 * rad * rad;
    cout << "The Area of the circle is = " << a << endl;
}

int main() {
    Circle c;
    c.getradius();
    c.calc_area();

    return 0;
}
