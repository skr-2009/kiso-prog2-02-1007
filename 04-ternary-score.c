// 三項演算子で、03-if-score.c と同じ点数の決め方を1行で書く
#include <stdio.h>

int main(void)
{
    int score = 75;
    char *point = (score >= 60) ? "合格" : "不合格";

    printf("%s\n", point);
    return 0;
}
