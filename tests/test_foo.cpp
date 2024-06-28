#include <gtest/gtest.h>
#include "../src/main.cpp"

TEST(FooTest, ReturnsCorrectValue) {
    A a;
    EXPECT_EQ(a.foo(3), 6);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
