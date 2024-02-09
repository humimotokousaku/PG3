#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>

int main() {
    // 初期化
    std::string a(100000, 'a');

    // コピーの計測
    std::string copy{};
    // 計測開始
    std::chrono::system_clock::time_point startCopy = std::chrono::system_clock::now();
    copy = a;
    // 計測終了
    std::chrono::system_clock::time_point endCopy = std::chrono::system_clock::now();
    auto durationCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();

    // 移動の計測
    std::string move{};
    // 計測開始
    std::chrono::system_clock::time_point startMove = std::chrono::system_clock::now();
    move = std::move(a);
    // 計測終了
    std::chrono::system_clock::time_point endMove = std::chrono::system_clock::now();
    auto durationMove = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    // 計測結果を表示
    std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;
    std::cout << "コピー: " << durationCopy << "μs" << std::endl;
    std::cout << "移動: " << durationMove << "μs" << std::endl;

    return 0;
}