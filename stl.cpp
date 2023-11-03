#include <iostream>

void addSth(std::string table, char sign) {
    table += sign;
}

void writeString() {
    std::string word = "abcd";
    std::cout << word << std::endl;
    addSth(word,'e');
    std::cout << word << std::endl;
}

int main() {
    writeString();
    return 0;
}