#include "quantum/include/DataEncoder.h"
#include "quantum/include/VariationalAnsatz.h"
#include <iostream>

int main() {
    DataEncoder enc(4, 4);
    VariationalAnsatz ansatz(4, 2);
    std::cout << "Example quantum clustering OK" << std::endl;
    return 0;
}