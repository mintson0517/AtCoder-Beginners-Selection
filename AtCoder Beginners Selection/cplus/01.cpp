#include <iostream>
#include <string>

int main() {
    int a, b, c;
    std::string s;

    //std::cinで整数と文字列を入力
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> s;

    // 合計と文字列を表示
    std::cout << ( a + b + c ) << " " << s << std::endl ;

    return 0;
}
