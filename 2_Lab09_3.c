#include <stdio.h>

int main() {
    double A, B, C; // 구매한 오렌지, 사과, 파인애플 주스의 양
    double I, J, K; // 칵테일에 필요한 주스의 비율
    double maxCocktails;

    // 입력 받기
    scanf("%lf %lf %lf", &A, &B, &C);
    scanf("%lf %lf %lf", &I, &J, &K);

    // 최대 칵테일 수 계산
    maxCocktails = (A / I < B / J) ? (A / I < C / K ? A / I : C / K) : (B / J < C / K ? B / J : C / K);

    // 남은 주스 양 계산
    double remainingA = A - maxCocktails * I;
    double remainingB = B - maxCocktails * J;
    double remainingC = C - maxCocktails * K;

    // 결과 출력
    printf("%.6lf %.6lf %.6lf\n", remainingA, remainingB, remainingC);

    return 0;
}
