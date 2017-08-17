//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_SUBJECT_H
#define ELABORATO_SUBJECT_H

#include "Observer.h"
class Subject {
public:
    virtual ~Subject() {}
    virtual void notify()=0;
    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer*o)=0;
};

#endif //ELABORATO_SUBJECT_H
