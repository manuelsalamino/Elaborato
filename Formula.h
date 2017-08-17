//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_FORMULA_H
#define ELABORATO_FORMULA_H


#include "Observer.h"
#include "Cell.h"
#include <list>

class Formula : public Observer  {
public:
    explicit Formula(Cell* ptr): ptr(ptr){}
    float getvalue() const;
    virtual void update() override;
    virtual void addCell(Cell* cel) ;
    virtual void removeCell(Cell* cel) ;
    virtual void calc() = 0;

protected:
    float value;
    std::list<Cell*> cell;
    Cell* ptr;
};


#endif //ELABORATO_FORMULA_H
