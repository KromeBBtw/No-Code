//Includes neccessary libraries
#include <iostream>
#include <memory>
#include <vector>
#include "developer.hpp" 

// The return type of the function gets specified after the parameters
auto main() -> int
{

    // Specification of standart namespace, shared pointer to function developer
    std::vector<std::shared_ptr<developer>> developers;

    //Specification of standart namespace, shared pointer to functions
    std::shared_ptr<JuniorDeveloper> junior_developer = std::make_shared<JuniorDeveloper>("Malian", "Krome");
    std::shared_ptr<SeniorDeveloper> senior_developer = std::make_shared<SeniorDeveloper>("Linus", "SunilRednael");

    // Inserts data at the end of the used vector
    developers.push_back(junior_developer);
    developers.push_back(senior_developer);

    // Iterator is used to point at the memory of solve_problem and print the text
    for (const auto& itr : developers)
    {
        itr->solve_problem();
        std::cout << std::endl;
    }

    return 0;

}