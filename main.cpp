#include "bank.h"

int main(int argc, char *argv[]) {
    Bank bank(0.043,6,1500);
    bank.count();
    bank.print();
    return 0;
}