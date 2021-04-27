/*
* Project name: less_conditions
--------------------------------------------
    ID:
    Name:
    Mail:
--------------------------------------------
*/
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int b[3];
    scanf("%d %d",&a[0],&b[0]); //0-2
    scanf("%d %d",&a[1],&b[1]); //1-4
    scanf("%d %d",&a[2],&b[2]); //0-5
    int t[3];
    int min , max;
    min=a[0];
    max=b[0];
    for( int i=0; i<3;i++)
    {
        if(a[i]>min)
            min=a[i];
        if(b[i]<max)
            max=b[i];
    }
    if(min<max)
        printf("%d",max-min);
    else puts("0");

   /* int max[3];
    for(int i=0;i<3;i++)
        max[i]=0;

    t[0]=b1-a1+1;
    t[1]=b2-a2+1;
    t[2]=b3-a3+1;
    if(t[0]>t[1])
    {
        max[0]++;
    }
    else max[1]++;
    if(t[0]>t[2])
    {
        max[0]++;
    }
    else max[2]++;
    if(t[1]>t[2])
    {
        max[1]++;
    }
    else max[2]++;
    printf("%d %d %d",max[0],max[1],max[2]);*/
    return 0;
}
