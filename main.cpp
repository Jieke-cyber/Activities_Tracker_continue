#include <iostream>
#include <map>
#include "Day_activities.h"
#include "Days_collection.h"

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

    std::shared_ptr<Day_activities> monday(new Day_activities(1));
    std::shared_ptr<Day_activities> tuesday(new Day_activities(2));
    std::shared_ptr<Day_activities> wednesday(new Day_activities(3));
    std::shared_ptr<Day_activities> thursday(new Day_activities(4));
    std::shared_ptr<Day_activities> friday(new Day_activities(5));
    std::shared_ptr<Day_activities> saturday(new Day_activities(6));
    std::shared_ptr<Day_activities> sunday(new Day_activities(7));
    monday->add_activity( "8:00", "10:00", "Study");
    monday->add_activity("10:01", "12:00", "Work");
    monday->add_activity("12:01", "13:00", "Lunch");
    monday->add_activity("3:00", "7:00", "Job");
    tuesday->add_activity( "8:00", "10:00", "Study");
    wednesday->add_activity( "8:00", "10:00", "Study");
    thursday->add_activity( "8:00", "10:00", "Study");
    friday->add_activity( "8:00", "10:00", "Study");
    saturday->add_activity( "8:00", "10:00", "Study");
    sunday->add_activity( "8:00", "10:00", "Study");
    Days_collection week;
    week.add_day_program(monday);
    week.add_day_program(tuesday);
    week.add_day_program(wednesday);
    week.add_day_program(thursday);
    week.add_day_program(friday);
    week.add_day_program(saturday);
    week.add_day_program(sunday);



    week.show_collection();


    /*
    monday->show_program();
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
    monday->show_program();
     */

    /*monday->show_program();
    initscr();
    clear();
    if(monday->is_inserted("Study"))
        printw("Activity %s is found on day %d program", "Study", 1);
    else
        printw("Activity %s is not found on day %d program", "Study", 1);

    refresh();
    getch();
    endwin();*/

    /*
    show_specific_activities(monday->return_specific_time_activities("10:00"), "10:00");
    */
}
