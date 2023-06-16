//Includes neccessary libraries
#include "developer.hpp"
#include <iostream>
#include <string>

//Usage of the scope resolution operator to distinguish between variables with the same name
developer::developer(const std::string& name, const std::string& alias) : name_{name}, alias_{alias}
{
}

// Variable gets deducted from its initializer
auto developer::get_name() const -> std::string
{
    return name_;
}

// Variable gets deducted from its initializer
auto developer::get_alias() const -> std::string
{
    return alias_;
}
 // New function to print the following sentence
void developer::drink_coffee()
{
    std::cout << "May your coffee be strong and your Monday be short!" << std::endl;
}

// Variable gets deducted from its initializer, prints name along qith specified sentence
auto operator<<(std::ostream& out, const developer& dev) -> std::ostream&
{
    out << "Name: " << dev.get_name() << "\n"
        << "Alias: " << dev.get_alias();
    return out;
}

//Usage of the scope resolution operator to distinguish between variables with the same name
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : developer(name, alias)
{
}

 // New function to print the following sentences
void JuniorDeveloper::solve_problem() const
{
    std::cout <<"Solving a problem:"<< std::endl<< *this << std::endl;
    std::cout << "Don't talk to me until this coffee is finished!" << std::endl;
    drink_coffee();
}

//Usage of the scope resolution operator to distinguish between variables with the same name
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : developer(name, alias)
{
}

 // New function to print the following sentences
void SeniorDeveloper::solve_problem() const
{
    std::cout <<"Solving a problem:"<< std::endl<< *this << std::endl;
    std::cout <<"Stressed, blessed, and coffee obsessed." << std::endl;
    drink_coffee();
}