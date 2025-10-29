#include <iostream>

const int MIN_HOURS_24 = 0;
const int MAX_HOURS_24 = 23;
const int MIN_MINUTES = 0;
const int MAX_MINUTES = 59;
const int HOURS_IN_CLOCK = 12;
const int MINUTES_IN_HOUR = 60;

int main()
{
    int hours, minutes;
    std::cin >> hours >> minutes;

    if (hours < MIN_HOURS_24 || hours > MAX_HOURS_24
        || minutes < MIN_MINUTES || minutes > MAX_MINUTES)
    {
        std::cout << "Invalid time given.";
    }

    // converts 24h format to 12h format
    hours %= HOURS_IN_CLOCK;

    // gives mirrored hours
    int mirroredHours = HOURS_IN_CLOCK - hours;

    // "MINUTES_IN_HOUR - minutes" gives mirrored minutes
    // "% MINUTES_IN_HOUR" handles 60 - 0 = 60
    int mirroredMinutes = (MINUTES_IN_HOUR - minutes) % MINUTES_IN_HOUR;

    // if not exact hour
    if (mirroredMinutes != 0)
    {
        // displayed hour moves one hour back ex: 6:15 => 5:45, 3:25 => 8:35
        // if exact hour ex: 6:00 => 6:00, 3:00 => 9:00
        mirroredHours = (mirroredHours - 1 + HOURS_IN_CLOCK) % HOURS_IN_CLOCK;
    }

    // 12h format uses 12:00 for midnight not 00:00
    if (mirroredHours == 0)
    {
        mirroredHours = HOURS_IN_CLOCK;
    }

    if (mirroredHours < 10)
    {
        std::cout << '0';
    }
    std::cout << mirroredHours << ':';
    if (mirroredMinutes < 10) {
        std::cout << '0';
    }
    std::cout << mirroredMinutes;

    return 0;
}