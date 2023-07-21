#include <cstdio>

/*
    %d or %i = signed int to decimal
    %f = float to decimal
    %g = exact
*/

int main(){
    int num1 = 21;
    float num2 = 21.350;
    double num3 = 4.201;

    //%d is same as %i
    printf("Entered number 1 is: %i\n",num1);
    printf("Entered number 2 is: %f\n",num2);

    //1-liner
    printf("Input values were:\n %i\n %f\n %g\n",num1,num2,num3);

    return 0;
}