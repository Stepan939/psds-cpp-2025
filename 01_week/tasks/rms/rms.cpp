#include <cmath>

double CalculateRMS(const double* data, int size) {
    // Обработка пустого массива
    if (size == 0) {
        return 0.0;
    }
    
    // Вычисление суммы квадратов элементов
    double sum_of_squares = 0.0;
    for (int i = 0; i < size; ++i) {
        sum_of_squares += data[i] * data[i];
    }
    
    // Вычисление среднеквадратического значения
    double mean_square = sum_of_squares / size;
    double rms = std::sqrt(mean_square);
    
    return rms;
}
