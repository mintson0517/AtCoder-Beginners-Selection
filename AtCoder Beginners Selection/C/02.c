/*
 *AtCoder(ABC086A – Product ) 
 *This code calculates the product of two integers and determines if it is even or odd.
 *(c)2024,Mintson Code
*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // aとbの値を入力
    int product = a * b; // aとbの積を計算

    // 積が偶数か奇数かを判定し、結果を出力
    if (product % 2 == 0) {
        printf("Even\n"); // 積が偶数の場合
    } else {
        printf("Odd\n"); // 積が奇数の場合
    }

    return 0;
}