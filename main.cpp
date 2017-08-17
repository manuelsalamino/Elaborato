
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/qheaderview.h>
#include "Cell.h"
#include "Formula.h"
#include "Mean.h"
#include "Min.h"
#include "Max.h"
#include "Sum.h"

int main(int argc, char **argv)  {

    QApplication app(argc, argv);
    //creo finestra
    QMainWindow *window = new QMainWindow();
    window->setWindowTitle(QString::fromStdString("EsameLaboratorio"));
    window->resize(550, 300);

    QTableWidget *table = new QTableWidget(4, 5);
    table->setHorizontalHeaderLabels(QString("NUMERI; SUM; MEAN; MIN; MAX").split(";"));
    Cell *cell1 = new Cell();
    Cell *cell2 = new Cell();
    Cell *cell3 = new Cell();
    Cell *cell4 = new Cell();
    cell1->setValue(3.4);
    cell2->setValue(2.0);
    cell3->setValue(8.1);
    cell4->setValue(3.0);
    table->setItem(0, 0, cell1);
    table->setItem(1, 0, cell2);
    table->setItem(2, 0, cell3);
    table->setItem(3, 0, cell4);

    //colori vari
    QPalette p = table->palette();
    p.setColor(QPalette::Base, Qt::gray);//tutto
    p.setColor(QPalette::Text, Qt::black);
    table->setStyleSheet("QHeaderView::section{background-color:red}");
    table->setPalette(p);

    Cell *sumCell = new Cell();
    table->setItem(0,1, sumCell);
    Sum *sumFormula = new Sum(sumCell);
    sumFormula->addCell(cell1);
    sumFormula->addCell(cell2);
    sumFormula->addCell(cell3);
    sumFormula->addCell(cell4);

    Cell* meanCell = new Cell();
    table->setItem(0,2, meanCell);
    Mean *mean = new Mean(meanCell);
    mean->addCell(cell1);
    mean->addCell(cell2);
    mean->addCell(cell3);
    mean->addCell(cell4);

    Cell* minCell = new Cell();
    table->setItem(0,3, minCell);
    Min *min = new Min(minCell);
    min->addCell(cell1);
    min->addCell(cell2);
    min->addCell(cell3);
    min->addCell(cell4);

    Cell* maxCell = new Cell();
    table->setItem(0,4,maxCell);
    Max* max = new Max(maxCell);
    max->addCell(cell1);
    max->addCell(cell2);
    max->addCell(cell3);
    max->addCell(cell4);




    table->show();
    window->setCentralWidget(table);
    window->show();
    return app.exec();

}
