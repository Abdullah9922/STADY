#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to evaluate the equation at a given x
double f(double x, int p, int q, int r, int s, int t, int u) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

// Function to solve the equation using the bisection method
void solveEquation(int p, int q, int r, int s, int t, int u) {
    double low = 0.0, high = 1.0;

    // Check if there is a solution by evaluating at endpoints
    double f0 = f(0.0, p, q, r, s, t, u);
    double f1 = f(1.0, p, q, r, s, t, u);

    if (f0 * f1 > 0) {
        // No solution if f(0) and f(1) have the same sign
        cout << "No solution" << endl;
        return;
    }

    // Bisection method to find the root
    while (high - low > 1e-7) {
        double mid = (low + high) / 2.0;
        double f_mid = f(mid, p, q, r, s, t, u);

        if (f_mid == 0.0) {
            // Exact root found
            cout << fixed << setprecision(4) << mid << endl;
            return;
        }

        // Narrow the search interval
        if (f_mid * f0 < 0) {
            high = mid;
        } else {
            low = mid;
        }
    }

    // Output the root with 4 decimal places
    cout << fixed << setprecision(4) << (low + high) / 2.0 << endl;
}

int main() {
    int p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u) {
        solveEquation(p, q, r, s, t, u);
    }
    return 0;
}
