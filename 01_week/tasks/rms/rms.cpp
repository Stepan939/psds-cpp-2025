#include <cmath>

double CalculateRMS(const double* data, int size) {

    if (size == 0) {
        return 0.0;
    }
    

    double sum_of_squares = 0.0;
    for (int i = 0; i < size; ++i) {
        sum_of_squares += data[i] * data[i];
    }
    
  
    double mean_square = sum_of_squares / size;
    double rms = std::sqrt(mean_square);
    
    return rms;
}
