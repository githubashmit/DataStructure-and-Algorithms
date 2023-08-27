#include <iostream>
using namespace std;

int main() {
    int totalTickets = 50;
    int collectedTickets = 0;
    int ticketNumber = 35;

    while (collectedTickets < totalTickets) {

        if (ticketNumber <= 0 || ticketNumber > totalTickets) {
            cout << "Invalid ticket number!" << endl;
            continue;
        }

        collectedTickets++;
    }

    cout << "All tickets have been collected.";

    return 0;
}