// # チャレンジ2
// C++11以降では4番目のタイプの記憶域期間が追加されています。何という記憶域期間ですか。この記憶域期間を持つ `int` 型の変数 `thread_data` を宣言し、値10で初期化するには、どのようにしますか。
// スレッド局所記憶

// #include <iostream>
#include <thread>

int main () {
    thread_local int j {10};
//    std::cout << j << std::endl;
    return 0;
}

