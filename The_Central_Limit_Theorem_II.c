#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    double x,n,mu,sigma,mu_sum,sigma_sum,res;
    scanf("%lf %lf %lf %lf", &x, &n, &mu, &sigma);
    mu_sum = n * mu;
    sigma_sum = sqrt(n) * sigma;
    res =(x-mu_sum)/(sqrt(2)*sigma_sum);
    res = 0.5*(1+erf(res));
    printf("%.4lf",res);
    return 0;
}
