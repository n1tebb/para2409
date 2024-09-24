#include <iostream>

int main () {
    double USD = 93.00; //доллар
    double EUR = 103.63; // евро
    double CNY = 13.22; //юань
    double FAR = 6.66; //фарит
    double JPY = 0.64; //йена
    double COMMISION = 0.05;
    
    double rub, amoutuz, comission;
    int choice;
    char repeat;
    
    do {
        
        std::cout << "введите количество рублей: ";
        std::cin >> rub;
        
        for (;;) {
            std::cout << "Выберите валюту для обмена:\n";
            std::cout << "1 - Доллар (USD)\n";
            std::cout << "2 - Евро (EUR)\n";
            std::cout << "3 - Юань (CNY)\n";
            std::cout << "4 - Фарит (FAR)\n";
            std::cout << "5 - Йена (JPY)\n";
            std::cout << "Ваш выбор: ";
            std::cin >> choice;
            
            if (choice >= 1 && choice <= 5) {
                break;  // Если выбор правильный, выходим из цикла
            } else {
                std::cout << "Неверный выбор. Попробуйте снова...\n";
            }
        }
    
            comission = rub * COMMISION;
            double rubCOMM = rub - comission; //остаток после комки
            
            if (choice == 1) {
                amoutuz = rubCOMM / USD;
                std::cout << "вы купили " << amoutuz << " долларов\n";
            } else if (choice == 2) {
                amoutuz = rubCOMM / EUR;
                std::cout << "вы купили " << amoutuz << " евро\n";
            } else if (choice == 3) {
                amoutuz = rubCOMM / CNY;
                std::cout << "вы купили " << amoutuz << " юаня\n";
            } else if (choice == 4) {
                amoutuz = rubCOMM / FAR;
                std::cout << "вы купили " << amoutuz << " фарита\n";
            } else if (choice == 5) {
                amoutuz = rubCOMM / JPY;
                std::cout << "вы купили " << amoutuz << " йен\n";
            }
            
            std::cout << "комиссия за обмен = " << comission << " рублей\n";
        
        std::cout << "хотите повторить обмен?(y - да, n - нет)";
        std::cin >> repeat;
    } while (repeat == 'y');
        
    return 0;
}
