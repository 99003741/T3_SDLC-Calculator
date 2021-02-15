#include "unity.h"
#include <calculator_operations.h>
#include<conversion.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_D2B(void);
void test_D2O(void);
void test_india(void);
void test_dollar(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_D2B);
  RUN_TEST(test_D2O);
  RUN_TEST(test_india);
  RUN_TEST(test_dollar);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-20, add(10, -30));
  TEST_ASSERT_EQUAL(-30, add(0, -30));
  TEST_ASSERT_EQUAL(10, add(10, 0));
  TEST_ASSERT_EQUAL(-20, add(10, -30));
  TEST_ASSERT_EQUAL(2, add(1, 1));
  TEST_ASSERT_EQUAL(0, add(1, 1));
  TEST_ASSERT_EQUAL(1, add(0, 1));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_D2B(void)
{
  TEST_ASSERT_EQUAL(11001, D2B(25));
  TEST_ASSERT_EQUAL(11010, D2B(26));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  TEST_ASSERT_EQUAL(3, subtract(3, 0));
  TEST_ASSERT_EQUAL(-9, subtract(-6, 3));
  TEST_ASSERT_EQUAL(3, subtract(6, 3));
  TEST_ASSERT_EQUAL(0, subtract(6, 6));
  TEST_ASSERT_EQUAL(0, subtract(0, 0));
  TEST_ASSERT_EQUAL(3, subtract(16, 13));
  TEST_ASSERT_EQUAL(-3, subtract(13, 16));
  TEST_ASSERT_EQUAL(3, subtract(6, 3));
  TEST_ASSERT_EQUAL(300, subtract(600, 300));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}
void test_D2O(void)
{
  TEST_ASSERT_EQUAL(31, D2B(25));
  TEST_ASSERT_EQUAL(32, D2B(26));
}
void test_india(void)
{
  TEST_ASSERT_EQUAL(0.99, india(72));

}
void test_dollar(void)
{
  TEST_ASSERT_EQUAL(72.6,dollar(1));

}
void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  TEST_ASSERT_EQUAL(0, multiply(0, 0));
  TEST_ASSERT_EQUAL(2, multiply(1, 2));
  TEST_ASSERT_EQUAL(2, multiply(2, 1));
  TEST_ASSERT_EQUAL(12, multiply(12, 1));
  TEST_ASSERT_EQUAL(24, multiply(3, 8));
  TEST_ASSERT_EQUAL(210, multiply(21, 10));
  TEST_ASSERT_EQUAL(-1, multiply(-1, 0));
  TEST_ASSERT_EQUAL(-12, multiply(6, -2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  TEST_ASSERT_EQUAL(1, divide(50, 50));
  TEST_ASSERT_EQUAL(2, divide(2, 1));
  TEST_ASSERT_EQUAL(10, divide(100, 10));
  TEST_ASSERT_EQUAL(-1, divide(1, -1));
  TEST_ASSERT_EQUAL(-0.5, divide(-1, 2));
  TEST_ASSERT_EQUAL(232, divide(464, 2));
  TEST_ASSERT_EQUAL(-20, divide(-20, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
