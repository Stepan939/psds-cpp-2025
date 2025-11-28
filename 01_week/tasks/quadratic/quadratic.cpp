#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

void SolveQuadratic(int a, int b, int c) {
    
    std::cout << std::fixed << std::setprecision(6);
    

    if (a == 0) {
        // Случай 1.1: b = 0
        if (b == 0) {
     
            if (c == 0) {
                std::cout << "infinite solutions" << std::endl;
            } 
            
            else {
                std::cout << "no solutions" << std::endl;
            }
        } 

        else {
            double x = -static_cast<double>(c) / b;
            std::cout << x << std::endl;
        }
        return;
    }
    

    double discriminant = static_cast<double>(b) * b - 4.0 * a * c;
    

    if (discriminant < 0) {
        std::cout << "no solutions" << std::endl;
    }
 
    else if (std::abs(discriminant) < std::numeric_limits<double>::epsilon()) {
        double x = -static_cast<double>(b) / (2.0 * a);
        std::cout << x << std::endl;
    }
    
    else {
        double sqrt_d = std::sqrt(discriminant);
        double x1 = (-b - sqrt_d) / (2.0 * a);
        double x2 = (-b + sqrt_d) / (2.0 * a);
        

        if (x1 > x2) {
            std::swap(x1, x2);
        }
        
        std::cout << x1 << " " << x2 << std::endl;
    }
}
