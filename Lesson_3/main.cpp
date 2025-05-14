#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int countWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    int wordCount = 0;

    while (ss >> word) {
        bool isWord = false;
        for (char c : word) {
            if (std::isalpha(c)) {
                isWord = true;
                break;
            }
        }
        if (isWord) {
            wordCount++;
        }
    }
    return wordCount;
}

int main() {
    std::string inputSentence;
    std::cout << "Enter a word: ";
    std::getline(std::cin, inputSentence);

    int wordCount = countWords(inputSentence);
    std::cout << "Number of words in a sentence: " << wordCount << std::endl;

    return 0;
}
