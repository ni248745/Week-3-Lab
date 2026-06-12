#include <stdio.h>

void get_temperature(double *temp);
void get_numbers(int *x, int *y, int *z);
int clamp(int value, int low, int high);
int absolute_value(int x);
double celsius_to_fahrenheit(double c);
int is_even(int n);
void print_results(double tempC, double tempF, int input, int upper, int lower, int clamped, int abso, int iseven);

int main(void){
    double temperature_in_c, temperature_in_f;
    get_temperature(&temperature_in_c);
    temperature_in_f = celsius_to_fahrenheit(temperature_in_c);

    int input_number, lower_bound, upper_bound;
    get_numbers(&input_number, &lower_bound, &upper_bound);

    int clamped_num = clamp(input_number, lower_bound, upper_bound);
    int abso_num = absolute_value(input_number);
    int num_even = is_even(input_number);//will be 1 if even, 0 if odd 

    print_results(temperature_in_c, temperature_in_f, input_number, upper_bound, lower_bound, clamped_num, abso_num, num_even);

    return 0;
}


void get_temperature(double *temp){
    printf("Input your temperature in °C: ");
    fscanf(stdin, "%lf", temp);
    return;
}

void get_numbers(int *x, int *y, int *z){
    printf("Input your random integer: ");
    fscanf(stdin, "%d", x);
    printf("Input you lower bound: ");
    fscanf(stdin, "%d", y);
    printf("Input your upper bound: ");
    fscanf(stdin, "%d", z);
    return;
}

int clamp(int value, int lower_bound, int upper_bound){
    //Returns value if in range; low if too small; high if too large
    if(value < lower_bound){ //too small
        return lower_bound;
    } else if (value > upper_bound){ //too big 
        return upper_bound;
    } else { //just right 
        return value;
    }
}

double celsius_to_fahrenheit(double c){
    double f; 
    f = c*9.0/5.0 + 32;
    return f;
}

int absolute_value(int x){
    if(x<0) x*=-1;
    return x;
}

int is_even(int x){
    if(x%2) return 0;
    return 1;
}

void print_results(double tempC, double tempF, int input, int upper, int lower, int clamped, int abso, int iseven){

    printf("\n-============================-\n");
    printf("Temperature in °C: %.2lf\n", tempC);
    printf("Temperature in °F: %.2lf\n", tempF);
    printf("-============================-\n");
    printf("Your input number: %d\n", input);
    printf("Your range: %d - %d\n", lower, upper);
    printf("your clameped number: %d\n", clamped);
    printf("-============================-\n");
    printf("Your input number: %d\n", input);
    printf("Your absolute value: %d\n", abso);
    printf("Is your number even? ");
    if(iseven) {
        printf("Yes\n");
    } else {
        printf("No.\n");
    }
    printf("-============================-\n\n");



    return; 
}