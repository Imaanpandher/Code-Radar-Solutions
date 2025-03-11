// Your code here...
#include <stdio.h>
int main(){
    char Name[20];
    fgets(Name, 20, stdin);
    printf("You entered: %s", Name);
    return 0;
}