#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the forward difference table
void forwardDifference(double f[], int n, double diff[][n]) {
    for (int i = 0; i < n; i++)
        diff[i][0] = f[i];
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
        }
    }
}

// Function to calculate Newton's forward difference polynomial
double newtonsForwardDifference(double x, double xi[], double f[], int n, double diff[][n]) {
    double result = f[0];
    double term = 1;
    double u = (x - xi[0]) / (xi[1] - xi[0]);
    for (int i = 1; i < n; i++) {
        term *= u - i + 1;
        result += (term * diff[0][i]) / factorial(i);
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double xi[n], f[n];
    printf("Enter the data points (x, f(x)):\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &xi[i], &f[i]);
    }

    double diff[n][n];
    forwardDifference(f, n, diff);

    double x;
    printf("Enter the value of x for interpolation: ");
    scanf("%lf", &x);

    double result = newtonsForwardDifference(x, xi, f, n, diff);
    printf("Interpolated value at x = %.2lf is %.2lf\n", x, result);

    return 0;
}
