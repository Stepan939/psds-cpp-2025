#include <iostream>
#include <string>

void PrintCheckFlags(CheckFlags flags) {
    
    if (flags < NO_CHECKS || flags > ALL_CHECKS) {
        std::cout << "[]";
        return;
    }
    
   
    if (flags == NO_CHECKS) {
        std::cout << "[]";
        return;
    }
    
    std::string result = "[";
    bool first = true;
    
  
    if (flags & CHECK_SYNTAX) {
        if (!first) result += ",";
        result += "CHECK_SYNTAX";
        first = false;
    }
    
    if (flags & CHECK_TYPES) {
        if (!first) result += ",";
        result += "CHECK_TYPES";
        first = false;
    }
    
    if (flags & CHECK_STYLE) {
        if (!first) result += ",";
        result += "CHECK_STYLE";
        first = false;
    }
    
    if (flags & CHECK_PERFORMANCE) {
        if (!first) result += ",";
        result += "CHECK_PERFORMANCE";
        first = false;
    }
    
    if (flags & CHECK_SECURITY) {
        if (!first) result += ",";
        result += "CHECK_SECURITY";
        first = false;
    }
    
    result += "]";
    std::cout << result;
}
