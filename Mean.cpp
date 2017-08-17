//
// Created by utente on 26/10/2016.
//

#include "Mean.h"


void Mean::calc() {
    float m = 0.;
    for ( auto itr = cell.begin(); itr != cell.end(); ++itr)
        m += ((*itr)->getValue().toFloat());
    m /= cell.size();
    value = m;
    ptr->setValue(value);
}