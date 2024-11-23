#include "DishStack.hpp"
#include <iostream>

DishStack::DishStack() : top_index(-1) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        dishes[i] = nullptr;
    }
}

DishStack::~DishStack() {
    for (int i = 0; i <= top_index; ++i) {
        delete dishes[i];
    }
}

void DishStack::push(Dish* dish) {
    if (top_index >= MAX_SIZE - 1) {
        std::cout << "The stack is full." << std::endl;
        return;
    }
    dishes[++top_index] = dish;
}

Dish* DishStack::pop() {
    if (top_index < 0) {
        std::cout << "The stack is empty." << std::endl;
        return nullptr;
    }
    return dishes[top_index--];
}

Dish* DishStack::peek() {
    if (top_index < 0) {
        std::cout << "The stack is empty." << std::endl;
        return nullptr;
    }
    return dishes[top_index];
}

int DishStack::size() {
    return top_index + 1;
}