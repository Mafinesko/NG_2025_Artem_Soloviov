#include <iostream>
#include <vector>

int main() {
    const int NUM_INPUTS = 5;
    std::vector<int> numbers(NUM_INPUTS);

    std::cout << "Enter ammount " << NUM_INPUTS << " numbers, each on a new line:" << std::endl;
    for (int i = 0; i < NUM_INPUTS; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << "Result:" << std::endl;
    for (int number : numbers) {
        for (int i = 0; i < number; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
