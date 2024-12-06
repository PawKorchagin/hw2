#include "gtest/gtest.h"
#include "lib/lib.h"

TEST(_, Add) {
    ASSERT_EQ(add(1, 10), 11);
}

