#include <iostream>
#include <vector>

int main() {
    const int NUM_INPUTS = 5;
    std::vector<int> numbers(NUM_INPUTS);

    std::cout << "Пожалуйста, введите " << NUM_INPUTS << " чисел, каждое на новой строке:" << std::endl;
    for (int i = 0; i < NUM_INPUTS; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << "\nВот соответствующая фигура:" << std::endl;
    for (int number : numbers) {
        for (int i = 0; i < number; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
