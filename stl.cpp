#include <iostream>

void addSth(std::string table, char sign) {
    std::string table2 = table += sign;
    std::cout << table2;
}

void writeString() {
    std::string word = "abcd";
    std::cout << word << std::endl;
    addSth(word,'e');
}

int main() {
    writeString();
    return 0;
}