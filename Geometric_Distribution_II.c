#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float n;
    float num,den,p,q,g;
    scanf("%f %f",&num,&den);
    scanf("%f",&n);
    p = num/den;
    q = 1-p;
    for(int i=1;i<n+1;i++)
        g += pow(q,(i-1))*p;
    printf("%.3f",g);
    return 0;
}
