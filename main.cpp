#include <iostream>
#include "DishStack.hpp"

int main() {
    DishStack stack;
    Dish* one_dish = new Dish("A dish with one fish pattern on it");
    Dish* two_dish = new Dish("A dish with two fish patterns on it");
    Dish* red_dish = new Dish("A dish with a red fish pattern on it");
    Dish* blue_dish = new Dish("A dish with a blue fish pattern on it");

    // The variable stack_size should equal zero.
    int stack_size = stack.size();
    std::cout << "Initial stack size: " << stack_size << std::endl;

    stack.push(one_dish);
    stack.push(two_dish);
    stack.push(red_dish);
    stack.push(blue_dish);

    // The variable size_after_pushes should equal four.
    int size_after_pushes = stack.size();
    std::cout << "Size after pushes: " << size_after_pushes << std::endl;

    // The variable peeked_dish should have a description of "A dish with a blue fish pattern on it"
    Dish* peeked_dish = stack.peek();
    if (peeked_dish) {
        std::cout << "Peeked dish: " << peeked_dish->get_description() << std::endl;
    }

    // The variable popped_dish should have a description of "A dish with a blue fish pattern on it"
    Dish* popped_dish = stack.pop();
    if (popped_dish) {
        std::cout << "Popped dish: " << popped_dish->get_description() << std::endl;
        delete popped_dish;
    }

    // The variable another_popped_dish should have a description of "A dish with a red fish pattern on it"
    Dish* another_popped_dish = stack.pop();
    if (another_popped_dish) {
        std::cout << "Another popped dish: " << another_popped_dish->get_description() << std::endl;
        delete another_popped_dish;
    }

    // The variable final_size should equal two.
    int final_size = stack.size();
    std::cout << "Final size: " << final_size << std::endl;

    // Clean up remaining dishes
    while (stack.size() > 0) {
        Dish* dish = stack.pop();
        delete dish;
    }

    return 0;
}