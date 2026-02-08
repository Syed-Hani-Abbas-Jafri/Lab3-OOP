#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;

public:
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }

    CricketPlayer& improveAverage(double boost) {
        battingAverage += boost;
        return *this;
    }

    void playMatch(double runsScored) {
        battingAverage = (battingAverage * 0.7) + (runsScored * 0.3);
    }

    void displayPlayerStats() {
        cout << "Player: " << name
             << " | Jersey: " << jerseyNumber
             << " | Batting Average: " << battingAverage
             << " — More stable than Karachi’s weather." << endl;
    }
};

int main() {
    CricketPlayer babar("Babar Azam", 56, 45.5);
    CricketPlayer rizwan("Muhammad Rizwan", 12, 42.3);
    CricketPlayer saim("Saim Ayub", 32, 38.7);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    cout << endl << "After confidence boost:" << endl;

    babar.improveAverage(5).improveAverage(3);
    rizwan.improveAverage(4);
    saim.improveAverage(6).improveAverage(2);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    cout << endl << "After match performances:" << endl;

    babar.playMatch(85);
    rizwan.playMatch(70);
    saim.playMatch(95);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    return 0;
}
