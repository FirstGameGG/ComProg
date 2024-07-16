#include <stdio.h>

int main(){
    int round = 1, input, height, headpos = 2, legpos = 1;

    printf("Input number of stairs: ");
    scanf("%d", &height);

    printf("---- round %d ----\n", round);
    for (int i = height; i > 0; i--){
        if (i == headpos) printf("|-O-|\n");
        else if (i == legpos) printf("|-^-|\n");
        else printf("|---|\n");
    }
    round++;

    while (1){
    printf("Input step command: ");
    scanf("%d", &input);
    if (input == 0) break;
    
    if (headpos + input > height || legpos + input < 1){
        if (headpos + input > height){
            headpos = height;
            legpos = height - 1;
        }
        else if (legpos + input < 1){
            legpos = 1;
            headpos = 2;
        }
    }
    else{
        headpos += input;
        legpos += input;
    }
    printf("---- round %d ----\n", round);
    for (int i = height; i > 0; i--){
        if (i == headpos) printf("|-O-|\n");
        else if (i == legpos) printf("|-^-|\n");
        else printf("|---|\n");
    }
    round++;
    }
}