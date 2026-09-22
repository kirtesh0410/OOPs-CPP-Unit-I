#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int totalDays;
    int presentDays;

public:
    Student(int r, string n)
        : rollNo(r), name(n), totalDays(0), presentDays(0) {}

    void markAttendance(bool isPresent) {
        totalDays++;

        if (isPresent) {
            presentDays++;
        }
    }

    double getAttendancePercentage() const {
        if (totalDays == 0) {
            return 0.0;
        }

        return (presentDays * 100.0) / totalDays;
    }

    void display() const {
        cout << "Roll: " << rollNo
             << " | Name: " << name
             << " | Attendance: " << getAttendancePercentage()
             << "%" << endl;
    }
};

int main() {
    Student s1(101, "Amit");
    Student s2(102, "Sneha");

    // Amit's attendance: 4 present out of 5
    s1.markAttendance(true);
    s1.markAttendance(true);
    s1.markAttendance(false);
    s1.markAttendance(true);
    s1.markAttendance(true);

    // Sneha's attendance: 3 present out of 5
    s2.markAttendance(true);
    s2.markAttendance(false);
    s2.markAttendance(true);
    s2.markAttendance(false);
    s2.markAttendance(true);

    cout << "=== Attendance Report ===" << endl;

    s1.display();
    s2.display();

    return 0;
}