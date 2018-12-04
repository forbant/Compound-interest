#include "bank.h"
#include <iostream>
#include <cmath>

Bank::Bank() : _precent(0), _period(0), _present_amount(0), _future_amount(0){}
Bank::Bank(float precent, int period, float amount) : _precent(precent), _period(period), _present_amount(amount), _future_amount(0){}

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
