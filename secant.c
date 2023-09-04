#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)*(x)-2*(x)-5)

int main() {
    double x0, x1, x2, e;
    int i = 0;

    printf("Enter lower guess (x0): ");
    scanf("%lf", &x0);
    printf("Enter upper guess (x1): ");
    scanf("%lf", &x1);
    printf("Enter tolerable error (e): ");
    scanf("%lf", &e);

    if (f(x0) * f(x1) < 0) {
        printf("Continue\n");
    } else {
        printf("Wrong Input\n");
        return 1; // Exit the program with an error code
    }

    do {
        x2 = (x0 * f(x1) - x1 * f(x0)) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
        i++;
    } while (fabs(f(x2)) > e);
    printf("Root approximation after %d iterations: %lf\n", i, x2);
    return 0;
}
