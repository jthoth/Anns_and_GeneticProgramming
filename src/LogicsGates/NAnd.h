//
// Created by thoth on 8/5/19.
//

#ifndef GENNETICPROGRAMMING_NAND_H
#define GENNETICPROGRAMMING_NAND_H

#include <vector>
#include "Not.h"
#include "And.h"

class NAnd {
    And and_; Not not_;

public:
    float forward(std::vector<float> data);
};

float NAnd::forward(std::vector<float> data){
    data = {this->and_.forward(data), 1};
    return this->not_.forward(data);
}

#endif //GENNETICPROGRAMMING_NAND_H
