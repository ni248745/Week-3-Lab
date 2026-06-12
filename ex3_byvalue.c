#include <stdio.h>

void triple(int x);
int triple_return(int x);
void add_ten(int a, int b);

int main(void){

    int n = 7;

    triple(n);
    printf("n after triple(n): %d\n", n);
    int result = triple_return(n);
    printf("result: %d, n: %d\n", result, n);

    int a = 3;
    int b = 9;
    add_ten(a,b);
    printf("After function runs, in main: a = %d, b = %d\n", a, b);


    return 0;
}

void triple(int x){
    x *= 3;
    return;
}

int triple_return(int x){
    return x*=3;
}

void add_ten(int a, int b){
    a += 10;
    b += 10;
    printf("Inside the add ten function: a = %d, b = %d\n", a, b);
    return;
}