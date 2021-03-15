#include <unity.h>
#include <calculator_operations.h>
#include<conversion.h>
#include<stat_invest.h>
//#include<differentation.h>
//#include<conio.h>
/* Modify these two lines according to the project */
//#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void); 
void test_multiply(void);
void test_divide(void);
//<<<<<<< HEAD
//void test_D2B(void);
//void test_D2O(void);
//void test_india(void);
//void test_dollar(void);
void test_stat(void);
void test_bmi(void);
void test_mean(void);
void test_mode(void);
void test_ci(void);
void test_si(void);
void test_add1(void);
void test_add2(void);
void test_add3(void);
void test_add4(void);
void test_add5(void);
void test_add6(void);
void test_add7(void);
void test_subtract2(void);
void test_subtract3(void);
void test_subtract4(void);
void test_subtract5(void);
void test_subtract6(void);
void test_subtract7(void);
void test_subtract8(void);
void test_multiply1(void);
void test_multiply2(void);
void test_multiply3(void);
void test_multiply4(void);
void test_multiply5(void);
void test_multiply6(void);
void test_multiply7(void);
void test_bmi1(void);
void test_bmi2(void);
void test_bmi3(void);
void test_bmi4(void);
void test_divide1(void);
void test_divide2(void);
void test_divide3(void);
void test_divide4(void);
void test_divide5(void);



//>>>>>>> 2bee00454dda1b81f225873c06c62219de9e19ba
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
//<<<<<<< HEAD
  //RUN_TEST(test_D2B);
  //RUN_TEST(test_D2O);
  //RUN_TEST(test_india);
  //RUN_TEST(test_dollar);
  //RUN_TEST(test_stat);

  //RUN_TEST(test_bmi);

  RUN_TEST(test_si);
  RUN_TEST(test_ci);
  RUN_TEST(test_mean);
  RUN_TEST(test_mode);
  RUN_TEST(test_add1);
  RUN_TEST(test_add2);
  RUN_TEST(test_add3);
  RUN_TEST(test_add4);
  RUN_TEST(test_add5);
  RUN_TEST(test_add6);
  RUN_TEST(test_add7);
  //RUN_TEST(test_subtract1);
  RUN_TEST(test_subtract2);
  RUN_TEST(test_subtract3);
  RUN_TEST(test_subtract4);
  RUN_TEST(test_subtract5);
  RUN_TEST(test_subtract6);
  RUN_TEST(test_subtract7);
  RUN_TEST(test_subtract8);
  RUN_TEST(test_multiply1);
  RUN_TEST(test_multiply2);
  RUN_TEST(test_multiply3);
  RUN_TEST(test_multiply4);
  RUN_TEST(test_multiply5);
  RUN_TEST(test_multiply6);
  RUN_TEST(test_multiply7);
  RUN_TEST(test_divide1);
  RUN_TEST(test_divide2);
  RUN_TEST(test_divide3);
  RUN_TEST(test_divide4);
  RUN_TEST(test_divide5);
  RUN_TEST(test_bmi1);
  RUN_TEST(test_bmi2);
  RUN_TEST(test_bmi3);
  RUN_TEST(test_bmi4);
  
//>>>>>>> 2bee00454dda1b81f225873c06c62219de9e19ba

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
/*
void test_stat(void)
{
   TEST_ASSERT_EQUAL(2, meann(2,2));
}
*/
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20)); 
}
void test_add1(void)
{
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}

void test_add2(void)
{
  TEST_ASSERT_EQUAL(-20, add(10, -30));
}

void test_add3(void)
{
  TEST_ASSERT_EQUAL(-30, add(0, -30));
}

void test_add4(void)
{
  TEST_ASSERT_EQUAL(10, add(10, 0));
}

void test_add5(void)
{
  TEST_ASSERT_EQUAL(-20, add(10, -30));
}

void test_add6(void)
{
  TEST_ASSERT_EQUAL(2, add(1, 1));
}
void test_add7(void)
{
  TEST_ASSERT_EQUAL(1, add(0, 1));
}


