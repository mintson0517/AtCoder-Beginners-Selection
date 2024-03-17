#include <iostream>

using namespace std;

int main(){
    //枚数と金額を入力
    int N, Y;
    cin >> N >> Y;

    //金額を何枚で作れるのかを求める
    int x = -1, y = -1, k = -1;
    for (int i = 0; i <= N ; ++i){
        for (int j = 0; j <= N -i ; ++j){
            int k = N - i - j;
            int total = 10000 * i + 5000 * j + 1000 * k;
            if (total == Y){
                x = i;
                y = j;
                x = k;
                break;
            }
        }
    }

    //if構文で場合ごとの結果を表示する
    if (x == -1 && y == -1 && x == -1){
        cout << "-1 -1 -1" << endl;
    }else{
        cout << x << " " << y << " " << x << endl;
    }

    return 0;
}