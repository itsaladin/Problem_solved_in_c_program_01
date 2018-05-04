#include<stdio.h>
int main(){
    int i;
    int total_marks[] = {83,86,97,95,93,95,85,52,49,41,42,56,83,47,95,69,59,50,34,56,83,47,95,69,59,50,34,47,90,59,63,86,40,45,76,83,72,54,99,40};
    int marks_count[101];
    for(i = 0; i < 101; i++){
        marks_count[i] = 0;
    }
    for(i = 0; i < 40; i++){
        marks_count[total_marks[i]]++;
    }
    for(i = 40; i <= 100; i++){
        printf("Marks: %d Count: %d\n",i,marks_count[i]);
    }
}
