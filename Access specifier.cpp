#include<iostream>
using namespace std;
class bank account {
private:
double balance;
public:
Bank account (double initialbalance){
balance=initialbalance;
}
double getbalance() {
return balance;
}
};
int main () {
bankaccount account (1000.0);
return0;
}
