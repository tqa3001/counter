add_subdirectory(counter)

add_executable(app app.cpp)

target_link_libraries(app PUBLIC counter_lib)