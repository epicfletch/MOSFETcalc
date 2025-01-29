#include "MOSFETProfiles.h"

void SaveProfile(std::string Filepath, MOSFET mosfetProfile){
    std::string Filename;
    if (fs::exists(Filepath) && fs::is_directory(Filepath)){
        std::cout << "Input filename" << std::endl;
        std::cin >> Filename;
        Filepath = Filepath + '/' + Filename;

        std::ofstream file(Filepath); // Create file
        if (file) {
            std::cout << "File created successfully: " << Filepath << std::endl;

            file << mosfetProfile.name << "\n" 
                 << mosfetProfile.Type << "\n" 
                 << mosfetProfile.Vgs << "\n" 
                 << mosfetProfile.Vds << "\n"
                 << mosfetProfile.Id << "\n" 
                 << mosfetProfile.Rds_on << "\n" 
                 << mosfetProfile.threshold << "\n"
                 << mosfetProfile.power << "\n" 
                 << mosfetProfile.gateCharge << std::endl;

            file.close();
            std::cout << "Profile saved to " << Filepath << std::endl;
        } 
        else {
            std::cerr << "Failed to create the file or file does not exist." << std::endl;
        }
    } 
    else {
        std::cout << "The folder does not exist." << std::endl;
    }
}

MOSFET LoadProfile(std::string Filepath){
    std::string Filename;
    MOSFET mosfetProfile;
    if (fs::exists(Filepath) && fs::is_directory(Filepath)) {
        /* user can choose what profile to load */
        std::cout << "Input filename" << std::endl;
        std::cin >> Filename; 
        Filepath = Filepath + '/' + Filename;

        std::ifstream file(Filepath); /* opens file */
        if (file) {
             file >> mosfetProfile.name 
                  >> mosfetProfile.Type 
                  >> mosfetProfile.Vgs 
                  >> mosfetProfile.Vds 
                  >> mosfetProfile.Id 
                  >> mosfetProfile.Rds_on 
                  >> mosfetProfile.threshold 
                  >> mosfetProfile.power 
                  >> mosfetProfile.gateCharge;

            file.close();
            std::cout << "Profile loaded from " << Filepath << std::endl;
        } 
        else {
            std::cerr << "File does not exist" << std::endl;
        }
    } 
    else {
        std::cout << "The folder does not exist." << std::endl;
    }
    return mosfetProfile;
}

std::string ProfileLocation(){
        std::string FilePath;
        std::cout << "Input filepath" << std::endl;
        getline(std::cin,FilePath);
        if (fs::exists(FilePath) && fs::is_directory(FilePath)) {
            std::cout << "Directory already exists" << std::endl;
        }
        else{
            if (fs::create_directory(FilePath)) {
                std::cout << "Directory created successfully: " << FilePath << std::endl;
            } else {
                std::cerr << "Failed to create the directory" << std::endl;
            }
        }
        return FilePath;
}