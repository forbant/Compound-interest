#include <iostream>

class Bank {
private:
    float _precent;
    float _period;
    float _amount;
public:
    Bank();
    Bank(float precent, float period, float amount) : _precent(precent), _period(period), _amount(amount){}
    void print();
    void count();
};

int main(int argc, char *argv[]) {
    std::cout << "Hey" << std::endl;
    Bank bank(1,2,3);
    bank.print();
    bank.count();
    return 0;
}

void Bank::print() {
    std::cout << "print" << std::endl;
}
void Bank::count() {
    std::cout << "count" << std::endl;
}