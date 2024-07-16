#include <stdio.h>

int main(){
    int hours, minutes;
    char c;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hours, &minutes, &c);
    if (c == 'a' || c == 'A'){
        if (hours == 12) hours -= 12;
    }
    else if (c == 'p' || c == 'P'){
        if (hours != 12) hours += 12;
    }

    printf("Equivalent 24-hour time: %02d:%02d",hours, minutes);
}