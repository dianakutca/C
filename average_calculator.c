#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double sum = 0;
    double product = 1;
    int count = 0;

    printf("Введіть число A: ");
    scanf("%lf", &A);
    printf("Введіть число B: ");
    scanf("%lf", &B);
    printf("Введіть число C: ");
    scanf("%lf", &C);

    sum = A + B + C;
    product = A * B * C;
    count = 3;

    double avg_arithmetic = sum / count;
    double avg_geometric = pow(product, 1.0 / count);

    printf("Середнє арифметичне: %.2lf\n", avg_arithmetic);
    printf("Середнє геометричне: %.2lf\n", avg_geometric);

    return 0;

}
