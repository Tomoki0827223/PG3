#include <iostream>
#include <string>
#include <chrono>

int main() {

    // 100,000文字の文字列を初期化
    std::string long_string(100000, 'a');

    // コピーにかかる時間を計測
    auto startCopy = std::chrono::high_resolution_clock::now();
    std::string copiedString = long_string;
    auto endCopyTime = std::chrono::high_resolution_clock::now();

    // 移動にかかる時間を計測
    auto startMove = std::chrono::high_resolution_clock::now();
    std::string movedString = std::move(long_string);
    auto endMove = std::chrono::high_resolution_clock::now();

    // 結果をマイクロ秒単位で計算
    auto copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(endCopyTime - startCopy).count();
    auto move_duration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    // 結果を表示
    std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;
    std::cout << "コピー: " << copy_duration << "µs" << std::endl;
    std::cout << "移動: " << move_duration << "µs" << std::endl;

    // 続行待ち
    std::cout << "続行するには何かキーを押してください..." << std::endl;
    std::cin.get();

    return 0;
}