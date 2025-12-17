#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual float maintenanceCost() = 0;  
    virtual ~Vehicle() {}                
};

class Car : public Vehicle {
    float serviceCost, partsCost;
public:
    Car(float s, float p) {
        serviceCost = s;
        partsCost = p;
    }

    float maintenanceCost() {
        return serviceCost + partsCost;
    }
};

class Bike : public Vehicle {
    float serviceCost;
public:
    Bike(float s) {
        serviceCost = s;
    }

    float maintenanceCost() {
        return serviceCost;
    }
};

class Truck : public Vehicle {
    float serviceCost, partsCost, laborCost;
public:
    Truck(float s, float p, float l) {
        serviceCost = s;
        partsCost = p;
        laborCost = l;
    }

    float maintenanceCost() {
        return serviceCost + partsCost + laborCost;
    }
};

int main() {
    Vehicle* v;
    int choice;

    cout << "Select Vehicle Type:\n";
    cout << "1. Car\n";
    cout << "2. Bike\n";
    cout << "3. Truck\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        float s, p;
        cout << "Enter service cost and parts cost: ";
        cin >> s >> p;
        v = new Car(s, p);
    }
    else if (choice == 2) {
        float s;
        cout << "Enter service cost: ";
        cin >> s;
        v = new Bike(s);
    }
    else if (choice == 3) {
        float s, p, l;
        cout << "Enter service cost, parts cost, and labor cost: ";
        cin >> s >> p >> l;
        v = new Truck(s, p, l);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Total Maintenance Cost = Rs " << v->maintenanceCost() << endl;

    delete v;   
    return 0;
}

