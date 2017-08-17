//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_SUM_H
#define ELABORATO_SUM_H



#include "Cell.h"
#include "Formula.h"

class Sum : public Formula {
public:
    Sum(Cell* ptr) : Formula(ptr){}
    virtual void calc() override;

};


#endif //ELABORATO_SUM_H
