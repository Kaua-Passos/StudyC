#include <stdio.h>
#include <stdlib.h>
int main(void){

    int N1;
    int N2;
    int N3;
    float N4;

    printf("Enter a value to be multiplied:\n");
    scanf("%d", &N1);
    printf("Enter the value to multiply by:\n");
    scanf("%d", &N2);
    N3 = (int) (N1 * N2);
    N4 = (float) N3 / 100.0; 
    // Always use a double or float number
    // Previously it was giving an error, as the result was 0.000000
    // Because there was no float or double number in N3/100.0 
    // it was N3/100 which is integer, 100.0 is float! 
    printf("The value of %d x %d is: %d\n", N1, N2, N3);
    printf("The division of %d by 100 is: %.3f", N3 , N4);
    return 0;
}
