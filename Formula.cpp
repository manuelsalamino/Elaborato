//
// Created by utente on 26/10/2016.
//


#include "Formula.h"

void Formula::addCell(Cell *cel) {
    cell.push_back(cel);
    cel->subscribe(this);
    update();
}

float Formula::getvalue() const {
    return value;
}

void Formula::removeCell(Cell *cel) {
    cell.remove(cel);
    cel->unsubscribe(this);
    update();
}

void Formula::update() {
    calc();
}