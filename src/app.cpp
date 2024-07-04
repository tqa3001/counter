#include <bits/stdc++.h>
#include <counter/counter.hpp>

using namespace std;

int main() {
    Counter service;
    cout << "counter: " << service.get() << '\n';
    service.increment();
    cout << "counter: " << service.get() << '\n';
}

/* TODO

- Turn this into a backend server: HTTP, one request at a time
- Add TCP listening

 */