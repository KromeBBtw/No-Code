#include <gtest/gtest.h>
#include "developer.hpp"

// Test fixture for Developer tests
class DeveloperTest : public ::testing::Test {
    protected:
    // Test objects
    SeniorDeveloper seniorDev{"Malian", "Krome"};
    JuniorDeveloper juniorDev{"Linus", "Sunil Rednael"};
};

//Test the constructors of SeniorDeveloper and JuniorDeveloper
TEST_F(DeveloperTest, ConstructorTets) {
    //Check that the name and alias are initalized correctly for SeniorDeveloper
    EXPECT_EQ(seniorDev.get_name(), "Malian");
    EXPECT_EQ(seniorDev.get_alias(), "Krome");

    // Check that the name and alias are initalized correctly for JuniorDeveloper
    EXPECT_EQ(juniorDev.get_name(), "Linus");
    EXPECT_EQ(juniorDev.get_alias(), "Sunil Rednael");
}