//
// Created by jieke on 02/03/24.
//
#include "gtest/gtest.h"
#include "../Activities_description.h"

TEST(Activities_description, Constructor_test ) {
    Activities_description activity("10:00", "11:00", "running");
    ASSERT_EQ(activity.get_activity_name(), "running");
    ASSERT_EQ(activity.get_time().get_time_start(), "10:00");
    ASSERT_EQ(activity.get_time().get_time_end(), "11:00");
}

TEST(Activities_description, Setters_test) {
    Activities_description activity("10:00", "11:00", "running");
    activity.set_activity_name("walking");
    ASSERT_EQ(activity.get_activity_name(), "walking");
}


TEST(Activities_description, Getter_test) {
    Activities_description activity( "10:00", "11:00", "running");
    ASSERT_EQ(activity.get_activity_name(), "running");
    ASSERT_EQ(activity.get_time().get_time_start(), "10:00");
    ASSERT_EQ(activity.get_time().get_time_end(), "11:00");
}

TEST(Activities_description, Exception_test) {
    ASSERT_THROW(Activities_description activity( "10:00", "11:00", ""), std::logic_error);
}

