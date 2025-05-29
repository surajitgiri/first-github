#include <stdio.h>

// Function representing dy/dx = (x - y) / (x + y)
double dydx(double x, double y) {
    return (x - y) / (x + y);
}

// Runge-Kutta 4th Order method
void rungeKutta(double x0, double y0, double h, int steps) {
    double x = x0, y = y0;

    printf("x\t\ty\n");
    printf("%.4lf\t%.4lf\n", x, y);

    for (int i = 0; i < steps; i++) {
        double k1 = h * dydx(x, y);
        double k2 = h * dydx(x + h / 2, y + k1 / 2);
        double k3 = h * dydx(x + h / 2, y + k2 / 2);
        double k4 = h * dydx(x + h, y + k3);
        
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;

        printf("%.4lf\t%.4lf\n", x, y);
    }
}

int main() {
    double x0 = 1, y0 = 2, h = 0.1; // Example values
    int steps = 10; // Number of steps to compute

    rungeKutta(x0, y0, h, steps);
    return 0;
}
