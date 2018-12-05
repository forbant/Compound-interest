#include "bank.h"
#include <iostream>

int main(int argc, char *argv[]) {
    Bank bank(0.043,6,1500);
    bank.count();
    bank.print();
    int period;
    float amount, precent;
char c = 'y';
    while(c != 'n') {
        std::cout << "precent ";
        std::cin >> precent;
        std::cout << "period ";
        std::cin >> period;
        std::cout << "amount ";
        std::cin >> amount;
        bank.set(precent, period, amount);
        bank.count();
        bank.print();

        std::cout << "preceed?(y/n) ";
        std::cin >> c;
    }

    return 0;
}