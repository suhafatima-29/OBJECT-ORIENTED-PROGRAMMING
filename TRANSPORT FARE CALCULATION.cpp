#include <iostream>
using namespace std;

class Transport {
public:
    virtual float fare(int distance) = 0;   
    virtual ~Transport() {}                
};

class Bus : public Transport {
public:
    float fare(int distance) {
        return distance * 2.0;
    }
};

class Train : public Transport {
public:
    float fare(int distance) {
        return (distance * 1.5) + 20;
    }
};


class Flight : public Transport {
public:
    float fare(int distance) {
        return (distance * 6.0) + 500;
    }
};

int main() {
    Transport* t;
    int choice, distance;

    cout << "Select Transport Mode:\n";
    cout << "1. Bus\n";
    cout << "2. Train\n";
    cout << "3. Flight\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter distance (in km): ";
    cin >> distance;

    if (choice == 1)
        t = new Bus();
    else if (choice == 2)
        t = new Train();
    else if (choice == 3)
        t = new Flight();
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Total Fare = Rs " << t->fare(distance) << endl;

    delete t; 
    return 0;
}

