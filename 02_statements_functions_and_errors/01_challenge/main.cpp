// チャレンジ1
// ユーザーに数値の入力を求め、その値が正、負、ゼロのどれであるかを表示するプログラムを作成してください。

#include <iostream>

void displaySign(float);


int main () {
    float number;
    
    std::cout << "数値を入力して下さい: ";
    std::cin >> number;
    displaySign(number);

    return 0;
}

void displaySign(float number) {
    if (number < 0) {
        std::cout << "入力した値は負の値です." << std::endl;
    } else if (number == 0) {
        std::cout << "入力した値はゼロです." << std::endl;
    } else {
        std::cout << "入力した値は正の値です." << std::endl;
    }
}
