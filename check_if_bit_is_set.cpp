#include <iostream>

int check_bit(int number, int index){
    if (number & (1 << index)) {
        return 1;
    }
    return 0;
}

int main() {
    int number = 8;
    int index = 1;
    
    int set = check_bit( number, index);
    std::cout << set;

    return 0;
}