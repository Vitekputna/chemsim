#pragma once
#include <vector>
#include <string>

struct chem_parameters
{
    double molar_mass;
    double enthalpy_formation;
};

struct composition
{
    std::vector<std::string> atomic_names = {"H","C","N","O"};
    std::vector<unsigned int> atomic_composition = {0,0,0,0};
};

struct specie
{
    specie(std::string name_, std::string chem_name_, std::vector<unsigned int> atomic_counts);

    std::string name = "";
    std::string chem_name = "";

    chem_parameters param;
    composition comp;
};


