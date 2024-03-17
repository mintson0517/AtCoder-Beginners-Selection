#include <iostream>
#include <string>
using namespace std;

int main()
{
    //ﾏｽに書かれている数字を入力
    string s;
    cin >> s;

    //数字が1か0なのかを判断してカウントする
    int count = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}