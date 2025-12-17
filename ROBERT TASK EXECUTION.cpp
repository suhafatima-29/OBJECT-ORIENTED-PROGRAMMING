#include <iostream>
using namespace std;

class Robot {
public:
    virtual void performTask() = 0;  
    virtual ~Robot() {}             
};

class CleaningRobot : public Robot {
public:
    void performTask() {
        cout << "CleaningRobot: Sweeping and mopping the area." << endl;
    }
};

class SecurityRobot : public Robot {
public:
    void performTask() {
        cout << "SecurityRobot: Monitoring and patrolling the premises." << endl;
    }
};

class DeliveryRobot : public Robot {
public:
    void performTask() {
        cout << "DeliveryRobot: Delivering packages to assigned locations." << endl;
    }
};

int main() {
    Robot* robots[3];

    robots[0] = new CleaningRobot();
    robots[1] = new SecurityRobot();
    robots[2] = new DeliveryRobot();

    cout << "Robotic Task Execution:\n";
    for (int i = 0; i < 3; i++) {
        robots[i]->performTask();  
    }

    for (int i = 0; i < 3; i++) {
        delete robots[i];
    }

    return 0;
}

