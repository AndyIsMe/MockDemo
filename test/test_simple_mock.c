#include "unity.h"
#include "simple_mock.h"
#include "mock_multiplydivide.h"

void setUp(void){}
void tearDown(void){}

void test_simple_mock_(void)
{   int result;
  multiply_ExpectAndReturn(2,3,7);
   divide_ExpectAndReturn(10,5,2);
   result = addMultiplyAndDivide(2,3,10,5);
   TEST_ASSERT_EQUAL(9,result);
   }
