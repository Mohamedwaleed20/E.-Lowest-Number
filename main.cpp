#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[n];
    for(long long i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    long long mn = arr[0];
    int x = 0 ;
    for(long long i = 0 ; i<n;i++)
    {
       if(mn>arr[i])
       {
           mn=arr[i];
           x=i ;
       }
    }
    cout << mn << " " << x + 1 ;



    return 0;
}
