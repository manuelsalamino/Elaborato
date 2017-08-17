//
// Created by utente on 26/10/2016.
//

#ifndef ELABORATO_CELL_H
#define ELABORATO_CELL_H


#include "Subject.h"
#include <list>
#include <QtWidgets/QTableWidgetItem>

class Cell: public Subject, public QTableWidgetItem {
public:
    explicit Cell(float v=0.);
    QString getValue()const ;
    void setValue(float v);
    Cell* clone() const override;
    void setData(int role, const QVariant& value);
    virtual ~Cell();
    void setText(const QString& text);
    virtual void notify()override ;
    virtual void subscribe(Observer*o)override ;
    virtual void unsubscribe(Observer*o)override ;

protected:
    float value;
    std::list<Observer*>observers;

};


#endif //ELABORATO_CELL_H
