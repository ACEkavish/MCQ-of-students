#include <stdio.h>

void MCQ()
{
    int a[20], i;
    int A = 0, B = 0, C = 0, D = 0;
    char max_option = ' ';
    int max_count = 0;

    printf("Enter the responses by students \n");
    printf("1 for A\n");
    printf("2 for B\n");
    printf("3 for C\n");
    printf("4 for D\n");

    // Input loop
    for (i = 0; i < 20; i++)
    {
        printf("%d >>\t", i + 1);
        scanf("%d", &a[i]);
    }

    // Tallying loop
    for (i = 0; i < 20; i++)
    {
        if (a[i] == 1)
        {
            A++;
        }
        else if (a[i] == 2)
        {
            B++;
        }
        else if (a[i] == 3)
        {
            C++;
        }
        else if (a[i] == 4)
        {
            D++;
        }
    }
    max_count = A;
    max_option = 'A';

    if (B > max_count)
    {
        max_count = B;
        max_option = 'B';
    }
    if (C > max_count)
    {
        max_count = C;
        max_option = 'C';
    }
    if (D > max_count)
    {
        max_count = D;
        max_option = 'D';
    }
    printf("Option A was selected by %d students\n", A);
    printf("Option B was selected by %d students\n", B);
    printf("Option C was selected by %d students\n", C);
    printf("Option D was selected by %d students\n\n", D);
    printf("The option that was selected maximum time = %c\n", max_option);
}

int main()
{
    MCQ();
    return 0;
}
