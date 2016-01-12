#include "gtest/gtest.h"
#include "func.h"

TEST(basic_check_int_add, test_eq) {
    EXPECT_EQ(2, add(1, 1));
}

