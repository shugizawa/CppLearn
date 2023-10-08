#include <iostream>

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h, int m, int s);

    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;
};

Time::Time(int h, int m, int s) {
    if (s < 0 || s > 59) {
        // обрабатываем ошибочные секунды
    }
    if (m < 0 || m > 59) {
        // обрабатываем ошибочные минуты
    }
    if (h < 0 || h > 23) {
        // обрабатываем ошибочные часы
    }
    hours = h;
    minutes = m;
    seconds = s;
}

int Time::GetHours() const {
    return hours;
}

int Time::GetMinutes() const {
    return minutes;
}

int Time::GetSeconds() const {
    return seconds;
}

int main() {
    Time t(13, 30, 0);
    std::cout << t.GetHours() << "\n";
}
