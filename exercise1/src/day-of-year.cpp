#include <numeric>
#include <iterator>
#include <array>

#include "day-of-year.hpp"

bool isoddYear(int year){
    return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

int dayOfYear(int month, int dayOfMonth, int year) {
    std::array<int, 12> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result = std::accumulate(std::begin(days), std::end(days), 0, [remaining = month] (int acc, int day) mutable {
        if(--remaining > 0){
            return acc + day;
        }
        else {
            return acc;
        }
    });
    if(month > 2 && isoddYear(year)){
        ++result;
    }
    return result + dayOfMonth;
}

