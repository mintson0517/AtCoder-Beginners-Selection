#include <iostream>
#include <set>

using namespace std;

int main(){
    //枚数Nを入力
    int N;
    cin >> N;

    // 重複のない直径の餅を集める
    set<int> diameters;
    for (int i = 0; i < N; ++i){
        int d;
        cin >> d;
        diameters.insert(d);
    }

    // 鏡餅を作るために必要な最大の段数を求める
    cout << diameters.size() << endl;
    return 0;
}