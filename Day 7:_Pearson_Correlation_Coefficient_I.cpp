#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


double fun(double x[],double y[],int n,double mean1,double std_dev1,double mean2,double std_dev2)
{
    double num=0;

    for(int i=0;i<n;i++)
    {
        num+=((x[i]-mean1)*(y[i]-mean2));

    }
    double denominator=(n*std_dev1*std_dev2);
    double xxx=num/denominator;
    return xxx;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin>>n;
    double x[n];
    double y[n];
    double coeff=0;

    double sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
     sum1=sum1+x[i];
    }
    //calculate mean for x 
    double mean1;
    mean1=(double)(sum1/n);

    //calculate standard deviation for x
     
    for(int i=0;i<n;i++)
    {
     sum2+=(((double)x[i]-mean1)*((double)x[i]-mean1));
    }
    double std_dev1=(double)sqrt(sum2/n);





    double sum3=0,sum4=0;
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
     sum3=sum3+y[i];
    }

    //calculate mean for y 
    double mean2;
    mean2=(double)(sum3/n);

    //calculate standard deviation for y
     
    for(int i=0;i<n;i++)
    {
     sum4+=(((double)y[i]-mean2)*((double)y[i]-mean2));
    }
    double std_dev2=(double)sqrt(sum4/n);

  
    
   coeff=fun(x,y,n,mean1,std_dev1,mean2,std_dev2);
   printf("%0.3f",coeff);


    return 0;
}

