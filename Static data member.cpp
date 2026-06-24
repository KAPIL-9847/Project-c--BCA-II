#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;   // Static data member

public:
    Student(string n) {
        name = n;
        count++;
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    static void totalStudents() {
        cout << "Total Students = " << count << endl;
    }
};

// Initialize static data member
int Student::count = 0;

int main() {
    Student s1("Ram");
    Student s2("Sita");
    Student s3("Hari");
S.  Student s4("kapil");
    Student s5("sachin");

    s1.display();
    s2.display();
    s3.display();
s4. s4.display();
    s5.display();

    Student::totalStudents();

    return 0;
}
