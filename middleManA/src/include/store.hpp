//
// Created by Wei on 9/07/2017.
//

#ifndef CXXCLEANBUILDEXAMPLES_STORE_HPP
#define CXXCLEANBUILDEXAMPLES_STORE_HPP

#include <vector>

#include <goldEgg.hpp>


namespace middleManA {

using VecGoldEggs = std::vector<treasure::GoldEgg>;

VecGoldEggs getGoldEggs(int num, double weight);

}


#endif //CXXCLEANBUILDEXAMPLES_STORE_HPP
