//
// Created by thoth on 8/5/19.
//

#ifndef GENNETICPROGRAMMING_NEURON_H
#define GENNETICPROGRAMMING_NEURON_H


class Neuron {

protected:
    std::vector<float> weights;
private:
    static float activation(float output);
    void constraintSize(std::vector<float> &data);

public:
    Neuron(std::vector<float> &weights);
    float forward(std::vector<float> &data);
};

Neuron::Neuron(std::vector<float> &weights) {
    this->weights = weights;
}

float Neuron::forward(std::vector<float> &data) {
    constraintSize(data);
    float neuronResponse = 0;
    for(unsigned long i = 0; i < data.size(); ++i) {
        neuronResponse += this->weights[i] * data[i];
    }
    return activation(neuronResponse);
}

float Neuron::activation(float output) {
    if(output >= 0)
        return 1;
    return 0;
}

void Neuron::constraintSize(std::vector<float> &data) {
    if(this->weights.size() != data.size())
        std::cerr << "Wights and DataRows should be equals";
}

#endif