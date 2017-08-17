//
// Created by utente on 26/10/2016.
//

#include "Sum.h"

void Sum::calc() {
    float x = 0;
    for (auto itr = cell.begin(); itr != cell.end(); ++itr)
        x += ((*itr)->getValue().toFloat());
    value = x;
    ptr->setValue(value);

}