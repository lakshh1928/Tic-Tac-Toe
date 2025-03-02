#include <stdio.h>

void player1(char a[3][3])
{
	int n,i,j;
	printf("Player 1: ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(n==1)
			{
				a[0][0]='X';
				break;
			}
			else if(n==2)
			{
				a[0][1]='X';
				break;
			}
			else if(n==3)
			{
				a[0][2]='X';
				break;
			}
			else if(n==4)
			{
				a[1][0]='X';
				break;
			}
			else if(n==5)
			{
				a[1][1]='X';
				break;
			}
			else if(n==6)
			{
				a[1][2]='X';
				break;
			}
			else if(n==7)
			{
				a[2][0]='X';
				break;
			}
			else if(n==8)
			{
				a[2][1]='X';
				break;
			}
			else if(n==9)
			{
				a[2][2]='X';
				break;
			}	
		}
	}
}

void player2(char a[3][3])
{
	int n,i,j;
	printf("Player 2: ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(n==1)
			{
				a[0][0]='O';
				break;
			}
			else if(n==2)
			{
				a[0][1]='O';
				break;
			}
			else if(n==3)
			{
				a[0][2]='O';
				break;
			}
			else if(n==4)
			{
				a[1][0]='O';
				break;
			}
			else if(n==5)
			{
				a[1][1]='O';
				break;
			}
			else if(n==6)
			{
				a[1][2]='O';
				break;
			}
			else if(n==7)
			{
				a[2][0]='O';
				break;
			}
			else if(n==8)
			{
				a[2][1]='O';
				break;
			}
			else if(n==9)
			{
				a[2][2]='O';
				break;
			}	
		}
	}
}
void printBoard(char a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", a[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("---|---|---\n");
    }
}

char checkWinner(char a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2]) 
            return a[i][0];
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i]) 
            return a[0][i];
    }

 
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2]) 
        return a[0][0];
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0]) 
        return a[0][2];

    return ' '; 
}


int main()
{
	printf("<---WELCOME--->\nPlayer1= X & Player2= O\n<---Here is the format enter the given position--->\n");
	char a[3][3];
	int i,j,count=1,x=0;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	   	{
	   	    a[i][j]= count++;
	    	}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	while(x<1)
	{
		player1(a);
		player2(a);
		printBoard(a);
		char winner = checkWinner(a);
        if (winner == 'X')
        {
            printf("?? Player 1 (X) Wins! ??\n");
            return 0;
        }
        else if (winner == 'O')
        {
            printf("?? Player 2 (O) Wins! ??\n");
            return 0;
        }
    }

    printf("It's a draw! ??\n");
}
