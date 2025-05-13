#include <iostream>
#include "AttendanceManager.cpp"
using namespace std;

int main() {
    AttendanceManager manager;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Mark Attendance\n3. View All Attendance\n4. View Individual Attendance\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: manager.addStudent(); break;
            case 2: manager.markAttendance(); break;
            case 3: manager.viewAttendance(); break;
            case 4: manager.viewIndividualAttendance(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
