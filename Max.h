//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_MAX_H
#define ELABORATO_MAX_H

#include "Formula.h"

class Max : public Formula {
public:
    Max(Cell* ptr) : Formula(ptr) {}
    virtual void calc() override;
};


#endif //ELABORATO_MAX_H
