#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
};

int main() {
    Time t;
    t.hours = 10;
    t.minutes = 30;

    cout << "Time: " << t.hours << ":" << t.minutes << endl;

    return 0;
}