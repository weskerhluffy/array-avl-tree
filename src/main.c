

/* This is auto-generated code. Edit at your own peril. */
#include <stdio.h>
#include "CuTest.h"


extern void TestAVLTree_new_has_zero_nodes(CuTest*);
extern void TestAVLTree_insert_increases_count(CuTest*);
extern void TestAVLTree_remove_increases_count(CuTest*);
extern void TestAVLTree_insert_increases_height(CuTest*);
extern void TestAVLTree_rotate_left_keeps_count(CuTest*);
extern void TestAVLTree_rotate_right_keeps_count(CuTest*);
extern void TestAVLTree_double_rotate_keeps_count(CuTest*);
extern void TestAVLTree_inserting_a_list_maintains_logn_height(CuTest*);
extern void TestAVLTree_remove_keeps_tree_balanced(CuTest*);


void RunAllTests(void) 
{
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();


    SUITE_ADD_TEST(suite, TestAVLTree_new_has_zero_nodes);
    SUITE_ADD_TEST(suite, TestAVLTree_insert_increases_count);
    SUITE_ADD_TEST(suite, TestAVLTree_remove_increases_count);
    SUITE_ADD_TEST(suite, TestAVLTree_insert_increases_height);
    SUITE_ADD_TEST(suite, TestAVLTree_rotate_left_keeps_count);
    SUITE_ADD_TEST(suite, TestAVLTree_rotate_right_keeps_count);
    SUITE_ADD_TEST(suite, TestAVLTree_double_rotate_keeps_count);
    SUITE_ADD_TEST(suite, TestAVLTree_inserting_a_list_maintains_logn_height);
    SUITE_ADD_TEST(suite, TestAVLTree_remove_keeps_tree_balanced);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main()
{
    RunAllTests();
    return 0;
}

