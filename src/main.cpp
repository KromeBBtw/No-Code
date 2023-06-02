#include <iostream>
#include <memory>
#include <vector>
#include "developer.hpp" 

auto main() -> int
{
    std::vector<std::shared_ptr<developer>> developers;

    std::shared_ptr<JuniorDeveloper> junior_developer = std::make_shared<JuniorDeveloper>("Malian", "Krome");
    std::shared_ptr<JuniorDeveloper> senior_developer = std::make_shared<JuniorDeveloper>("Linus", "SunilRednael");

    developers.push_back(junior_developer);
    developers.push_back(senior_developer);

    for (const auto& itr : developers)
    {
        itr->solve_problem();
        std::cout << std::endl;
    }

    return 0;

}