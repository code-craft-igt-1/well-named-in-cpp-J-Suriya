cmake_minimum_required(VERSION 3.14)

# Set the project name
project(ColorCoder)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FetchContent module
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP true
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add test executable
add_executable(ColorCoderTests test_ColorCoder.cpp ColorCoder.cpp)

# Link Google Test to the test executable
target_link_libraries(ColorCoderTests gtest gtest_main)

# Include GoogleTest module
include(GoogleTest)

# Discover and register tests
gtest_discover_tests(ColorCoderTests)