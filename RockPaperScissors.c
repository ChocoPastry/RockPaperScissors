#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n)
{
    srand(time(NULL));
    int x = rand() % n;
    if (x == 0)
    {
        printf("Computer's choice is Rock\n");
    }
    else if (x == 1)
    {
        printf("Computer's choice is Paper\n");
    }
    else if (x == 2)
    {
        printf("Computer's choice is Scissors\n");
    }

    return x;
}

int main()
{
    int x = 0, y, z, n;
    char *ptr;
    int a[3];
    int b[3];
    printf("Enter the number of characters in your name: ");
    scanf("%d", &n);
    getchar();
    ptr = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter your name: ");
    scanf("%s", ptr);
    getchar();
    while (x < 3)
    {
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &y);
        getchar();
        if (y == 1)
        {
            printf("%s\'s choice is Rock\n", ptr);
        }
        else if (y == 2)
        {
            printf("%s\'s choice is Paper\n", ptr);
        }
        else if (y == 3)
        {
            printf("%s\'s choice is Scissors\n", ptr);
        }
        else
        {
            printf("Choose a valid option\n");
        }
        z = random(3);
        if (z == 0 && y == 1 || z == 1 && y == 2 || z == 2 && y == 3)
        {
            printf("Its a draw!\n");
            a[x] = 0;
            b[x] = 0;
        }
        else if (z == 0 && y == 2)
        {
            printf("%s has won!\n", ptr);
            a[x] = -1;
            b[x] = 1;
        }
        else if (z == 1 && y == 0)
        {
            printf("Computer has won!\n");
            a[x] = 1;
            b[x] = -1;
        }
        else if (z == 1 && y == 3)
        {
            printf("Computer has won!\n", ptr);
            a[x] = -1;
            b[x] = 1;
        }
        else if (z == 2 && y == 2)
        {
            printf("Computer has won!\n");
            a[x] = 1;
            b[x] = -1;
        }
        else if (z == 2 && y == 1)
        {
            printf("%s has won!\n", ptr);
            a[x] = -1;
            b[x] = 1;
        }
        else
        {
            printf("Computer has won!\n");
            a[x] = 1;
            b[x] = -1;
        }
        x++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s's scorecard %d\n", ptr, b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Computer's scorecard %d\n", a[i]);
    }
    free(ptr);

    return 0;
}