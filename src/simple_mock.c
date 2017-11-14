#include "simple_mock.h"
#include "multiplydivide.h"

/**
  * (v1 * v2) + (v3 / v4)
  */

int addMultiplyAndDivide( int v1,int v2,     /*Multiply */ \
                           int v3,int v4      /*Divide   */ \
                           ){
  int result;
  result = multiply(v1,v2) + divide(v3,v4);
  return result;
 } 