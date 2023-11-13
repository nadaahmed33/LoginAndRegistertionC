#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};

int main(void)
{
    struct login l;
    bool f;
    int active;

    printf("\nActivation= ");
    scanf("%d", &active);

    f = active;

    printf("\nUsername: ");
    scanf("%s", l.username);

    printf("\nPassword: ");
    scanf("%s", l.password);

    getchar();

    if (f)
    {
        char usernamea[30], passworda[20];

        printf("Username:  ");
        scanf("%s", usernamea);

        printf("\nPassword: ");
        printf("\n");
        scanf("%s", passworda);

        int r1 = strcmp(usernamea, l.username);
        int r2 = strcmp(passworda, l.password);

        if (r1 == 0 && r2 == 0)
        {
            printf("\nSuccessful \n");
        }
        else
        {
            printf("\n Failed\n");
        }
    }

    return 0;
}
