#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    double *x = malloc(n*sizeof(double));
    double *y = malloc(n*sizeof(double));
    int *rankX = malloc(n*sizeof(int));
    int *rankY = malloc(n*sizeof(int));
    double *testX = malloc(n*sizeof(double));
    double *testY = malloc(n*sizeof(double));
    
    // Reading Input from console
    // and Putting in test X and Y array.
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&x[i]);
        testX[i] = x[i];
        rankX[i] = 1;
        
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&y[i]);
        testY[i] = y[i];
        rankY[i] = 1;    
    }

    // sorting test X and Y array.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(testX[j]>testX[j+1])
            {
                double tmp = testX[j];
                testX[j] = testX[j+1];
                testX[j+1] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(testY[j]>testY[j+1])
            {
                double tmp = testY[j];
                testY[j] = testY[j+1];
                testY[j+1] = tmp;
            }
        }
    }

    //getting rank of X and Y.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x[i] == testX[j])
            {
                rankX[i] = j+1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(y[i] == testY[j])
            {
                rankY[i] = j+1;
            }
        }
    }

    // Perfoming Superman's Rank Correlation Formula 
    double *di = malloc(n*sizeof(double));
    double res = 0;
    for(int i=0;i<n;i++)
    {
        di[i] = rankX[i] - rankY[i];
        di[i]=pow(di[i],2);
        res+=di[i];
    }

    res = 1-(6*res)/(n*((pow(n,2))-1));
    printf("%.3lf",res);

    return 0;
}
