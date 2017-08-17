//
// Created by utente on 20/01/2017.
//

#include "lib/googletest/googletest/include/gtest/gtest.h"
#include "../Cell.h"
#include "../Max.h"
#include "../Min.h"
#include "../Mean.h"
#include "../Sum.h"


class FormulaT : public  ::testing::Test {
protected:
    virtual void set() {
        cell1.setValue(0);
        cell2.setValue(5);
        cell3.setValue(7);
        cell4.setValue(8);
    }

    Cell cell1;
    Cell cell2;
    Cell cell3;
    Cell cell4;
};

TEST_F(FormulaT, somma){
Sum f(new Cell());
f.addCell(&cell1);
f.addCell(&cell2);
f.addCell(&cell3);
f.addCell(&cell4);
ASSERT_EQ(20, f.getvalue());

}

TEST_F(FormulaT, max  ){
Max m(new Cell());
m.addCell(&cell1);
m.addCell(&cell2);
m.addCell(&cell3);
m.addCell(&cell4);

ASSERT_EQ(8,m.getvalue());
}

TEST_F(FormulaT, min){
Min m(new Cell());
m.addCell(&cell1);
m.addCell(&cell2);
m.addCell(&cell3);
m.addCell(&cell4);
ASSERT_EQ(0, m.getvalue());
}

TEST_F(FormulaT, mean){
Mean m(new Cell());
m.addCell(&cell1);
m.addCell(&cell2);
m.addCell(&cell3);
m.addCell(&cell4);
ASSERT_EQ(5, m.getvalue());

}