#ifndef DISH_HPP
#define DISH_HPP

#include <string>

class Dish {
private:
    std::string description;

public:
    Dish(std::string description);
    std::string get_description();
};

#endif // DISH_HPP