#include <iostream>
using namespace std;

int main() {
    int n; // Number of stops
    cin >> n;

    int currentPassengers = 0, maxCapacity = 0;

    for (int i = 0; i < n; i++) {
        int ai, bi; // ai: passengers exiting, bi: passengers entering
        cin >> ai >> bi;

        // Update the number of passengers inside the tram
        currentPassengers -= ai;
        currentPassengers += bi;

        // Update the maximum capacity needed
        maxCapacity = max(maxCapacity, currentPassengers);
    }

    cout << maxCapacity << endl; // Output the result
    return 0;
}