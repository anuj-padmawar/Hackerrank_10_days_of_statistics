#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int quad(vector<int> a)
{
    int q, n=a.size(); 
    if(n%2==0) 
    {
        q = (a[n/2-1] + a[n/2])/2;
    }
    else 
    {
        q = a[n/2];
    }
    
    return q;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    int Q1, Q2, Q3;
    cin>>n;
     vector<int >a(n);   
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    
    
    Q2 = quad(a);


    vector<int> l(a.begin(), a.begin()+n/2);
    vector<int> h;  
    if(n%2==0)
    {
        h.insert(h.end(), a.begin()+n/2, a.end());
    }
    else
    {
        h.insert(h.end(), a.begin()+n/2+1, a.end());
    }
    
    Q1 = quad(l);
    
    Q3 = quad(h);
    
    cout<<Q1<<endl;
    cout<<Q2<<endl;
    cout<<Q3<<endl;
    
        
    return 0;
}
