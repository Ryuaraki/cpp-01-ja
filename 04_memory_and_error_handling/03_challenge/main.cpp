#include <iostream>
#include <vector>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int>& numbers) {
    std::vector<int> double_numbers;
    int double_num;

    for (int num : numbers) {
        double_num = num * 2;
        double_numbers.push_back(double_num);
    }

    return double_numbers;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    auto double_numbers = double_elements(numbers);
    
    // 元のvectorの値
    for (int num : numbers) {
        std::cout << num << std::endl;
    }

    // 新しいvectorの値
    for (int num : double_numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}