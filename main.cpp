#include <iostream>
#include <fstream>
#include <string.h>

#include "definitions.h"
#include "file_reading.h"

int main(int argc, char** argv)
{
    specie H2O("water","H2O",std::vector<unsigned int>{2,0,0,1});
    H2O.param.enthalpy_formation = 200;
    H2O.param.molar_mass = 18;

    read_specie("H2O");
}