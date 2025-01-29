#include <iostream>
#include "Menu.h"
#include "InputParams.h"
#include "MOSFETProfiles.h"

int main(){
    int quit = 0;
    MOSFET mosfet;
    std::string folderpath = ProfileLocation();
    while(quit == 0){
        int selection = Menu();
        switch (selection)
        {
        case 1:
            mosfet = inputParameters();
            break;
        case 2:
            SaveProfile(folderpath,mosfet);
            break;
        case 3:
            mosfet = LoadProfile(folderpath);
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    return 0;
}
