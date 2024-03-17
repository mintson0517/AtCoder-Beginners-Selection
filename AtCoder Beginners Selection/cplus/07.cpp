#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    //入力で動的配列を作成する
    vector<int> cards(N);
    for (int i = 0; i < N; ++i){
        cin >> cards[i];
    }
   
    //大から小に分類する
    sort(cards.rbegin(),cards.rend());

    //Aliceの合計
    int alice = 0;
    for (int i = 0; i < N; i +=2){
        alice += cards[i];
    }
    //Bobの合計
    int bob = 0;
    for (int i = 1; i < N; i += 2){
        bob += cards[i];
    }

    //AliceとBobの合計の差を計算
    cout << alice - bob << endl;
    return 0;
}