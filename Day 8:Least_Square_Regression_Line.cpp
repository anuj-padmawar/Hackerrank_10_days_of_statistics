#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=5;
    int x[5]={95,85,80,70,60};
    int y[5]={85,95,70,65,70};
    double sum1=0.0;
    double sum2=0.0;

    for(int i=0;i<n;i++)
    {
     sum1+=x[i];
    }
    double mean1=((double)sum1/5);
    
  
    for(int i=0;i<n;i++)
    {
        sum2+=y[i];
    }
    double mean2=((double)sum2/n);
    
    
    double xsq = 0;
    
    for(int i=0;i<n; i++)
    {
        xsq += (x[i]*x[i]);
    }    


    
    double xy = 0;
    for(int i=0; i<n; i++)
    {
        xy += (x[i]*y[i]);
    }
     

    double b = (5.0*xy - sum1*sum2)/(5.0*xsq - sum1*sum1);
    double a = mean2 - b*mean1;
    
    double z=a+b*80;
    cout<<(z);

    return 0;
}

