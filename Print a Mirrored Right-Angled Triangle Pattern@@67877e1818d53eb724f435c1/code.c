#include <stdio.h>
int main() {
    int a;
    int m=a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        // for (int j=1;j<=m-1;j++)
        // {
        //     printf(" ");
        // }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        

        printf("\n");
    }
    return 0;
}