/*
* Project name: condition_point
--------------------------------------------
    ID:9839039
    Name:Samin Mahdipour
    Mail:uni.mahdipour@gmail.com
--------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0;
    double x[4];
    double y[4];
    for(int i=0;i<4;i++)
    {
        puts("Enter x & y:");
        scanf("%lf %lf",&x[i],&y[i]);
    }
    double m[4];
    for(int j=0;j<4;j++)
    {
        for(int t=0;t<4;t++)
        {
            m[t]=(y[j]-y[t])/(x[j]-x[t]);
        }
        if(m[1]==m[2]==m[3])
        {
             puts("all in one line");
             flag=1;

        }
        if(m[1]==m[2] || m[1]==m[3] || m[2]==m[3])
        {
            puts("three in one line");
            flag=1;

        }
    }
    double l[3];
    if(flag==0)
        {
    l[0]=(y[2]-y[0])/(x[2]-x[0]);
    l[1]=(y[3]-y[1])/(x[3]-x[1]);
    l[2]=l[0]*l[1];
    if(l[2]==-1)
    {
        printf("diamond!");
        flag=1;
    }
        }
    if(flag==0)
        printf("None!");

    return 0;
}
