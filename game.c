#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {

int playerX=1,playerX2=1,playerX3=1,playerY=1,playerY2=1,playerY3=1;
int lives1=3,lives2=3,lives=3;


char maze1[5][5] = {
        {'*', '*', '*', '*', '*'},
        {'*', ' ', '*', ' ', '*'},
        {'*', ' ', ' ', ' ', '*'},
        {'*', ' ', '*', '_', '*'},
        {'*', '*', '*', '*', '*'},
    };

	time_t startTime = time(NULL);
    	time_t currentTime;

    while (1 && lives1>0) {
        // Clearing the screen
        system("cls");
	printf("This code sets up a simple maze with a player character ['P'] and walls ['*']. The player can navigate through the maze using 'w' [up], 'a' [left], 's' [down], and 'd' [right] keys. The goal is to reach the end of the maze. When the player reaches the goal, he/she will be taken to the next level. If th eplayer finishes all 3 levels,*You Won* statement is displayed and the game ends. If the player crashers for 3 times, the statement *You lost* and *Game Over* is displayed and the game ends.\n\n\n\n");
	printf("### WELCOME TO LEVEL 1 ###\n");

        // Displaying the maze
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == playerY && j == playerX) {
                    printf("P "); // Displaying the player
                } else {
                    printf("%c", maze1[i][j]);
		    printf(" ");
                }
            }
            printf("\n");
        }

        printf("You have %d lives\n",lives1);
	printf("Complete this level within 20 seconds\n");

        // Checking for game over
        if (playerX == 3 && playerY == 3) {
	    system("cls");
            printf("LEVEL 1 COMPLETED\n");
            goto level2;
        }

	// Check for time limit
        currentTime = time(NULL);
        if ((currentTime - startTime) >= 20){
            system("cls");
            printf("Time limit exceeded!\n");
            printf("You Lost!!!\n");
            goto end;
        }

        // Getting player input
        char move;
        printf("Enter your move (w/a/s/d): ");
        scanf(" %c", &move);

        // Updating player position
        int newPlayerX = playerX;
        int newPlayerY = playerY;

        if (move == 'w') {
            newPlayerY--;
        } else if (move == 'a') {
            newPlayerX--;
        } else if (move == 's') {
            newPlayerY++;
        } else if (move == 'd') {
            newPlayerX++;
        }

        // Checking for collisions
        if (maze1[newPlayerY][newPlayerX] != '*') {
            playerX = newPlayerX;
            playerY = newPlayerY;
        }
	else if(maze1[newPlayerY][newPlayerX] == '*'){
                lives1 --;
	if(lives1==0){
		system("cls");
		printf("   Y O U * L O S T !!!   \n");
		goto end;
		}
	}
    }
    if(lives!=0){
        level2:;
    char maze2[10][10] = {
        {'*', '*', '*', '*', '*','*','*','*','*','*'},
        {'*', ' ', '*', ' ', '*',' ','*','*',' ','*'},
        {'*', ' ', '*', '*', '*','*','*','*','*','*'},
        {'*', ' ', '*', '*', '*','*',' ','*',' ','*'},
        {'*', ' ', ' ', ' ', ' ','*',' ','*',' ','*'},
        {'*', '*', '*', '*', ' ','*',' ',' ',' ','*'},
	{'*', '*', ' ', ' ', ' ',' ',' ','*',' ','*'},
	{'*', '*', ' ', '*', ' ','*','*','*',' ','*'},
	{'*', ' ', ' ', '*', ' ',' ',' ','*','_','*'},
	{'*', '*', '*', '*', '*','*','*','*','*','*'},
    };
 
	time_t startTime = time(NULL);
    	time_t currentTime;

    while (1 && lives2>0) {
        // Clearing the screen
	system("cls");

	printf("### WELCOME TO LEVEL 2 ###\n");

        // Displaying the maze
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == playerY2 && j == playerX2) {
                    printf("P "); // Displaying the player
                } else {
                    printf("%c", maze2[i][j]);
		    printf(" ");
                }
            }
            printf("\n");
        }

        printf("You have %d lives\n",lives2);
	printf("Complete this level within 30 seconds\n");

        // Checking for game over
        if (playerX2 == 8 && playerY2 == 8) {
	    system("cls");
            printf("LEVEL 2 COMPLETED\n");
	    goto level3;
        }

	// Check for time limit
        currentTime = time(NULL);
        if ((currentTime - startTime) >= 30){
            system("cls");
            printf("Time limit exceeded!\n");
            printf("You Lost!!!\n");
            goto end;
        }

        // Getting player input
        char move;
        printf("Enter your move (w/a/s/d): ");
        scanf(" %c", &move);

        // Updating player position
        int newPlayerX2 = playerX2;
        int newPlayerY2 = playerY2;

        if (move == 'w') {
            newPlayerY2--;
        } else if (move == 'a') {
            newPlayerX2--;
        } else if (move == 's') {
            newPlayerY2++;
        } else if (move == 'd') {
            newPlayerX2++;
        }

        // Checking for collisions
        if (maze2[newPlayerY2][newPlayerX2] != '*') {
            playerX2 = newPlayerX2;
            playerY2 = newPlayerY2;
        }
	else if(maze2[newPlayerY2][newPlayerX2] == '*'){
                lives2 --;
	if(lives2==0){
		system("cls");
		printf(" \n  Y O U * L O S T !!!   \n");
		goto end;
		}
	}
    }
    }
    if(lives!=0){
level3:;
char maze3[20][20] = {
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
	{'*',' ','*','*','*','*','*',' ',' ','*','*','*','*','*','*',' ',' ',' ',' ','*'},
	{'*',' ','*',' ','*',' ',' ',' ','*','*','*',' ',' ','*',' ',' ','*','*',' ','*'},
	{'*',' ','*',' ',' ',' ','*',' ','*','*','*',' ',' ','*',' ','*','*','*',' ','*'},
	{'*',' ','*',' ','*','*','*',' ',' ','*','*',' ','*','*',' ','*','*',' ',' ','*'},
	{'*',' ',' ',' ','*','*','*','*',' ',' ',' ',' ','*','*',' ','*','*',' ','*','*'},
	{'*','*','*','*','*','*','*','*','*','*',' ','*','*','*',' ','*','*',' ','*','*'},
	{'*','*',' ',' ',' ',' ','*','*','*','*',' ','*','*','*',' ','*','*',' ',' ','*'},
	{'*','*',' ','*','*',' ','*','*','*','*',' ','*','*',' ',' ','*','*','*',' ','*'},
	{'*',' ',' ','*','*',' ',' ',' ',' ','*',' ','*','*',' ','*','*',' ',' ',' ','*'},
	{'*','*',' ','*','*','*',' ','*',' ',' ',' ','*','*',' ','*','*',' ','*','*','*'},
	{'*','*',' ','*','*','*',' ','*','*','*','*','*','*',' ','*','*',' ','*','*','*'},
	{'*','*',' ','*','*','*',' ','*','*','*','*','*',' ',' ','*','*',' ',' ',' ','*'},
	{'*','*',' ','*','*','*',' ','*','*','*',' ',' ',' ','*','*','*','*','*',' ','*'},
	{'*',' ',' ',' ',' ',' ','*','*','*',' ',' ','*','*','*','*','*',' ',' ',' ','*'},
	{'*',' ','*','*','*',' ','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*'},
	{'*',' ','*','*','*',' ','*','*',' ','*','*','*','*','*','*',' ','*','*','*','*'},
	{'*',' ','*','*','*',' ',' ',' ',' ','*','*','*','*','*','*',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ','*',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*','*','*','_','*'},
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
};


	time_t startTime = time(NULL);
    	time_t currentTime;

    while (1 && lives>0) {
        // Clearing the screen
	system("cls");

	printf("### WELCOME TO LEVEL 3 ###\n*****THE FINAL LEVEL*****\n");
	printf("ALL THE BEST!!\n");
        // Displaying the maze
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                if (i == playerY3 && j == playerX3) {
                    printf("P "); // Displaying the player
                } else {
                    printf("%c", maze3[i][j]);
		    printf(" ");
                }
            }
            printf("\n");
        }

        printf("You have %d lives\n",lives);
	printf("Complete this level within 60 seconds\n");

        // Checking for game over
        if (playerX3 == 18 && playerY3 == 18) {
	    system("cls");
            printf("YOU WON!!!\n");
            break;
        }

	// Check for time limit
        currentTime = time(NULL);
        if ((currentTime - startTime) >= 60){
            system("cls");
            printf("Time limit exceeded!\n");
            printf("You Lost!!!\n");
            goto end;
        }

        // Getting player input
        char move;
        printf("Enter your move (w/a/s/d): ");
        scanf(" %c", &move);

        // Updating player position
        int newPlayerX3 = playerX3;
        int newPlayerY3 = playerY3;

        if (move == 'w') {
            newPlayerY3--;
        } else if (move == 'a') {
            newPlayerX3--;
        } else if (move == 's') {
            newPlayerY3++;
        } else if (move == 'd') {
            newPlayerX3++;
        }

        // Checking for collisions
        if (maze3[newPlayerY3][newPlayerX3] != '*') {
            playerX3 = newPlayerX3;
            playerY3 = newPlayerY3;
        }
	else if(maze3[newPlayerY3][newPlayerX3] == '*'){
                lives --;
	if(lives==0){
		system("cls");
		printf(" \n  Y O U * L O S T !!!   \n");
		goto end;
		}
	}
    }
    }
system("cls");
printf("\n\n$$$ Y O U * W O N $$$\n");
    end:
    //system("cls");
    printf("\n#### G A M E * O V E R ####\n");
    return 0;
}

