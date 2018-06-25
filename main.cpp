#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0,x;
    for(int i=0;i<5;i++){cin>>x; n+=x;}
    if(n%5==0&&n!=0){cout<<n/5<<endl;}
    else cout<<-1<<endl;
    return 0;
}
