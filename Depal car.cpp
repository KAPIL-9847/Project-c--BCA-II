// Header files for basic input/output operations
#include <iostream>
#include <string> // Added string header to handle text data like brand and battery model
using namespace std;

// Defined an 'EVCar' class to bundle electric vehicle data and behaviors together
class EVCar {
private:
    // Data Members (Attributes tracking specific EV statistics, hidden from outside access)
    string brand;          // Added to store the EV manufacturer (e.g., Tesla, BYD)
    string model;          // Added to store the specific EV model (e.g., Model 3, Seal)
    float batteryCapacity; // Added to store total battery pack capacity in kWh
    float energyConsumption;// Added to store efficiency rate (Wh per Kilometer)

public:
    // Prototypes of member functions declared cleanly inside the class
    void getEVDetails();   // Declared to match structural logic of outside definition
    void calcEVRange();    // Declared to match structural logic of outside definition
};

// Member function definition outside the class using Scope Resolution Operator (::)
void EVCar::getEVDetails() {
    cout << "Enter EV Brand: ";
    cin >> brand;          // Takes the EV brand input
    
    cout << "Enter EV Model: ";
    cin >> model;          // Takes the EV model input
    
    cout << "Enter Battery Pack Capacity (in kWh): ";
    cin >> batteryCapacity;// Takes the total battery capacity input
    
    cout << "Enter Energy Consumption Rate (Wh/KM): ";
    cin >> energyConsumption; // Takes the energy usage rate per KM input
    cout << "--------------------------------------" << endl;
}

// Member function definition outside the class using Scope Resolution Operator (::)
void EVCar::calcEVRange() {
    float totalRange;
    // Formula conversion: (Capacity in kWh * 1000) to get Wh, then divide by Wh/KM rate
    totalRange = (batteryCapacity * 1000.0) / energyConsumption;
    
    // Displaying the final processed electric vehicle metrics
    cout << "--- EV Status Report ---" << endl;
    cout << "Electric Vehicle: " << brand << " " << model << endl;
    cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    cout << "Estimated Full Charge Range: " << totalRange << " Kilometers" << endl;
}

int main() {
    // Created an object 'myEV' of class 'EVCar'
    EVCar myEV;
    
    // Called the outside-defined member functions step-by-step
    myEV.getEVDetails();
    myEV.calcEVRange();
    
    return 0; // Standard exit signal for C++ programs
}
