#include "gtest/gtest.h"
#include "MyTestFixture.h"
#include "myclass.h"

// not needed
// myclass<int> cl;

TEST_F(MyTestFixture, test1)
{
    EXPECT_EQ(cl(1, 2), 3);
}

TEST_F(MyTestFixture, test2)
{
    EXPECT_EQ(cl(1, 2), 0);
}

TEST_F(MyTestFixtureStr, test3)
{
    EXPECT_EQ(cl("string1", "string2"), "string1string2");
}