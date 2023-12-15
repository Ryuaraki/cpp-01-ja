// チャレンジ3
// C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。`exponent` のデフォルト値は2で、
// `power` は `base` を `exponent` 回累乗した結果を返します。baseを3、exponentを4としてこの関数を呼び出してください。

#include <iostream>
//#include <cmath>

int power(int base, int exponent = 2);


int main() {
    int base { 3 };
    int exponent { 4 };
//    std::cout << "base 3, exponent 4として, pow関数を呼び出した結果は, " << std::pow(3,4) << std::endl; 
//    std::cout << "base 3, exponent 4として, power関数を呼び出した結果は, " << power(3,4) << std::endl;
    std::cout << power(base, exponent) << std::endl;
//    std::cout << "baseを入力して下さい: ";
//    std::cin >> base;
//    std::cout << "exponentを入力して下さい: ";
//    std::cin >> exponent;
//    std::cout << "base " << base << "," << "exponent " << exponent 
//              << "として, power関数を呼び出した結果は, "<< power(base, exponent) << std::endl;  
    return 0;
}

int power(int base, int exponent) {
    int result { 1 };
    for(int i { 0 }; i < exponent; ++i) {
        result *= base;
    }
    return result;
}