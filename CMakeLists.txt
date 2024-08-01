cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ColorCoder)

# Add the executable
add_executable(ColorCoder main.cpp ColorCoder.cpp ColorPair.cpp)

# Include FetchContent module
include(FetchContent)

# Download and configure Google Test
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add test executable
add_executable(ColorCoderTests test_ColorCoder.cpp ColorCoder.cpp ColorPair.cpp)

# Link Google Test to the test executable
target_link_libraries(ColorCoderTests gtest gtest_main)

# Add tests
add_test(NAME ColorCoderTests COMMAND ColorCoderTests)