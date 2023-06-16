//Checks if a given macro is defined or not
#ifndef DEVELOPER_HPP_123987
//Defines macro
#define DEVELOPER_HPP_123987
//Includes library
#include <string>

//Creates a class with the necessary data and functions for the developer.cpp file
class developer
{
    // Public member to make the developer member visible to other code
   public:
    developer(const std::string& name, const std::string& alias);

    //Creates two functions which are used in developer.cpp
    auto get_name() const -> std::string;
    auto get_alias() const -> std::string;

    //Creates a function to be used in developer.cpp
    virtual void solve_problem() const = 0;

    //Creates a protected member which can't be accessed outside the code
   protected:
    static void drink_coffee(); 

    //Creates a member which can't be viewed or accessed outside the class
   private:
    std::string name_; 
    std::string alias_;  
};

//Creates another class 
class JuniorDeveloper : public developer
{
    //Public member with funtions to be used in developer.cpp
   public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

//Creates yet another class 
class SeniorDeveloper : public developer
{
    //Public member with funtions to be used in developer.cpp
   public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

#endif