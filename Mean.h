//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_MEAN_H
#define ELABORATO_MEAN_H


#include "Formula.h"

class Mean : public Formula {
public:
    Mean(Cell* ptr) : Formula(ptr) {}
    virtual void calc() override;

};

#endif //ELABORATO_MEAN_H
