#include<stdio.h>
int main(){
    float celsius , fahrenheit;
    printf(" Enter a tremperature inn calsius");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5+32);
    printf("Temperature in celsius:%.2f\n",celsius);
    printf("Temperature in Fahrenhheit:%2f\n", fahrenheit);
    return 0;
}