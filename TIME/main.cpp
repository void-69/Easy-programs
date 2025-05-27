#include <iostream>
#include <iomanip>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    bool isValidTime(int h, int m, int s) {
        return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
        if (isValidTime(h, m, s)) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            std::cerr << "Invalid time format!" << std::endl;
            hours = minutes = seconds = 0;
        }
    }
    void setTime(int h, int m, int s) {
        if (isValidTime(h, m, s)) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            std::cerr << "Invalid time format! Setting to default 00:00:00." << std::endl;
            hours = minutes = seconds = 0;
        }
    }

    void displayTime() const {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":"
                  << std::setfill('0') << std::setw(2) << minutes << ":"
                  << std::setfill('0') << std::setw(2) << seconds << std::endl;
    }

    Time addTime(const Time& t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;

        if (result.hours >= 24) {
            int days = result.hours / 24;
            result.hours %= 24;
            std::cout << "Time exceeds 24 hours. Converted to days: " << days << " day(s) and "
                      << std::setfill('0') << std::setw(2) << result.hours << ":"
                      << std::setfill('0') << std::setw(2) << result.minutes << ":"
                      << std::setfill('0') << std::setw(2) << result.seconds << std::endl;
        } else {
            result.displayTime();
        }
        return result;
    }
};
void acceptTime(Time& t) {
    int h, m, s;
    std::cout << "Enter time (HH MM SS): ";
    std::cin >> h >> m >> s;
    t.setTime(h, m, s);
}

int main() {
    Time t1, t2;

    std::cout << "Enter first time:" << std::endl;
    acceptTime(t1);

    std::cout << "Enter second time:" << std::endl;
    acceptTime(t2);

    std::cout << "First time: ";
    t1.displayTime();

    std::cout << "Second time: ";
    t2.displayTime();

    std::cout << "Sum of both times: ";
    t1.addTime(t2);

    return 0;
}
