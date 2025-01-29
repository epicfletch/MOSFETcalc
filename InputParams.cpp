#include "InputParams.h"

MOSFET inputParameters(){
    /* allows user to input MOSFET parameters */
    std::cout << "Please input The MOSFET type (0 for N-CHannel, 1 for P-Channel)" << std::endl;
    std::cin >> myMosfet.Type;

    std::cout << "Please input The MOSFET drain-source voltage (V)" << std::endl;
    std::cin >> myMosfet.Vds;

    std::cout << "Please input The MOSFET gate-source voltage (V)" << std::endl;
    std::cin >> myMosfet.Vgs;

    std::cout << "Please input The MOSFET gate threshold voltage (V)" << std::endl;
    std::cin >> myMosfet.threshold;

    std::cout << "Please input The MOSFET rds on (ohms)" << std::endl;
    std::cin >> myMosfet.Rds_on;

    std::cout << "Please input The MOSFET max current @ 25C (A)" << std::endl;
    std::cin >> myMosfet.Id;

    std::cout << "Please input The MOSFET max power (W)" << std::endl;
    std::cin >> myMosfet.power;
    
    std::cout << "Please input The MOSFET gate charge (nC)" << std::endl;
    std::cin >> myMosfet.gateCharge;

    return myMosfet;
}