//
// Created by jieke on 25/03/24.
//
#include <iostream>
#include <list>
#include <memory>
#include "Day_activities.h"

#ifndef ACTIVITIES_TRACKER_DAY_COLLECTION_H
#define ACTIVITIES_TRACKER_DAY_COLLECTION_H


class Days_collection {
private:
    std::list<std::shared_ptr<Day_activities>> week;

public:
    Days_collection () {};

    void add_day_program(const std::shared_ptr<Day_activities>& d) {
        week.push_back(d);
    }

    void remove_day_program(int day_number) {
        for(const auto& day: week ) {
            if(day->get_day_number() == day_number) {
                week.remove(day);
            }
        }
    }

    bool is_inserted(int day_number) {
        for(const auto& day: week ) {
            if(day->get_day_number() == day_number) {
                return true;
            }
        }
        return false;
    }
};


#endif //ACTIVITIES_TRACKER_DAY_COLLECTION_H
