//
// Created by jieke on 19/03/24.
//
#include<iostream>
#ifndef ACTIVITIES_TRACKER_TIME_H
#define ACTIVITIES_TRACKER_TIME_H


class Time {
private:
    std::string activity_time_start;
    std::string activity_time_end;
public:
    Time(std::string ts, std::string te) : activity_time_start(ts),  activity_time_end(te) {
        if(time_convertor(ts) >= time_convertor(te))
            throw std::logic_error("Start time must be less than end time");
    }

    int time_convertor(const std::string& time) const;

    const std::string& get_time_start() const {
        return activity_time_start;
    }

    const std::string& get_time_end() const {
        return activity_time_end;
    }

    void set_time_start(const std::string& ts ) {
        activity_time_start = ts;
    }

    void set_time_end(const std::string& te ) {
        activity_time_end = te;
    }
};


#endif //ACTIVITIES_TRACKER_TIME_H
