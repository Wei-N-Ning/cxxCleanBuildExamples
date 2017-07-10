//
// Created by Wei on 9/07/2017.
//

#ifndef CXXCLEANBUILDEXAMPLES_STORE_HPP
#define CXXCLEANBUILDEXAMPLES_STORE_HPP

#include <vector>

#include <goldEgg.hpp>


namespace middleManA {

using VecGoldEggs = std::vector<treasure::GoldEgg>;

VecGoldEggs getGoldEggs(int num=1, double weight=1.0);

}


#endif //CXXCLEANBUILDEXAMPLES_STORE_HPP
