//
// Created by utente on 26/10/2016.
//

#include "Cell.h"


Cell::Cell(float v) : value(v) {}

QString Cell::getValue() const {
    return QTableWidgetItem::text();
}

void Cell::setValue(float v) {
    QString s = QString::fromStdString(std::to_string(v));
    this->setText(s);
    notify();
}

void Cell::setText(const QString &text) {
    QTableWidgetItem::setText(text);
    notify();
}

Cell::~Cell() {

}

void Cell::setData(int role, const QVariant &value) {
    QTableWidgetItem::setData(role, value);
    notify();
}

Cell *Cell::clone() const {
    return new Cell(*this);
}

void Cell::notify() {
    for (auto itr = observers.begin(); itr!=observers.end(); ++ itr) {
        (*itr)->update();

    }
}

void Cell::subscribe(Observer *o) {
    observers.push_back(o);

}

void Cell::unsubscribe(Observer *o) {
    observers.remove(o);
}