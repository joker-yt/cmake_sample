#include "gtest/gtest.h"
#include "myclass.h"

myclass<int> cl;

TEST(mytest, test1)
{
    EXPECT_EQ(cl(1, 2), 3);
}

TEST(mytest, test2)
{
    EXPECT_EQ(cl(1, 2), 0);
}