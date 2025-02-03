#include <iostream>
using namespace std;

// 自作クラス
class MyClass {
public:
	void update();
	void state1();
	void state2();
	void state3();

	// メンバ関数ポインタのテーブル
	static void (MyClass::* table[])();


private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void MyClass::state1() {
	cout << "敵の接近！" << endl;
}

void MyClass::state2() {
	cout << "敵の攻撃！" << endl;
}

void MyClass::state3() {
	cout << "敵の離脱！" << endl;
}

void MyClass::update() {
	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();

	int input;
	cout << "次の状態に進むには0を入力してください: ";
	cin >> input;

	if (input == 0) {
		// 敵の状態（関数ポインタ配列のインデックス）を+1
		// インデックスが配列の最後の要素ならゼロを入れる
		index = (index + 1) % 3;
	}
	// ゼロ以外の入力ならインデックスを更新せずに同じ行動を繰り返す
}

// static宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::table[])() = {
  &MyClass::state1,	// インデックス番号0
  &MyClass::state2,	// インデックス番号1
  &MyClass::state3	// インデックス番号2
};

int main() {
	MyClass my;

	while (true) {
		my.update();
	}

	return 0;
}
