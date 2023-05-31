#ifndef DEVELOPER_HPP_123987
#define DEVELOPER_HPP_123987
#include <string>


class developer
{
   public:
    developer(const std::string& name, const std::string& alias);

    auto get_name() const -> std::string;
    auto get_alias() const -> std::string;

    virtual void solve_problem() const = 0;

   protected:
    static void drink_coffee(); 

   private:
    std::string name_; 
    std::string alias_;  
};

class JuniorDeveloper : public developer
{
   public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

class SeniorDeveloper : public developer
{
   public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

#endif