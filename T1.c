#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include <C:\Users\PERRINE\Documents\DGATA\Astro\astro.h>
#include <math.h>

double getSchwarzschild(double masse, double vitesse, int param);

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}
 
int clean_suite(void) {
    return 0;
}

void testGetSchwarzschild1() {
    double masse = 1.0;
    double vitesse = 1.0;
    int param = 1.0;
    double result = getSchwarzschild(masse, vitesse, param);
    
    CU_ASSERT_DOUBLE_EQUAL(result, 1.335e-010, 1e-013);
    
  }
void testGetSchwarzschild2() {
    double masse = 10.0;
    double vitesse = 3.0;
    int param = 0.0;
    double result = getSchwarzschild(masse, vitesse, param);

    CU_ASSERT_DOUBLE_EQUAL(result, 0, 1e-013);
    
  }
void testGetSchwarzschild3() {    
    double masse = 6.0;
    double vitesse = 0.0;
    int param = 2.0;
    double result = getSchwarzschild(masse, vitesse, param);
    
    CU_ASSERT_DOUBLE_EQUAL(result, 0, 1e-013);
  }
void testGetSchwarzschild4() {    
    double masse = -3.0;
    double vitesse = 4.0;
    int param = 1.0;
    double result = getSchwarzschild(masse, vitesse, param);
  
    CU_ASSERT_DOUBLE_EQUAL(result, 0, 1e-013);    
  }

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("TestFonction", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }
    
    /* Add the tests to the suite */
    if (    (NULL == CU_add_test(pSuite, "testGetSchwarzschild1", testGetSchwarzschild1)) ||
            (NULL == CU_add_test(pSuite, "testGetSchwarzschild2", testGetSchwarzschild2)) ||
            (NULL == CU_add_test(pSuite, "testGetSchwarzschild3", testGetSchwarzschild3)) ||
            (NULL == CU_add_test(pSuite, "testGetSchwarzschild4", testGetSchwarzschild4)) ||
            (NULL == CU_add_test(pSuite, "testGetSchwarzschild5", testGetSchwarzschild5))
            
        ) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
