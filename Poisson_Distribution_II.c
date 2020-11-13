//  p = ((lambda^k)*e^(-lambda))/fact(k);
// e = 2.71828;
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float X,Y,Ca,Cb,e;
    e = 2.71828;
    scanf("%f %f",&X,&Y);
    Ca = 160+(40*(X+pow(X,2)));
    Cb = 128+(40*(Y+pow(Y,2)));
    printf("%.3f \n",Ca);
    printf("%.3f",Cb);
    return 0;
}