void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 750));
}
/*void test_D2B(void)
{
  TEST_ASSERT_EQUAL(11001, D2B(25));
  TEST_ASSERT_EQUAL(11010, D2B(26));
}*/
 void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  TEST_ASSERT_EQUAL(0, subtract(0, 0));
  TEST_ASSERT_EQUAL(300, subtract(600, 300));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_subtract2(void)
{
  TEST_ASSERT_EQUAL(3, subtract(3, 0));
}

void test_subtract3(void)
{
  TEST_ASSERT_EQUAL(-9, subtract(-6, 3));
}

void test_subtract4(void)
{
  TEST_ASSERT_EQUAL(3, subtract(6, 3));
}

void test_subtract5(void)
{
  TEST_ASSERT_EQUAL(0, subtract(6, 6));
}

void test_subtract6(void)
{
  TEST_ASSERT_EQUAL(3, subtract(16, 13));
}

void test_subtract7(void)
{
  TEST_ASSERT_EQUAL(-3, subtract(13, 16));
}

void test_subtract8(void)
{
  TEST_ASSERT_EQUAL(3, subtract(6, 3));
}

void test_D2B(void)
{
  TEST_ASSERT_EQUAL(11001, D2B(25));
  TEST_ASSERT_EQUAL(11010, D2B(26));
  TEST_ASSERT_EQUAL(11110, D2B(30));
}

/*void test_india(void)
{
  TEST_ASSERT_EQUAL(0.99, india(72));

}
void test_dollar(void)
{
  TEST_ASSERT_EQUAL(72.6,dollar(1));

}*/
void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  TEST_ASSERT_EQUAL(-12, multiply(6, -2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_multiply1(void)
{
   TEST_ASSERT_EQUAL(0, multiply(0, 0));
}

void test_multiply2(void)
{
   TEST_ASSERT_EQUAL(2, multiply(1, 2));
}

void test_multiply3(void)
{
   TEST_ASSERT_EQUAL(2, multiply(2, 1));
}

void test_multiply4(void)
{
  TEST_ASSERT_EQUAL(12, multiply(12, 1));
}

void test_multiply5(void)
{
   TEST_ASSERT_EQUAL(24, multiply(3, 8));
}

void test_multiply6(void)
{
   TEST_ASSERT_EQUAL(210, multiply(21, 10));
}

void test_multiply7(void)
{
   TEST_ASSERT_EQUAL(0, multiply(-1, 0));
}


void test_divide(void) {
  //TEST_ASSERT_EQUAL(0, divide(1, 0));
  TEST_ASSERT_EQUAL(1, divide(50, 50));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}


void test_divide1(void)
{
   TEST_ASSERT_EQUAL(2, divide(2, 1));
}

void test_divide2(void)
{
   TEST_ASSERT_EQUAL(10, divide(100, 10));
}

void test_divide3(void)
{
   TEST_ASSERT_EQUAL(-1, divide(1, -1));
}

void test_divide4(void)
{
   TEST_ASSERT_EQUAL(-2, divide(-4, 2));
}

void test_divide5(void)
{
   TEST_ASSERT_EQUAL(232, divide(464, 2));
}


void test_bmi(void) 
  {
     TEST_ASSERT_EQUAL(74, bmi(74, 1));
     
  }

void test_bmi1(void)
{
  TEST_ASSERT_EQUAL(83, bmi(83, 1));
}

void test_bmi2(void)
{
  TEST_ASSERT_EQUAL(25, bmi(100, 2));
}

void test_bmi3(void)
{
  TEST_ASSERT_EQUAL(20, bmi(80, 2));
}

void test_bmi4(void)
{
  TEST_ASSERT_EQUAL(83, bmi(83, 1));
}


  void test_si(void)
  {
    TEST_ASSERT_EQUAL(8, simple_interest(200,2,2));
  }

  void test_ci(void)
  {
    TEST_ASSERT_EQUAL(8.08, compound_interest(200,2,2));
  }

  void test_mean(void)
  {
    double d[5]={1,2,3,4,5};
    TEST_ASSERT_EQUAL(3, meann(5,d));
  }

  
  void test_mode(void)
  {
    double d[5]={1,2,2,1,1};
    TEST_ASSERT_EQUAL(1, modee(5,d));
  }



