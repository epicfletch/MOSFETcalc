#include "Menu.h"

int Menu() {
    int selection = 0;
    
    while (selection == 0) {
        std::cout << "Enter number for option below option" << std::endl;
        std::cout << "1: Input MOSFET parameters" << std::endl;
        std::cout << "2: Save MOSFET profile" << std::endl;
        std::cout << "3: Load MOSFET profile" << std::endl;
        std::cout << "4: Gate Charge Time" << std::endl;

        std::cin >> selection; /* Allow user to input their selection */

        std::cout << "selection is " << selection << std::endl;
        
        /* Sanitize user input to allow only valid menu options */
        switch (selection) {
            case 1:
                break;
            case 2:
                break; 
            case 3:
                break; 
            case 4:
                break; 
            default: /* Invalid selections */
                std::cout << "Selection invalid, please choose again" << std::endl;
                selection = 0;
        }
    } 
    return selection;
}
