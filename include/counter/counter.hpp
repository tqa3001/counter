#pragma once
#include <cstdint>

class Counter {
public:
    Counter();
    int get();
    void increment();
private:
    uint64_t cnt;
};