#include <cctype>
#include <cstdint>

char* CharChanger(char* str, char delimeter) {
    char* read = str;    
    char* write = str;  
    char current_char;
    int count;
    
    while (*read != '\0') {
        current_char = *read;
        count = 1;
        
   
        while (*(read + 1) == current_char) {
            count++;
            read++;
        }
        
        
        if (current_char == ' ') {
          
            *write++ = delimeter;
        }
        else if (std::isdigit(current_char)) {
       
            if (count >= 10) {
                *write++ = '*';
                *write++ = '0';
            } else {
                *write++ = '*';
                if (count > 1) {
                    *write++ = '0' + count;
                }
            }
        }
        else if (std::isupper(current_char)) {
          
            if (count >= 10) {
                *write++ = current_char;
                *write++ = '0';
            } else {
                *write++ = current_char;
                if (count > 1) {
                    *write++ = '0' + count;
                }
            }
        }
        else if (std::islower(current_char)) {
        
            char upper_char = std::toupper(current_char);
            if (count >= 10) {
                *write++ = upper_char;
                *write++ = '0';
            } else {
                *write++ = upper_char;
                if (count > 1) {
                    *write++ = '0' + count;
                }
            }
        }
        else {
        
            if (count >= 10) {
                *write++ = '_';
                *write++ = '0';
            } else {
                *write++ = '_';
                if (count > 1) {
                    *write++ = '0' + count;
                }
            }
        }
        
        read++; 
    }
    
    *write = '\0'; 
    return write; 
}
