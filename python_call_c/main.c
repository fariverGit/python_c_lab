#include <stdio.h>
#include <stdlib.h>

int main(void){
    //int x;
    //printf("Input an integer:\n");
    //scanf("%d", &x);
    //printf("sum=%d\n", sum(x));
    //
    //for testing sum_array function in sum.c
    int array[] = {1,2,3,4,5};
    int sum = sum_array(array, 5);
    printf("sum of array: %d", sum);
    return 0;
};

