//  p = ((lam^k)*e^(-lam))/fact(k);
// e = 2.71828;
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float lam,x,probability,e;
    e = 2.71828;
    scanf("%f",&lam);
    scanf("%f",&x);
    printf("%.3f",((pow(lam,x)*pow(e,-lam))/fact(x)));
    return 0;
}
