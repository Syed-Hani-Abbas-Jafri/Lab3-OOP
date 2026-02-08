#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string type;
    bool status;

public:
    SmartDevice(string name, string t, bool s) {
        deviceName = name;
        type = t;
        status = s;
        cout << deviceName << " (" << type << ") is now "
             << (status ? "ON" : "OFF") << endl;
    }

    ~SmartDevice() {
        cout << deviceName << " has powered down. Farewell." << endl;
    }

    void display() {
        cout << "Device: " << deviceName
             << " | Type: " << type
             << " | Status: " << (status ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice light("Living Room Light", "Smart Light", true);
    SmartDevice vacuum("Robo Cleaner", "Robo-Vacuum", false);
    SmartDevice coffee("Coffee Maker Pro", "Coffee Overlord", true);

    light.display();
    vacuum.display();
    coffee.display();

    return 0;
}
