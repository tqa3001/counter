#include <counter/counter.hpp>

Counter::Counter() : cnt { 0 } {}

int Counter::get() {
    return cnt;
}

void Counter::increment() {
    cnt++;
}