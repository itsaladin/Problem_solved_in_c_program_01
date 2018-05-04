#include<stdio.h>
void test_function(double ara[]){
    double area,a0,a1;
    a0 = ara[0] = 3.1416;
    a1 = ara[1] = (3)^2;
    area   = a0*a1;
    return area;0
}
int main(){
    double ara[] = {1,2};
    test_function(ara);
    printf("%lf\n",ara);
    return 0;
}
