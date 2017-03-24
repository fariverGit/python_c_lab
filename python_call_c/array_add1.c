#include <stdio.h>
#include <stdlib.h>

void add1(int array[], int num)
{
    int i;
    for(i=0; i<num; ++i)
        array[i] += 1;
}
int main(void){
    int array[] = {1,2,3,4,5};
    int i, num=5;
    add1(array, num);
    for(i=0; i<num; ++i)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
};

