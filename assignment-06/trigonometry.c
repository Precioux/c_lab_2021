/*
* Project name: trigonometry
--------------------------------------------
    ID:9839039
    Name:Samin Mahdipour
    Mail:Uni.mahdipour@gmail.com
--------------------------------------------
*/
#include <stdio.h>

int main(){
       double s,sign_c,c,teta;
    puts("Enter Sinus:");
    scanf( "%lf",&s);
    puts("Enter Sign Cosinus:  for - enter -1 for + enter +1 ");
    scanf("%lf",&sign_c);
    c=sqrt(1-s*s);
    c=sign_c*c;
    if(c>0 && s>0)
        printf("Zone 1");
    if(c<0 && s>0)
        printf("Zone 2");
    if(c<0 && s<0)
        printf("Zone 3");
    if(c>0 && s<0)
        printf("Zone 4");
    return 0;
}
