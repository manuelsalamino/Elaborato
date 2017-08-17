//
// Created by utente on 20/01/2017.
//


#include <gtest/gtest.h>
#include "../Cell.h"

TEST(CellTest, CellValue){
Cell p;
p.setValue(5);
ASSERT_EQ(5,p.getValue().toFloat());
}