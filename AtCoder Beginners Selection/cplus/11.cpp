#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
  
    int t = 0, x = 0, y = 0; 

    //経過した時間、距離を求める
    for (int i = 0; i < N; ++i) {
        int ti, xi, yi;
        cin >> ti >> xi >> yi;
        int dt = ti - t;
        int dx = abs(xi - x);
        int dy = abs(yi - y); 
       
        //Noの場合の条件
        if (dt < dx + dy || (dt - dx - dy) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
        //t,x,yの値を更新
        t = ti; 
        x = xi; 
        y = yi; 
    }
    cout << "Yes" << endl;
    return 0;
}
