//
// Created by jieke on 21/02/24.
//
#include <iostream>
#include "Time.h"
#ifndef ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H
#define ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H


class Activities_description {
private:
    std::string activity_name;
    Time time;

public:

    Activities_description(const std::string time_start, const std::string time_end, const std::string name = "" ) : activity_name(name), time(time_start, time_end) {
        if(name == "")
            throw std::logic_error("Activity invalid name");
    }



    const std::string& get_activity_name() const{
        return activity_name;
    }


    void set_activity_name (const std::string& name) {
        activity_name = name;
    }

    const Time& get_time() const {
        return time;
    }
};


#endif //ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H
