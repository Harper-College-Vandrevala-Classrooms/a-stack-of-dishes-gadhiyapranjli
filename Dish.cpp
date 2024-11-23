#include "Dish.hpp"

Dish::Dish(std::string description) {
    this->description = description;
}

std::string Dish::get_description() {
    return this->description;
}