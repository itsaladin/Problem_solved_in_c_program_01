#include<stdio.h>
int main(){
    int i;
    int total_marks[] = {83,86,97,95,93,95,85,52,49,41,42,56,83,47,95,69,59,50,34,56,83,47,95,69,59,50,34,47,90,59,63,86,40,45,76,83,72,54,99,40};
    for(marks = 40; marks <= 100; marks++){
        count = 0;
        for(i = 0; i < 40; i++){
            if(total_marks[i] == marks){
                count++;
            }
        }
        if(count != 0){
            printf("Marks: %d Count: %d\n",marks,count);
        }
    }
}
