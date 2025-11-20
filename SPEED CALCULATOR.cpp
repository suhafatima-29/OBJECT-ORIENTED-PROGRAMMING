#include <iostream>
using namespace std;

class Speed {
private:
    float distance, time;

public:
    Speed(float d, float t) {
        distance = d;
        time = t;
    }
    
    float calculateSpeed() {
        return distance / time;
    }

    void display() {
        cout << "Distance: " << distance << " km" << endl;
        cout << "Time: " << time << " hours" << endl;
        cout << "Speed = " << calculateSpeed() << " km/hr" << endl;
    }
};

int main() {
    float d, t;

    cout << "Enter distance (km): ";
    cin >> d;

    cout << "Enter time (hours): ";
    cin >> t;

    Speed S(d, t);
    S.display();

    return 0;
}

