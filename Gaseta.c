#include <stdio.h>
#include <stdlib.h>

int calculate(float Gas, float Eta);
int main(void) {
    float Gas, Eta;
    int Result;
    printf("#######-Ethanol Calculation-#######\n");
    printf("Enter the price of Gasoline: \n");
    scanf("%f", &Gas);

    printf("Enter the price of Ethanol:\n");
    scanf("%f", &Eta);
 
    Result = calculate(Gas, Eta);

    if (Result == 1) {
        printf("Fill up with Gasoline, it's more economical!\n");
    } else if (Result == 2) {
        printf("Fill up with Ethanol, it's more advantageous!\n");
    } else {
        printf("It doesn't matter what you choose, as the prices are the same!\n");
    }

    return 0;
}

int calculate(float Gas, float Eta) {
    float Cal;
    Cal = Gas * 0.7;
    if (Cal < Eta) {
        return 1;
    } else if (Cal > Eta) {
        return 2;
    } else {
        return 3;
    }
}
