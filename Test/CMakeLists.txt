
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.8.0
)

FetchContent_MakeAvailable(googletest)

include_directories(${ROOT_DIR}/Inc ${GTEST_INCLUDE_DIRS})

add_executable(test_hello.out test_hello.cpp)
target_link_libraries(test_hello.out gtest_main gen_hello)

include(GoogleTest)

gtest_discover_tests(test_hello.out)