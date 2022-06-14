#include <stdio.h>
int printBoard();
int CheckBoardForWin();

int main()
{
    //initialze the main array

    int mainArray[3][3], i, j, row, collum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //0 means that the board doesn't have value yet
            mainArray[i][j] = 0;
        }
        
    }
    
    //Turn X
    while(1){
        while(1){
            printf("[USERINPUT:X TURN] write row and then collum: --> ");
            scanf("%d%d", &row, &collum);
            if(mainArray[row-1][collum-1] ==0){
                mainArray[row-1][collum-1] = 5;
                printBoard(mainArray);
                checkBoardForWin(mainArray);
                break;
            }
        }

        while(1){
            printf("[USERINPUT:O TURN] write row and then collum: --> ");
            scanf("%d%d", &row, &collum);
            if(mainArray[row-1][collum-1] ==0){
                mainArray[row-1][collum-1] = 8;
                printBoard(mainArray);
                checkBoardForWin(mainArray);
                break;
            }
        }
    }


    printBoard(mainArray);
    return 0;
}

int printBoard(int mainArray[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(mainArray[i][j] == 0){
                printf("- ");
            }
            if(mainArray[i][j] == 5){
                printf("X ");
            }
            if(mainArray[i][j] == 8){
                printf("O ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

int checkBoardForWin(int mainArray[3][3])
{
    int i;
    for (i = 0; i < 0; i++)
    {
        if(mainArray[i][0] == mainArray[i][1] && mainArray[i][1] == mainArray[i][2] && mainArray[i][0] != 0)
        {
            printf("===============\n WIN\n==============");
            return 0;
        }
        if(mainArray[0][i] == mainArray[1][i] && mainArray[1][i] == mainArray[2][i] && mainArray[0][i] != 0)
        {
            printf("===============\n WIN\n==============");
            return 0;
        }
    }
    if(mainArray[0][0] == mainArray[1][1] && mainArray[1][1] == mainArray[2][2] && mainArray[0][0] != 0)
    {
        printf("===============\n WIN\n==============");
        return 0;
    }
    if(mainArray[0][2] == mainArray[1][1] && mainArray[1][1] == mainArray[2][0] && mainArray[1][1] != 0)
    {
        printf("===============\n WIN\n==============");
        return 0;
    }
    return 0;
}

