#include "Menu.h"

int Menu() {
    int selection = 0;
    
    while (selection == 0) {
        std::cout << "Enter number for option below option" << std::endl;
        std::cout << "1: Re-Input MOSFET parameters" << std::endl;
        std::cout << "2: Gate Charge Time" << std::endl;

        std::cin >> selection; /* Allow user to input their selection */
        
        /* Sanitize user input to allow only valid menu options */
        switch (selection) {
            case 1:
                break;
            case 2:
                break; 
            default: /* Invalid selections */
                std::cout << "Selection invalid, please choose again" << std::endl;
                selection = 0;
        }
    } 
    return selection;
}
