#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int sum=0;
    for(int i=n1;i>n2;i--)
    {
        if(i%2!=0)
            sum+=i;
    }
    if(n1%2!=0)
            sum-=n1;;
    cout<<sum<<endl;
    return 0;
}

