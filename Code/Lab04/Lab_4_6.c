#include<stdio.h>
#include<stdlib.h>

int main(){
    char input[12];
    float goal = 0, collect = 0;
    int day = 1;
    printf("Enter your goal amount: ");
    fgets(input, 12, stdin);
    goal = atof(input);

    while (1){
        printf("Enter money collected today: ");
        fgets(input, 12, stdin);
        collect += atof(input);
        if (collect >= goal){
            if (day == 1){
            printf("Congratulations! You take %d day to reach your goal.", day);
            break;}
            else{
            printf("Congratulations! You take %d days to reach your goal.", day);
            break;}                
            }

        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day, collect, (goal-collect));
        day += 1;
    }
}