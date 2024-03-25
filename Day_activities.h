  //
// Created by jieke on 22/02/24.
//
#include <iostream>
#include <list>
#include <memory>
#include "Activities_description.h"
#include <ncurses.h>

#ifndef ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H
#define ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H


class Day_activities {
private:
    int day_number;
    std::list<std::shared_ptr<Activities_description>> day_activities;
public:
    explicit Day_activities(int day_number) : day_number(day_number) {
        if(day_number <= 0) {
            throw std::logic_error("Day number must be greater than 0");
        }
    };


    ~Day_activities() noexcept{};

    int get_day_number() const{
        return day_number;
    }

    void add_activity(const std::string& name, const std::string& time_start, const std::string& time_end);

    bool remove_activity(const std::string& nome);

    bool is_inserted(const std::string &name) const;


    void show_program() const;

    int get_activities_number () const {
         return day_activities.size();
    }

    std::list<std::shared_ptr<Activities_description>> return_specific_time_activities(const std::string& time) const;

};


#endif //ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H
