#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
        printf("Perimetro = %.1f\n",a+b+c);
    else
        printf("Area = %.1f\n",.5*(a+b)*c);
    return 0;
}
