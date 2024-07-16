#include <stdio.h>

#define BOARD_SIZE  8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int n, xPos, yPos;
    int board[BOARD_SIZE][BOARD_SIZE] = {0
    }, piece;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf(" %c(%d, %d)",&piece, &xPos, &yPos);
        setPieceOnTable(board, piece, xPos, yPos);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == 0) printf(" |");
            else printf("%c|", board[i][j]);
        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos] = piece;
}
