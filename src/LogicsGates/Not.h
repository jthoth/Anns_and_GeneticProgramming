//
// Created by thoth on 8/5/19.
//

#ifndef GENNETICPROGRAMMING_NOT_H
#define GENNETICPROGRAMMING_NOT_H

#include "../Neuron.h"

class Not : public Neuron{
public:
    Not();
};

Not::Not(): Neuron(weights) {
    weights = {-2, 1};
}

#endif //GENNETICPROGRAMMING_NOT_H
