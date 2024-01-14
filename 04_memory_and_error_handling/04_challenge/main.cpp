#include <iostream>
#include <stdexcept>
#include <vector>

// コードを入力してください
int element_at(const std::vector<int>& numbers, const int index) {
    if ((index < 0) || (index > numbers.size()-1)) {
        throw std::out_of_range("Index is out of range.");
    }

    return numbers[index];
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // コードを入力してください
    try {
        // 要素を知りたいvectorと知りたい要素のIndexを入力
        std::cout << element_at(numbers, 3) << std::endl;
        std::cout << element_at(numbers, 5) << std::endl;
    } catch (const std::out_of_range& msg) {
        std::cerr << "Error: " << msg.what() << std::endl;
    }

    return 0;
}