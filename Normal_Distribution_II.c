#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double res,mean,sigma,q1,q2;

    scanf("%lf %lf %lf %lf", &mean, &sigma, &q1, &q2);

    res = (q1 - mean)/(sqrt(2)*sigma);
    res = 0.5*(1+erf(res));

    printf("%.2lf\n",(1-res)*100);

    res = (q2 - mean)/(sqrt(2)*sigma);
    res = 0.5*(1+erf(res));

    printf("%.2lf\n",(1-res)*100);

    res = (q2 - mean)/(sqrt(2)*sigma);
    res = 0.5*(1+erf(res));

    printf("%.2lf\n",res*100);

    return 0;
}
