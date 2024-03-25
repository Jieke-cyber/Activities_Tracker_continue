#include <iostream>
#include <map>
#include "Day_activities.h"

void show_specific_activities(const std::list<std::shared_ptr<Activities_description>>& l, const std::string& time) {
    initscr();
    clear();
    printw("List of activities after %s :\n",time.c_str());
    for(const auto& activity : l){
        printw("%s\n", activity->get_activity_name().c_str());
    }
    refresh();
    getch();
    endwin();
}
int main() {
        std::map <int, std::shared_ptr<Day_activities>> week;
        week[1] = std::make_shared<Day_activities>(1);
        week[2] = std::make_shared<Day_activities>(2);
        week[3] = std::make_shared<Day_activities>(3);
        week[4] = std::make_shared<Day_activities>(4);
        week[5] = std::make_shared<Day_activities>(5);
        week[6] = std::make_shared<Day_activities>(6);
        week[7] = std::make_shared<Day_activities>(7);
        week[1]->add_activity( "8:00", "10:00", "Study");
        week[1]->add_activity("10:01", "12:00", "Work");
        week[1]->add_activity("12:01", "13:00", "Lunch");
        week[1]->add_activity("3:00", "7:00", "Job");
        week[2]->add_activity( "8:00", "10:00", "Study");
        week[3]->add_activity( "8:00", "10:00", "Study");
        week[4]->add_activity( "8:00", "10:00", "Study");
        week[5]->add_activity( "8:00", "10:00", "Study");
        week[6]->add_activity( "8:00", "10:00", "Study");
        week[7]->add_activity( "8:00", "10:00", "Study");

    /*for(int i= 1; i <= 7; i++) {
        week[i]->show_program();
    }*/


    /*
    week[1]->show_program();
    initscr();
    clear();
    if(week[1]->remove_activity("Work")) {
        printw("Activity %s is removed on day %d\n", "Work", 1);
    } else {
        printw("Activity %s is not found on day %d\n", "Work", 1);
    }
    refresh();
    getch();
    endwin();
    week[1]->show_program();
     */

    /*week[1]->show_program();
    initscr();
    clear();
    if(week[1]->is_inserted("Study"))
        printw("Activity %s is found on day %d program", "Study", 1);
    else
        printw("Activity %s is not found on day %d program", "Study", 1);

    refresh();
    getch();
    endwin();*/


    show_specific_activities(week[1]->return_specific_time_activities("10:00"), "10:00");

}
