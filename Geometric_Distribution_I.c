#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float n;
    float num,den,p,q,g;
    scanf("%f%f",&num,&den);
    p = num/den;
    scanf("%f",&n);
    q = 1-p;
    g = pow(q,(n-1))*p;
    printf("%.3f",g);
    return 0;
}
