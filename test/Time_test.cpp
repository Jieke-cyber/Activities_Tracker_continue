//
// Created by jieke on 19/03/24.
//
#include "gtest/gtest.h"
#include "../Time.h"

TEST(Time, Constructor_test) {
    Time time("10:00", "11:00");
    ASSERT_EQ(time.get_time_start(), "10:00");
    ASSERT_EQ(time.get_time_end(), "11:00");
}

TEST(Time, Setters_test) {
    Time time("10:00", "11:00");
    time.set_time_start("12:00");
    time.set_time_end("13:00");
    ASSERT_EQ(time.get_time_start(), "12:00");
    ASSERT_EQ(time.get_time_end(), "13:00");
}

TEST(Time, Exception_test) {
    ASSERT_THROW(Time time("11:00", "10:00"), std::logic_error);
}

TEST(Time, Convertor_test) {
    Time time("10:00", "11:00");
    ASSERT_EQ(time.time_convertor("10:00"), 10*60);
    ASSERT_EQ(time.time_convertor("11:00"), 11*60);
}

TEST(Time, Getters_test) {
    Time time("10:00", "11:00");
    ASSERT_EQ(time.get_time_start(), "10:00");
    ASSERT_EQ(time.get_time_end(), "11:00");
}

//