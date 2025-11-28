#include <iostream>
#include <bitset>
#include <climits>

void PrintBits(int64_t number, size_t bytes) {
    // Проверка допустимого диапазона размера
    if (bytes == 0 || bytes > 8) {
        return;
    }
    
    // Вычисляем количество бит
    size_t bits = bytes * 8;
    
    // Преобразуем число в битовое представление
    std::bitset<64> bitset(number);
    
    // Выводим префикс 0b
    std::cout << "0b";
    
    // Выводим биты с разделителями '
    for (int i = bits - 1; i >= 0; --i) {
        std::cout << bitset[i];
        
        // Добавляем разделитель после каждых 8 бит (кроме последней группы)
        if (i > 0 && i % 8 == 0) {
            std::cout << "'";
        }
    }
    
    // Перевод строки в конце
    std::cout << std::endl;
}
