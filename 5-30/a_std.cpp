#include<bits/stdc++.h>
using namespace std;
int k1,b1,k2,b2;
double x,y;
int main()
{
    scanf("y=%dx+%d y=%dx+%d",&k1,&b1,&k2,&b2);
    if(k2==k1){printf("No\n");return 0;}
    x=((double)b1-(double)b2)/((double)k2-(double)k1);
    y=((double)b1*(double)k2-(double)b2*(double)k1)/((double)k2-(double)k1);
    printf("(%.5lf,%.5lf)\n",x,y);
    return 0;
}
