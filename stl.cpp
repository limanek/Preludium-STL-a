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

int main() {
    std::string word = "abcd";
    writeString(word,'a');
    returnWord(word, 3);
    return 0;
}