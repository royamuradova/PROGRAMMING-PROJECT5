#include <iostream>
using namespace std;

int main() {
    int startPopulation;    // Variable to store the starting population size
    double dailyIncrease;   // Variable to store the average daily population increase as a percentage
    int days;               // Variable to store the number of days the population will multiply

    // Input validation for starting population
    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startPopulation;
    } while (startPopulation < 2);  // Ensures the starting population is at least 2

    // Input validation for daily increase percentage
    do {
        cout << "Enter the average daily population increase (as a percentage, must be positive): ";
        cin >> dailyIncrease;
    } while (dailyIncrease < 0);  // Ensures the daily increase percentage is non-negative

    // Input validation for number of days
    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> days;
    } while (days < 1);  // Ensures the number of days is at least 1

    // Display the population size for each day
    cout << "Day 1: " << startPopulation << endl;  // Initial population on Day 1
    for (int i = 2; i <= days; i++) {  // Loop starts from Day 2 to the specified number of days
        // Calculate new population by increasing it by the specified daily percentage
        startPopulation += startPopulation * (dailyIncrease / 100.0);
        cout << "Day " << i << ": " << startPopulation << endl;  // Display population for each day
    }

    return 0;  // Program ends
}