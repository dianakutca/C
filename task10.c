#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Введіть коефіцієнт a: ");
    scanf("%lf", &a);
    printf("Введіть коефіцієнт b: ");
    scanf("%lf", &b);
    printf("Введіть коефіцієнт c: ");
    scanf("%lf", &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("Коренів немає\n");
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Єдиний корінь: %lf\n", root);
    } else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Два корені: %lf і %lf\n", root1, root2);
    }

    return 0;
}
