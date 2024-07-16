#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int y, int x) {
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    board[x][y] = 'B';
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (x - i >= 0 && y - i >= 0) board[x - i][y - i] = 'X';
        if (x - i >= 0 && y + i < BOARD_SIZE) board[x - i][y + i] = 'X';
        if (x + i < BOARD_SIZE && y - i >= 0) board[x + i][y - i] = 'X';
        if (x + i < BOARD_SIZE && y + i < BOARD_SIZE) board[x + i][y + i] = 'X';
    }
        printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("------------------\n");
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            char c;
            if (board[i][j] == 0) {
                c = ' ';
            } else if (board[i][j] == 'B') {
                c = 'B';
            } else {
                c = 'X';
            }
            printf("%c|", c);
        }
        printf("\n");
    }
    printf("------------------\n");
}

int main() {
    int x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    bishopMoves(x, y);
    return 0;
}
