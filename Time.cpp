//
// Created by jieke on 19/03/24.
//

#include "Time.h"

int Time::time_convertor(const std::string &time) const {
    int hours, minutes;
    sscanf(time.c_str(), "%d:%d", &hours, &minutes);
    return hours*60 + minutes;
}
