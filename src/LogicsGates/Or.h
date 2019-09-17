//
// Created by thoth on 8/5/19.
//

#ifndef GENNETICPROGRAMMING_OR_H
#define GENNETICPROGRAMMING_OR_H

#include <vector>
#include "../Neuron.h"

class Or : public Neuron{

public:
    Or();
};

Or::Or() : Neuron(weights) {
    weights = {0.1, 0.1, -0.1};
}

#endif //GENNETICPROGRAMMING_OR_H
