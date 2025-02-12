#ifndef MOSFETPROFILES_H
#define MOSFETPROFILES_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include "MOSFET.h"

namespace fs = std::filesystem;

void SaveProfile(std::string Filepath, MOSFET mosfetProfile);
MOSFET LoadProfile(std::string Filepath);

std::string ProfileLocation();

#endif // MOSFETPROFILES_H