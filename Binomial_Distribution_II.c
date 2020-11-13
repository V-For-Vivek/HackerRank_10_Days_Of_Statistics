#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int num)
{
    if(num==0) 
        return 1;
    else 
        return num*fact(num-1);
    
}

float bio_dist(int x,int num,float p)
{
    double combination;
    combination = (fact(num)/(fact(x)*fact(num-x)));
    return combination*pow(p,x)*(pow((1-p),(num-x)));
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    float b,p;
    scanf("%f%d",&p,&n);
    p = p/100;
    b = 0;

    for(int i=0;i<3;i++)
        b += bio_dist(i,n,p);
    printf("%.3f\n",b);
    
    b = 0;

    for(int i=2;i<n+1;i++)
        b += bio_dist(i,n,p);
    printf("%.3f",b);
    
}
