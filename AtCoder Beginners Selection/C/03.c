#include <stdio.h>

int main()
{
    char s1, s2, s3;
    // 各マスの情報を1文字ずつ入力
    scanf("%c%c%c", &s1, &s2, &s3);

    // ビー玉が置かれるマスの数をカウント
    int count = (s1 == '1') + (s2 == '1') + (s3 == '1');
    
    // 結果を出力
    printf("%d\n", count);

    return 0;
}
