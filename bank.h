#ifndef _BANK_
#define _BANK_

class Bank {
private:
    float _precent;
    int _period;
    float _present_amount;
    float _future_amount;
public:
    Bank();
    Bank(float precent, int period, float amount);
    void print();
    void count();
    void set(float precent, int period, float amount);
};
#endif