#include <iostream>
#include <fstream>
#include <string>
#include <limits> // For maximum and minimum values
using namespace std;

int main() {
    cout << "test" << endl; // Added line to print 'test'

    // Open the file to read student names
    ifstream inputFile("LineUp.txt");

    cout << "Attempting to open LineUp.txt" << endl; // Debugging output

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    string name;
    string firstStudent = ""; // Store the alphabetically first student
    string lastStudent = "";  // Store the alphabetically last student
    int studentCount = 0;     // Counter for number of students

    // Loop through each name in the file
    while (inputFile >> name) {
        studentCount++; // Increment the student count for each name

        // If it's the first student, initialize firstStudent and lastStudent
        if (studentCount == 1) {
            firstStudent = name;
            lastStudent = name;
        } else {
            // Update the first student if the current name is alphabetically smaller
            if (name < firstStudent) {
                firstStudent = name;
            }

            // Update the last student if the current name is alphabetically larger
            if (name > lastStudent) {
                lastStudent = name;
            }
        }
    }

    // Close the file
    inputFile.close();

    // Check if any students were read from the file
    if (studentCount == 0) {
        cout << "No students found in the file." << endl;
    } else {
        // Output the results
        cout << "Number of students: " << studentCount << endl;
        cout << "Student at the front of the line: " << firstStudent << endl;
        cout << "Student at the end of the line: " << lastStudent << endl;
    }

    return 0;
}