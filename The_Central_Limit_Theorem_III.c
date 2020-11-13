#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    double n,mean,sd,interval,z;
    scanf("%lf %lf %lf %lf %lf", &n, &mean, &sd, &interval, &z);
    printf("%.2lf\n",(mean - (sd/sqrt(n))*z));
    printf("%.2lf",(mean + (sd/sqrt(n))*z));
    return 0;
}
