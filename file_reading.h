#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <filesystem>

#include "definitions.h"

std::string read_between(std::string str, char from, char to)
{
    bool start = false, end = false;
    std::string res;

    for(auto const& c : str)
    {
        if(c == ';')
        {
            return "";
        }
        if(c == to)
        {
            end = true;
            return res;
        }

        if(start && !end)
        {
            res.push_back(c);
        }

        if(c == from)
        {
            start = true;
        }
    }

    return "";
}

std::vector<double> read_multiple_between(std::string str, char from, char del, char to)
{
    bool start = false, end = false;
    std::string word;
    std::vector<double> res;

    for(auto const& c : str)
    {
        if(c == ';')
        {
            return std::vector<double>{};
        }

        if(c == to)
        {
            //std::cout << word << "\n";
            res.push_back(std::stod(word));
            end = true;
            return res;
        }

        if(c == from)
        {
            start = true;
            continue;
        }

        if(c == del)
        {
            //std::cout << word << "\n";
            res.push_back(std::stod(word));
            word.clear();
            continue;
        }

        if(start && !end)
        {
            word.push_back(c);
        }
    }

    return std::vector<double>{};
}

std::string read_first_word(std::string str)
{
    std::string res;

    for(auto const& c : str)
    {
       if(c == ' ' || c == '=')
       {
            return res;
       }

       res.push_back(c);
    }

    return "";
}

specie parse_from_data()
{
    
}

bool read_specie(std::string chem_name)
{
    std::string path = "species/";

    for(auto const& entry : std::filesystem::directory_iterator(path))
    {
        std::string name = entry.path().c_str();
        std::cout << name.substr(8) << "\n";

    }
    
    return true;
}