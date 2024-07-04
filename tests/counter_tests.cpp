#include <gtest/gtest.h>
#include <counter/counter.hpp>

TEST(CounterTest, IncreaseOnce) {
    Counter service;
    EXPECT_EQ(service.get(), 0);
    service.increment();
    EXPECT_EQ(service.get(), 1);
}