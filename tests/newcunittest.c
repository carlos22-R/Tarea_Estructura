/*
 * File:   newcunittest.c
 * Author: carlos
 *
 * Created on 25 oct. 2021, 16:29:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../Cola.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testSacar_de_cola() {
    COLA *cola;
    crear_cola(&cola);
    agregar_a_cola(&cola,4);
    agregar_a_cola(&cola,2);
    agregar_a_cola(&cola,6);
    agregar_a_cola(&cola,2);
    TIPO_ELEMENTO result = sacar_de_cola(&cola);
    CU_ASSERT(result==4);
   result = sacar_de_cola(&cola);
   CU_ASSERT(result==2);
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testSacar_de_cola", testSacar_de_cola))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
