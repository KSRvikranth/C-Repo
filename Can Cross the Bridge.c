#include<stdio.h>
int main(){
    double x,y,z;
    int withstand;
    scanf("%lf %lf %lf",&x,&y,&z);
    withstand=(z-y)/x;
    printf("%d",withstand);
    return 0;
}