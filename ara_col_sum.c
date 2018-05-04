#include<stdio.h>
#include<string.h>
int main(){
    int ara[5][5] = {{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int row,col,num_length,a,b,c,d,e;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    for(row = 0; row < 5; row++){
        num_length = sizeof(ara[row])/sizeof(int);
        for(col = 0; col < num_length; col++){
            if(col == '0'){
                a += ara[row][col];
            }
            else if(col == '1'){
                b += ara[row][col];
            }
            else if(col == '2'){
                c += ara[row][col];
            }
            else if(col == '3'){
                d += ara[row][col];
            }
            else if(col == '4'){
                e += ara[row][col];
            }
        }
    }
    printf("Sum of col %d %d %d %d %d \n",a,b,c,d,e);
}
