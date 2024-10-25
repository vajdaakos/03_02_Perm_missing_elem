#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unity.h"

int solution(int A[], int N)
{
    if(N==0)
        return 1;
    int exp = (N+1)*(N/2);
    if(N%2==1)
        exp += N/2+1;
    int sum = 0;
    for(int i =0;i<N;++i)
    {
      sum += A[i];
    }
    return N-(sum-exp)+1;
}



void setUp(void) 
{
    printf("\nUnity Test started.\n");
}

void tearDown(void) 
{
    printf("\nUnity Test ended.\n");
}
void odd_occurrences_in_array(void) 
{
    int A2_1[] = {2,3};
    int A2_2[] = {1,3};

    int A3_1[] = {3,2,4};
    int A3_2[] = {1,3,4};
    int A3_3[] = {1,2,4};
    int A4_4[] = {1,2,3,5};
    int A5_5[] = {1,2,3,4,6};
    TEST_ASSERT_EQUAL_INT( 1, solution(A2_1,2));
    TEST_ASSERT_EQUAL_INT( 2, solution(A2_2,2));

    TEST_ASSERT_EQUAL_INT( 1, solution(A3_1,3));
    TEST_ASSERT_EQUAL_INT( 2, solution(A3_2,3));
    TEST_ASSERT_EQUAL_INT( 3, solution(A3_3,3));

    TEST_ASSERT_EQUAL_INT( 4, solution(A4_4,4));
    TEST_ASSERT_EQUAL_INT( 5, solution(A5_5,5));
}

int main()
{

    UNITY_BEGIN();
    RUN_TEST(odd_occurrences_in_array);
    return UNITY_END();
}
