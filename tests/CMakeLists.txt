include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

set(TESTS_SRC
  counter_tests.cpp
)
add_executable(tests ${TESTS_SRC})

target_link_libraries(tests PRIVATE gtest_main counter_lib)

include(GoogleTest)
enable_testing()
gtest_discover_tests(tests)