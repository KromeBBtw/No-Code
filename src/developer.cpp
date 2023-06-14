#include "developer.hpp"
#include <iostream>
#include <string>

developer::developer(const std::string& name, const std::string& alias) : name_{name}, alias_{alias}
{
}

auto developer::get_name() const -> std::string
{
    return name_;
}

auto developer::get_alias() const -> std::string
{
    return alias_;
}

void developer::drink_coffee()
{
    std::cout << "May your coffee be strong and your Monday be short!" << std::endl;
}

auto operator<<(std::ostream& out, const developer& dev) -> std::ostream&
{
    out << "Name: " << dev.get_name() << "\n"
        << "Alias: " << dev.get_alias();
    return out;
}

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : developer(name, alias)
{
}

void JuniorDeveloper::solve_problem() const
{
    std::cout <<"Solving a problem:"<< std::endl<< *this << std::endl;
    std::cout << "Don't talk to me until this coffee is finished!" << std::endl;
    drink_coffee();
}

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : developer(name, alias)
{
}

void SeniorDeveloper::solve_problem() const
{
    std::cout <<"Solving a problem:"<< std::endl<< *this << std::endl;
    std::cout <<"Stressed, blessed, and coffee obsessed." << std::endl;
    drink_coffee();
}