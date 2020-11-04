#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <onlineShoppingCart_operations.h>
#define PROJECT_NAME    "onlineShoppingCart"

/* Prototypes for all the test functions */
void test_cost_of_laptop(void);
void test_cost_of_book(void);
void test_cost_of_mobile(void);
void test_cost_of_camera(void);
void test_onlineShopping(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "cost_of_laptop", test_cost_of_laptop);
  CU_add_test(suite, "cost_of_book", test_cost_of_book);
  CU_add_test(suite, "cost_of_mobile", test_cost_of_mobile);
  CU_add_test(suite, "cost_of_camera", test_cost_of_camera);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_cost_of_laptop(void) {
  CU_ASSERT(35500 == cost_of_laptop(1));

  /* Dummy fail*/
  CU_ASSERT(60990 == cost_of_laptop(2));
}

void test_cost_of_book(void) {
  CU_ASSERT(762 == cost_of_book(1));

  /* Dummy fail*/
  CU_ASSERT(474 == cost_of_book(2));
}

void test_cost_of_mobile(void) {
  CU_ASSERT(71600 == cost_of_mobile(1));

  /* Dummy fail*/
  CU_ASSERT(41999 == cost_of_mobile(2));
}

void test_cost_of_camera(void) {
  CU_ASSERT(140556 == cost_of_camera(1));

  /* Dummy fail*/
  CU_ASSERT(264990 == cost_of_camera(2));
}

void test_onlineShopping(void){
  CU_ASSERT(0 == onlineShopping());
}

