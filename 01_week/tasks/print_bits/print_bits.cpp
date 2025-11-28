#include <iostream>
#include <bitset>
#include <climits>

void PrintBits(int64_t number, size_t bytes) {

    if (bytes == 0 || bytes > 8) {
        return;
    }
    
    
    size_t bits = bytes * 8;
    
    
    std::bitset<64> bitset(number);
    
  
    std::cout << "0b";
    
  
    for (int i = bits - 1; i >= 0; --i) {
        std::cout << bitset[i];
        
        
        if (i > 0 && i % 8 == 0) {
            std::cout << "'";
        }
    }
    

    std::cout << std::endl;
}
