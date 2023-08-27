#include <iostream>
using namespace std;

int main() {
    int total_attendees;
    cin >> total_attendees;

    int day1 = total_attendees / 4;         // x / 4
    int day2 = day1 * 2;                    // 2x / 4
    int day3 = day1 / 2;                    // x / 8

    cout << "Number of attendees on day 1: " << day1 << endl;
    cout << "Number of attendees on day 2: " << day2 << endl;
    cout << "Number of attendees on day 3: " << day3 << endl;

    return 0;
}