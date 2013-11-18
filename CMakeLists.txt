cmake_minimum_required(VERSION 2.6.2)

project(template)

########
# Source
########
include_directories(${template_SOURCE_DIR}/include)
add_executable(template src/main.c src/template.c)
set_target_properties( template
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "bin"
)

#######
# GTest
#######
add_subdirectory(gtest-1.7.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#######
# Tests
#######
# Add test cpp file
add_executable(template_unittest tests/template_test.cpp src/template.c)
set_target_properties( template_unittest
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "tests"
)
# Link test executable against gtest & gtest_main
target_link_libraries(template_unittest gtest gtest_main)
add_test(template_unittest tests/template_unittest)

