#include <stdio.h>
int main(void){
    double Celsius,Fahrenheit;
    printf("摂氏を入力: ");
    scanf("%lf",&Celsius);
    Fahrenheit = 9.0 / 5.0 * Celsius + 32.0;
    printf("華氏=%f\n",Fahrenheit);
    return 0;
}