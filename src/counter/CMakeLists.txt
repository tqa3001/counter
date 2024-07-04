add_library(counter_lib counter.cpp)

target_include_directories(counter_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)