#include <stdio.h>
/*
int main(){
    int arr[8] = {3, 4, 2, 3, 1, 7, 4, 2,};
    int i, a = 0, b = 1, c = 0, d = 0;

    for (i = 0; i < 8; i++){
        a += arr[i];

        if (arr[i] % 2 == 0){
            b *= arr[i];
            c++;
        }
        else{
            d++;
        }
    }
    printf("%d %d %d %d", a, b, c, d);
}
*/

/*
int main(){
    int i = 0;

    while (i < 12){
        i++;
        printf("12 x %d = %d \n",i, i*12);
        ;
    }
}
*/

/*
int main(){
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
    case 3:
        printf("Three");
    default: printf("Default");
    }
}
*/


/*
int main(){
    int n;

    scanf("%d", &n);
    switch (n % 3){
        case 0:
            printf("n หารด้วย 3A ลงตัว\n");
            break;
        case 1:
        case 2:
            printf("n หารด้วย 3B ไม่ลงตัว\n");
            break;      
        default:
            printf("เข้ากรณี default\n");
            break;     
    }
}
*/

/*
int main(){
    int i = 0;
    for (; i < 8; i++);
        printf("%d\n", i);
}
*/

/*
int main(){
    int i;

    for (i = 1; i <=8; i += i)
    printf("%d\n", i);
}
*/

/*
int main(){
    int n ,j = 205;

    for (n = 8; n != 0; n--){
    printf("%d, ", j / 2);
    j /= 2;}
}
*/

/*
int main(){
    int x = 3, y = 0;
    for (; x!=0; x >>= 1)
    y += x & 1;

    printf("%d",y);
    return 0;
}
*/

/*
int main(){
    int cnt = 1;
    do {
        putchar('*');
        cnt *= 2;
        if (cnt >> 2) continue;
        putchar('*');
     } while (cnt <= 16);
}
*/

/*
int main(){
    int input;
    int a, e, i, o, u, newline, other;
    a = e = i = o = u = newline = other = 0;
    while ((input = getchar()) != '\n'){
        switch (input){
            case 'a':
            case 'A': a++; break;
            case 'e':
            case 'E': e++; break;
            case 'i':
            case 'I': i++; break;
            case 'o':
            case 'O': o++; break;
            case 'u':
            case 'U': u++; break;
            case '\n': newline++; break;
            default: other++;
        }
    }
    printf("%02d, %02d, %02d, %02d, %02d, %02d, %02d", a, e, i, o, u, newline, other);
}
*/

/*
int main(){
    char s[10], c;
    int i = 0, j = 034701, k;

    while (j > 0){
        s[i++] = j % 10;
        j /= 10;
    }
    s[k = i--] = 0;
    while (i >= k /2){
        c = s[i] + '0';
        s[i] = s[k-i-1] + '0';
        s[k-i-1] = c;
        i--;

    }
    printf("%s",s);
}
*/

/*
int main(){
    int n;

    for (n = 8; n != 0; n--)
    printf("%d\n", n--);
}
*/

/*
int main(){
    char s[10] = "123456789";
    int i, j;

    for (i = 8, j = 205 ; i >= 0; i--){
        s[i] = '0' + j % 2;
        j /= 2;
    }
    printf("%s",s);
}
*/

int a(){
    int i, j;
    for (i = 0; i < 12; i++){
        j = i + 1;
        printf("12 x %2d = %d\n",j, j *12);
    }
}

int b(){
    int i;
    for (i = 1; i <= 12; i++){
        printf("12 x %2d = %d\n",i, i *12);
    }
}


int c(){
    int i = 1;
    while (i <= 12){
        printf("12 x %2d = %d\n",i, i *12);
        i++;
    }
}

int d(){
    int i = 0;
    while (i < 12){
        i++;
        printf("12 x %2d = %d\n",i, i *12);
    }
}
int main(){
    a();
    b();
    c();
    d();
}
