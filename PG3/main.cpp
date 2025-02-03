#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    // Rθό‰w–ΌƒƒXƒgi1970”Nj
    list<const char*> rosen = {
		"“c’[‰w", "“ϊ•ι—Ά‰w", "ις’J‰w", "γ–μ‰w", "δ“k’¬‰w",
        "H—t΄‰w", "_“c‰w", "“‹‰w", "—Ly’¬", "V‹΄‰w",
        "•lΌ’¬‰w", "“c’¬‰w", "•iμ‰w", "‘εθ‰w", "ά”½“c‰w",
        "–Ϊ•‰w", "b”δυ‰w", "a’J‰w", "΄h‰w", "‘γX–Ψ‰w",
        "Vh‰w", "V‘ε‹v•Ϋ‰w", "‚“c”nκ‰w", "–Ϊ”’‰w", "’r‘ά‰w",
        "‘ε’Λ‰w", "‘ƒ›‰w", "‹ξ‰w"
    };

    // 1971”N: Ό“ϊ•ι—Ά‰w‚π’Η
    auto itr = rosen.begin();
    while (*itr != "“ϊ•ι—Ά‰w") ++itr;
    rosen.insert(itr, "Ό“ϊ•ι—Ά‰w");

    // 2020”N: ‚—ΦƒQ[ƒgƒEƒFƒC‰w‚π’Η
    itr = rosen.begin();
    while (*itr != "•iμ‰w") ++itr;
    rosen.insert(itr, "‚—ΦƒQ[ƒgƒEƒFƒC‰w");

    // 1970”N‚Μ‰wκ——‚π•\¦
    cout << "1970‚Μ‰w:" << endl;
    for (const auto& station : rosen) {
        if (station == "Ό“ϊ•ι—Ά‰w" || station == "‚—ΦƒQ[ƒgƒEƒFƒC‰w") continue; // 1970”N‚Ι‚Ν‘¶έ‚µ‚Θ‚Ά‰w‚πƒXƒLƒbƒv
        cout << station << endl;
    }

    // 2019”N‚Μ‰wκ——‚π•\¦
    cout << "\n2019‚Μ‰w:" << endl;
    for (const auto& station : rosen) {
        if (station == "‚—ΦƒQ[ƒgƒEƒFƒC") continue; // 2019”N‚Ι‚Ν‘¶έ‚µ‚Θ‚Ά‰w‚πƒXƒLƒbƒv
        cout << station << endl;
    }

    // 2022”N‚Μ‰wκ——‚π•\¦
    cout << "\n2022‚Μ‰w:" << endl;
    for (const auto& station : rosen) {
        cout << station << endl;
    }

    return 0;
}