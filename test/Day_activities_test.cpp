//
// Created by jieke on 03/03/24.
//

#include "gtest/gtest.h"
#include "../Day_activities.h"
TEST(Day_activities, Constructor_test) {
    Day_activities day(1);
    ASSERT_EQ(day.get_day_number(), 1);
}

TEST(Day_activities, Add_activity_test) {
    Day_activities day(1);
    day.add_activity( "10:00", "11:00", "running");
    ASSERT_EQ(day.get_activities_number(), 1);
    try {
        day.add_activity( "10:00", "11:00", "running");
    } catch (std::logic_error &e) {
        ASSERT_STREQ(e.what(), "Activity already inserted");
    }
}

TEST(Day_activities, Remove_activity_test) {
    Day_activities day(1);
    day.add_activity("10:00", "11:00", "running");
    day.add_activity ("13:00", "16:00", "run");
    day.remove_activity("running");
    ASSERT_EQ(day.get_activities_number(), 1);

}

TEST(Day_activities, Is_inserted_test) {
    Day_activities day(1);
    day.add_activity("10:00", "11:00", "running");
    day.add_activity("10:00", "11:00", "run");
    ASSERT_TRUE(day.is_inserted("running"));
    ASSERT_FALSE(day.is_inserted("walking"));
}

TEST(Day_activities, Exeception_test) {
    Day_activities day(1);
    ASSERT_THROW(day.add_activity( "11:00", "10:00", "running"), std::logic_error);
}


