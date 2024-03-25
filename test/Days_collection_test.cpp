//
// Created by jieke on 25/03/24.
//

#include "gtest/gtest.h"
#include "../Days_collection.h"
#include "../Day_activities.h"
#include "memory.h"


TEST(Days_collection, Add_program_test) {
    std::shared_ptr<Day_activities> monday;
    monday->add_activity("10:00", "11:00", "running");
    Days_collection dc;
    dc.add_day_program(monday);
    ASSERT_EQ(dc.get_days_number(), 1);
}

TEST(Days_collection, Remove_program_test) {
    std::shared_ptr<Day_activities> monday;
    monday->add_activity("10:00", "11:00", "running");
    Days_collection dc;
    dc.add_day_program(monday);
    dc.remove_day_program(1);
    ASSERT_EQ(dc.get_days_number(), 0);
}

TEST(Days_collection, Is_inserted_test) {
    std::shared_ptr<Day_activities> monday;
    monday->add_activity("10:00", "11:00", "running");
    Days_collection dc;
    dc.add_day_program(monday);
    ASSERT_TRUE(dc.is_inserted(1));
}

TEST(Days_collection, Get_day_number_test) {
    std::shared_ptr<Day_activities> monday;
    monday->add_activity("10:00", "11:00", "running");
    Days_collection dc;
    dc.add_day_program(monday);
    ASSERT_EQ(dc.get_days_number(), 1);
}