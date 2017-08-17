//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_MIN_H
#define ELABORATO_MIN_H


#include "Formula.h"

class Min : public Formula {
public:
    Min(Cell* ptr) : Formula(ptr) {}
    virtual void calc() override ;
};


#endif //ELABORATO_MIN_H
