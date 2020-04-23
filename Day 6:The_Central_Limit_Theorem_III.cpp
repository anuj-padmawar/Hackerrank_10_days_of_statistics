#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double normal_dist(double m, double sd, double x)
{

     //Z=(X- µ) / α /√n
     //https://www.statisticshowto.com/probability-and-statistics/normal-distributions/central-limit-theorem-definition-examples/
    double p = 0.5*(1 + erf((x-m)/(sd*sqrt(2.0))));
    return p;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    double mean=500,std=80,z=1.96;
    int n =100;

    double x=z*std/sqrt(n);
    double a=mean-x; 
    double b=mean+x;


    printf("%0.2f\n%0.2f",a,b);

    return 0;
}

