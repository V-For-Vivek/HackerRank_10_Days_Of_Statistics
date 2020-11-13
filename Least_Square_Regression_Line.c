#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n=5,sumX=0,sumY=0;
    int *xi = malloc(n*sizeof(int));
    int *yi = malloc(n*sizeof(int));
    double xMean,yMean,a,b,y,squareX,sumXY;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&xi[i],&yi[i]);
    }
    for(int i=0;i<n;i++)
    {
        sumX += xi[i];
        sumY += yi[i];
        squareX += pow(xi[i],2);
        sumXY += xi[i]*yi[i];
    }
    xMean = sumX/n;
    yMean = sumY/n;

    b = (n*sumXY-sumX*sumY)/(n*squareX-pow(sumX,2));
    a = yMean-b*xMean;
    y = a+b;
    
    printf("%.3lf",(a+b*80));
    return 0;
}
