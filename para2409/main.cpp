#include <iostream>

int main () {
    int num = 0;
    int summ = 0;
    
    
    std::cout << "введите числа(0 = завешение): ";
    while (true){
        std::cin >> num;
        if (num == 0) {
            break;
        }
        summ += num;
    }
    
    std::cout << "сумме всех чиcел = " << summ << "\n";
    
    return 0;
}
