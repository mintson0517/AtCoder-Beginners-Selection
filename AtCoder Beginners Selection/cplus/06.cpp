#include <iostream>
using namespace std;

// 各桁の和を計算する
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // 最下位桁の数字を合計に加える
        num /= 10; // 最下位桁を取り除く
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    // 各桁の和が A 以上 B 以下であるかチェック
    for (int i = 1; i <= N; ++i) {
        int d_sum = digitSum(i); // 各桁の和を計算
        if (A <= d_sum && d_sum <= B) {
            sum += i; // 条件を満たす数を合計に加算
        }
    }

    cout << sum << endl;

    return 0;
}
