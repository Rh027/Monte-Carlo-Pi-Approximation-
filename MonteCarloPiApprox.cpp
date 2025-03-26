#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
int main() {

    const int total_points = 1000000;
    int points_in_circle = 0;

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < total_points; i++) {
        double x = static_cast<double>(std::rand()) / RAND_MAX * 2 - 1;
        double y = static_cast<double>(std::rand()) / RAND_MAX * 2 - 1;

        if (x * x + y * y <= 1) {
            points_in_circle++;
        }
    }

    double pi_approx = 4.0 * points_in_circle / total_points;

    std::cout << "Approximation of Pi: " << pi_approx << std::endl;

    return 0;
}
