#include <stdio.h>

char board[3][3];

void initializeBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < 3; j++)
        {
            printf("%c", board[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("  -----\n");
    }
}

int checkWin()
{

    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;
    return 0;
}

int checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

int main()
{
    initializeBoard();
    int player = 0;
    int row, col;

    while (1)
    {
        printBoard();
        printf("Player %d's turn (enter row and column): ", player + 1);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
        {
            printf("Invalid move, try again.\n");
            continue;
        }

        board[row][col] = (player == 0) ? 'X' : 'O';

        if (checkWin())
        {
            printBoard();
            printf("Player %d wins!\n", player + 1);
            break;
        }

        if (checkDraw())
        {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        player = (player + 1) % 2;
    }

    return 0;
}
