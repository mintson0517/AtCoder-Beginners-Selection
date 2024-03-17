#include <iostream>
using namespace std;

int main() {
    //各金額の枚数と合計金額を入力
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    
    //すべてのパターンをForループを使用して求める
    int count = 0;
    for (int a = 0; a <= A; a++) {
        for (int b = 0; b <= B; b++) {
            for (int c = 0; c <= C; c++) {
                if (500 * a + 100 * b + 50 * c == X) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}