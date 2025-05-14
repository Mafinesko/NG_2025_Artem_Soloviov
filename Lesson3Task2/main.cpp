#include <iostream>
#include <string>
#include <cctype>
#include <iomanip> // For output formatting

int main() {
    std::string text;
    std::cout << "Please enter the text: ";
    std::getline(std::cin, text);

    int vowelCount = 0;
    int consonantCount = 0;
    int otherCount = 0;

    std::string vowels = "aeiouAEIOU";
    for (char c : text) {
        if (std::isalpha(c)) {
            if (vowels.find(c) != std::string::npos) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else {
            otherCount++;
        }
    }

    int totalLetters = vowelCount + consonantCount;

    if (totalLetters > 0) {
        double vowelPercentage = static_cast<double>(vowelCount) / totalLetters * 100;
        double consonantPercentage = static_cast<double>(consonantCount) / totalLetters * 100;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Vowel and Consonant Ratio:" << std::endl;
        std::cout << "Vowels: " << vowelPercentage << "%" << std::endl;
        std::cout << "Consonants: " << consonantPercentage << "%" << std::endl;
    } else {
        std::cout << "No letters found in the entered text." << std::endl;
    }

    return 0;
}
