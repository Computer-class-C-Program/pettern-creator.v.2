#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number of rows >>");
    scanf("%d", &a);
    getchar();
    for (int i=1;i<=a;i++)
    {
       for(int j=1;j<=a;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    getchar();
   // getchar();
}
