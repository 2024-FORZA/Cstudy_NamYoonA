#include <stdio.h>

int main() {
    double A, B, C; // ������ ������, ���, ���ξ��� �ֽ��� ��
    double I, J, K; // Ĭ���Ͽ� �ʿ��� �ֽ��� ����
    double maxCocktails;

    // �Է� �ޱ�
    scanf("%lf %lf %lf", &A, &B, &C);
    scanf("%lf %lf %lf", &I, &J, &K);

    // �ִ� Ĭ���� �� ���
    maxCocktails = (A / I < B / J) ? (A / I < C / K ? A / I : C / K) : (B / J < C / K ? B / J : C / K);

    // ���� �ֽ� �� ���
    double remainingA = A - maxCocktails * I;
    double remainingB = B - maxCocktails * J;
    double remainingC = C - maxCocktails * K;

    // ��� ���
    printf("%.6lf %.6lf %.6lf\n", remainingA, remainingB, remainingC);

    return 0;
}
