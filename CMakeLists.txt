cmake_minimum_required(VERSION 3.10...3.20)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

# Top-level compile options
if (MSVC)
  message("imagine using Binbows")
else()
  add_compile_options(-W -Wall -Werror)
endif()

if(PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
  message("Don't build in source.")
endif()

project(Counter VERSION 1.0.0 DESCRIPTION "Simple counter microservice")

add_subdirectory(src)

include(CTest)
if (BUILD_TESTING)
  add_subdirectory(tests)
endif()