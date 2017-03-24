#include <stdio.h>
#include <stdlib.h>

int sum(int x){
    int i, result=0;
    for(i=0; i<=x; i++){
        result+=i;
        }
    if(x > 100)
        exit(-1);
    return result;
};

void display(char* msg){
    printf("%s\n",msg);
}
  
int add(float a,float b){
    return a+b;
}

int sum_array(int array[], int num){
    int i =0, sum = 0; 
    for(i=0; i<num; ++i) 
        sum += array[i];
    return sum;
}

void modify_array(int array[], int num){
    int i =0, sum = 0; 
    for(i=0; i<num; ++i) 
        array[i] *= 10;
}
