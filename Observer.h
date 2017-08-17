//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_OBSERVER_H
#define ELABORATO_OBSERVER_H

class Observer {
public:

    virtual ~Observer() {}
    virtual void update()=0;

};

#endif //ELABORATO_OBSERVER_H
