#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double pcc(double* xi,double* yi,int n)
{
    double xmean,ymean,res,xsd,ysd;

    xmean = ymean = 0;
    
    for(int i=0;i<n;i++)
    {
        xmean += xi[i];
        ymean += yi[i];
    }
    xmean = xmean / n;
    ymean = ymean / n;
    res = 0;
    
    for(int i=0;i<n;i++)
    {
        res += (xi[i]-xmean)*(yi[i]-ymean);
    }
    for(int i=0;i<n;i++)
    {
        xsd += pow(xi[i]-xmean,2);
        ysd += pow(yi[i]-ymean,2);        
    }
    xsd = sqrt(xsd/n);
    ysd = sqrt(ysd/n);

    return (res/(n*xsd*ysd));
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    double x[n],y[n];

    for(int i=0;i<n;i++)
    {
        scanf("%lf",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&y[i]);
    }
    printf("%.3lf",pcc(x,y,n));
    return 0;
}
