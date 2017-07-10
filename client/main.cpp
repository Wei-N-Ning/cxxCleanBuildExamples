//
// Created by Wei on 9/07/2017.
//

#include <iostream>

#include <store.hpp>
#include <blackMart.hpp>


int main(int argc, char **argv) {
    middleManA::VecGoldEggs vec = middleManA::getGoldEggs(10, 2.13412);
    std::cout << "gold egg weight: " << vec[0].weight() << std::endl;
    std::cout << "total number of gold eggs: " << vec.size() << std::endl;
    treasure::HolyGrail hg = middleManB::makeHolyGrail(true);
    std::cout << "holy grail is empty: " << hg.isEmpty() << std::endl;
    hg.dumpWater();
    std::cout << "holy grail is empty: " << hg.isEmpty() << std::endl;
    return 0;
}