#include "src/calculator.h"

int main() {
    char plus = '+'
    char minus = '-'
    char division = '/'
    char multiply = '*'

    calculator(1.0, plus, 1.0);
    calculator(1.0, minus, 5.0);
    calculator(-10.0, plus, -81.0);
    calculator(10.0, minus, 7.0);
    calculator(0.0, plus, 0.0);
    calculator(-1.0, minus, -5.0);
    calculator(8.0, multiply, 5.0);
    calculator(-1.0, multiply, 9.0);
    calculator(-4.0, multiply, -2.0);
    calculator(8.0, division, 5.0);
    calculator(-1.0, division, 9.0);
    calculator(-4.0, division, -2.0);
    calculator(2222222222222222222, division, 44444444444444444444);
    calculator(123124124, multiply, 12342255346346);
    calculator(12312452356, plus, 1515234234);
    calculator(12341216, minus, 12562345);
    
    return 0;
}
