//
// Created by Wei on 9/07/2017.
//

#include <goldEgg.hpp>
#include "store.hpp"


middleManA::VecGoldEggs middleManA::getGoldEggs(int num, double weight) {
    middleManA::VecGoldEggs vec;
    for (int i=0; i<num; i++) {
        vec.push_back(treasure::GoldEgg(weight));
    }
    return vec;
}
