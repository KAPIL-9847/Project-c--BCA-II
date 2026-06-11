#include<iostream>
using namespace std;
class Circle{
private:
//Data members
float rad;
public:
//Member function
void getradius(){
cout<<"Enter Radius"<<endl;
cin>>rad;}
void calc_area() {
float a;
a=3.14*rad*rad;
cout<<"The Area of the circle is="<<a<<endl;}
};
int main(){
circle c;
c.getradius();
c.calc_area();
return 0;
