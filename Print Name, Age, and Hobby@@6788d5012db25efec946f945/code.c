#include <stdio.h>
int main(){
    char name[50];
    int age;
    char hobby{50};
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);
    return 0;
}