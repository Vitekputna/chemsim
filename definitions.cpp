#include "definitions.h"
#include <string.h>

specie::specie(std::string name_, std::string chem_name_, std::vector<unsigned int> atomic_counts) : name{name_}, chem_name{chem_name_}
{
    comp.atomic_composition = atomic_counts;
}