#include "InputParams.h"

MOSFET inputParameters(){
    /* allows user to input MOSFET parameters */
    std::cout << "Please input The MOSFET type (0 for N-CHannel, 1 for P-Channel)" << std::endl;
    std::cin >> test.Type;

    std::cout << "Please input The MOSFET drain-source voltage (V)" << std::endl;
    std::cin >> test.Vds;

    std::cout << "Please input The MOSFET gate-source voltage (V)" << std::endl;
    std::cin >> test.Vgs;

    std::cout << "Please input The MOSFET gate threshold voltage (V)" << std::endl;
    std::cin >> test.threshold;

    std::cout << "Please input The MOSFET rds on (ohms)" << std::endl;
    std::cin >> test.Rds_on;

    std::cout << "Please input The MOSFET max current @ 25C (A)" << std::endl;
    std::cin >> test.Id;

    std::cout << "Please input The MOSFET max power (W)" << std::endl;
    std::cin >> test.power;

    std::cout << "Please input The MOSFET gate charge (nC)" << std::endl;
    std::cin >> test.gateCharge;

    return test;
}