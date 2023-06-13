#include <gtest/gtest.h>
#include "developer.hpp"

// Test fixture for Developer tests
class DeveloperTest : public ::testing::Test {
    protected:
    // Test objects
    SeniorDeveloper seniorDev{"Alice", "The Ace"};
    JuniorDeveloper juniorDev{"Bob", "The Rookie"};
};

//Test the constructors of SeniorDeveloper and JuniorDeveloper
TEST_F(DeveloperTest, ConstructorTets) {
    //Check that the name and alias are initalized correctly for SeniorDeveloper
    EXPECT_EQ(seniorDev.get_name(), "Alice");
    EXPECT_EQ(seniorDev.get_alias(), "The Ace");

    // Check that the name and alias are initalized correctly for JuniorDeveloper
    EXPECT_EQ(juniorDev.get_name(), "Bob");
    EXPECT_EQ(juniorDev.get_alias(), "The Rookie");
}