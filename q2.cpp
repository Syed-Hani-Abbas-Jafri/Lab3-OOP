#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

    void setDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

public:
    WeekDays() {
        setDays();
        CurrentDay = 0;
    }

    WeekDays(int day) {
        setDays();
        CurrentDay = day % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDayFromToday(int n) {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    WeekDays w1;
    cout << "Current Day: " << w1.getCurrentDay() << endl;
    cout << "Next Day: " << w1.getNextDay() << endl;
    cout << "Previous Day: " << w1.getPreviousDay() << endl;

    WeekDays w2(8);
    cout << "\nCurrent Day (8 % 7): " << w2.getCurrentDay() << endl;

    WeekDays w3(1);
    cout << "\n20 days from Monday: " << w3.getNthDayFromToday(20) << endl;

    return 0;
}
