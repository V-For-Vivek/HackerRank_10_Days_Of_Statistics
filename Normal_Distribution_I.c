#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float res,mean,sigma,q1,q21,q22;
    
    scanf("%f %f %f %f %f", &mean, &sigma, &q1, &q21, &q22);
    
    res = (q1 - mean)/(sqrt(2)*sigma);
    res = 0.5*(1+erf(res));

    printf("%.3f\n",res);

    res = (q22 - mean)/(sqrt(2)*sigma);
    q22 = 0.5*(1+erf(res));

    res = (q21 - mean)/(sqrt(2)*sigma);
    q21 = 0.5*(1+erf(res));

    printf("%.3f",q22-q21);

    return 0;  
}
