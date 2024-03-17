#include <iostream>
using namespace std;

int main(){
    //正整数a,bを入力
    int a, b;
    cin >> a >> b;

    //積(Product)を計算
    int product = a * b;

    //奇数(Odd),偶数(Even)なのかをIf構文で判別する
    if(product % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }

    return 0;
}