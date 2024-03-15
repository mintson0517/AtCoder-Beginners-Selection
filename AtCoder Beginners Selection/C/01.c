/*
 *AtCoder(ABC086A – Product) 
 *This code reads three integers and a string, calculates their sum, and prints the result along with the string.
 *(c)2024,Mintson Code
*/
#include <stdio.h>

int main() {
    int a, b, c;
    char s[101];

    // 整数 a, b, c を入力
    scanf("%d%d%d", &a, &b, &c);
    // 文字列 s を入力
    scanf("%s", s);

    // a+b+c の計算結果と文字列 s を表示
    printf("%d %s\n", a + b + c, s);

    return 0;
}