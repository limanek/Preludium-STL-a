#include <iostream>

void addSth(std::string table, char sign) {
    std::string table2 = table += sign;
    std::cout << table2 << std::endl;
}

void writeString(std::string word, char sign) {
    addSth(word,sign);
}

void returnWord(std::string word, int place) {
    std::cout << word[place] << std::endl;
}

void firstChar(std::string word) {
    std::cout << word.front() << std::endl;
}

void lastChar(std::string word) {
    std::cout << word.back() << std::endl;
}

int main() {
    std::string word = "abcd";
    writeString(word,'a');
    returnWord(word, 3);
    firstChar(word);
    lastChar(word);
    return 0;
}