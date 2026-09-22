#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SmartDevice {
private:
    string deviceId;
    string deviceType;
    string location;
    string status;
    string lastUpdated;

public:
    // Parameterized constructor
    SmartDevice(string id, string type, string loc, string stat, string time)
        : deviceId(id), deviceType(type), location(loc),
          status(stat), lastUpdated(time) {}

    // Switch device ON
    void switchOn(string time) {
        status = "ON";
        lastUpdated = time;
    }

    // Switch device OFF
    void switchOff(string time) {
        status = "OFF";
        lastUpdated = time;
    }

    // Change device status
    void changeStatus(string newStatus, string time) {
        status = newStatus;
        lastUpdated = time;
    }

    // Display device information
    void display() const {
        cout << "Device ID: " << deviceId
             << " | Type: " << deviceType
             << " | Location: " << location
             << " | Status: " << status
             << " | Last Updated: " << lastUpdated << endl;
    }
};

int main() {

    // Create smart device objects
    SmartDevice d1("D101", "Light", "Living Room", "OFF", "08:00");
    SmartDevice d2("D102", "Thermostat", "Bedroom", "ON", "08:05");
    SmartDevice d3("D103", "Camera", "Main Gate", "ON", "08:10");
    SmartDevice d4("D104", "Door Lock", "Main Door", "LOCKED", "08:15");

    // Store devices in a vector
    vector<SmartDevice> devices = {d1, d2, d3, d4};

    cout << "=== Smart Home Dashboard ===" << endl;

    for (const auto& device : devices) {
        device.display();
    }

    // Perform operations
    cout << "\n=== Updating Devices ===" << endl;

    d1.switchOn("09:00");
    d2.changeStatus("OFF", "09:05");
    d3.switchOff("09:10");
    d4.changeStatus("UNLOCKED", "09:15");

    // Display updated status
    cout << "\n=== Updated Home Dashboard ===" << endl;

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    return 0;
}
