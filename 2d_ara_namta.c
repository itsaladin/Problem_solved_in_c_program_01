#include<stdio.h>
int main(){
    int ara[10][10];
    int row,col,aranum = 0,count1 = 0,count2 = 0;
    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            ara[row][col] = (row + 1) * (col + 1);
        }
    }
    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            if(ara[row][col] % 2 == 0){
                count1++;
                //printf("%d is even & num of count %d\n",ara[row][col],count1);
            }else{
                count2++;
               //oprintf("%d is odd & num of count %d\n",ara[row][col],count2);
            }
            aranum++;
        }
    }
    printf("The even num is: %d and odd num is : %d\n",count1,count2);
    printf("Total number in array is : %d\n",aranum);
}
