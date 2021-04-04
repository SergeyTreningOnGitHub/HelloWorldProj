#include "gen_hello.h"
#include <gtest/gtest.h>
using namespace std;

TEST(TestHello, HelloStringIsValid){    
    ASSERT_EQ(GenHello(), string("Hello world"));
}