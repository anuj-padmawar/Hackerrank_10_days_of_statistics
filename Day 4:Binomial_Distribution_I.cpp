#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


double b = 1.09;
double g = 1;

int fact(int n)
{
    if(n<2) return 1;
    return n*fact(n-1);
}

double nCr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double p = b/(b+g);
    double q = 1 - p; 
    double prob = 0.0;
    
    for(int i=3; i<=6; i++)
    {
        prob += nCr(6, i)*pow(p, i)*pow(q, 6-i);
    }
    printf("%0.3f\n", prob);
    
    return 0;
}
