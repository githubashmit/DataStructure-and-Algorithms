#include<iostream>
using namespace std;

int main() {
    int totalAttendees;
    cin >> totalAttendees;

    // Calculate number of attendees on each day
    int day1 = totalAttendees / 4;
    int day2 = day1 * 2;
    int day3 = day1;

    // Print the results
    cout << "Number of attendees on day 1: " << day1 << endl;
    cout << "Number of attendees on day 2: " << day2 << endl;
    cout << "Number of attendees on day 3: " << day3 << endl;

    return 0;
}