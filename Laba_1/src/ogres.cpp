#include "../include/ogres.h"

std::string RemoveVowels(std::string data) {
    std::string answer;
    
    for (const char c : data) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                break;
            default:
                answer += c;
                break;
        }
    }
    return answer;
}