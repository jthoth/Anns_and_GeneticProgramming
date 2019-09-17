//
// Created by thoth on 8/5/19.
//

#ifndef GENNETICPROGRAMMING_AND_H
#define GENNETICPROGRAMMING_AND_H

#include <vector>
#include "../Neuron.h"

class And : public Neuron{

public:
    And();
};

And::And() : Neuron(weights) {
    weights = {0.1, 0.1, -0.199};
}



#endif //GENNETICPROGRAMMING_AND_H
