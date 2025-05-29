#include <stdio.h>
#include <math.h>

int main() {
    // Coefficients and constants are hard-coded for the system:
    // 4x1 + x2 + x3 = 7
    // x1 + 5x2 + x3 = -8
    // x1 + x2 + 3x3 = 6
    
    // Tolerance for convergence and maximum iterations
    double tol = 1e-6;
    int maxIter = 100;
    
    // Initial guess for x1, x2, and x3
    double x1 = 0, x2 = 0, x3 = 0;
    double x1_old, x2_old, x3_old;
    
    int iter = 0;
    
    // Gauss-Seidel Iteration Loop
    while(iter < maxIter) {
        // Save the old values for convergence check
        x1_old = x1;
        x2_old = x2;
        x3_old = x3;
        
        // Update x1 using the previous x2 and x3 values
        x1 = (7 - (x2 + x3)) / 4.0;
        
        // Update x2 using the new x1 and previous x3 values
        x2 = (-8 - (x1 + x3)) / 5.0;
        
        // Update x3 using the new x1 and new x2 values
        x3 = (6 - (x1 + x2)) / 3.0;
        
        // Check for convergence: if the change is less than tolerance for all variables, break the loop
        if(fabs(x1 - x1_old) < tol && fabs(x2 - x2_old) < tol && fabs(x3 - x3_old) < tol)
            break;
        
        iter++;
    }
    
    // Check if the solution converged or if max iterations were reached
    if(iter == maxIter)
        printf("Solution did not converge in %d iterations.\n", maxIter);
    else
        printf("Solution converged in %d iterations:\n", iter);
    
    printf("x1 = %lf\nx2 = %lf\nx3 = %lf\n", x1, x2, x3);
    
    return 0;
}
