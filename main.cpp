#include <iostream>

class Bank {
private:
    float _precent;
    int _period;
    float _present_amount;
    float _future_amount;
public:
    Bank() : _precent(0), _period(0), _present_amount(0), _future_amount(0){}
    Bank(float precent, int period, float amount) : _precent(precent), _period(period), _present_amount(amount), _future_amount(0){}
    void print();
    void count();
};

int main(int argc, char *argv[]) {
    std::cout << "Hey" << std::endl;
    Bank bank(0.043,6,1500);
    bank.count();
    bank.print();
    return 0;
}

void Bank::print() {
    std::cout << _future_amount << std::endl;
}
void Bank::count() {
    _precent++;
    float multilier = _precent;
    for(int i = 0; i < _period-1; ++i)
        _precent *= multilier;
    _future_amount = _present_amount * _precent;
}
