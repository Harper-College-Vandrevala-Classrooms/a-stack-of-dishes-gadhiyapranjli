#ifndef DISHSTACK_HPP
#define DISHSTACK_HPP

#include <array>
#include "Dish.hpp"

class DishStack {
private:
    static const int MAX_SIZE = 100;
    std::array<Dish*, MAX_SIZE> dishes;
    int top_index;

public:
    DishStack();
    ~DishStack();
    void push(Dish* dish);
    Dish* pop();
    Dish* peek();
    int size();
};

#endif // DISHSTACK_HPP