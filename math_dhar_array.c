#include<stdio.h>
int main(){
    int i,n,sum;
    printf("Enter summation number :");
    scanf("%d",&n);
    sum = 0;
    for(i = 1;i <= n;i++){
        if(i % 2 !=0){
            sum = sum + i;
        }
    }
    printf("Summation is %d\n",sum);
    return 0;
}
