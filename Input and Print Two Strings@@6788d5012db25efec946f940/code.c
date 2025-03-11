// Your code here...
#include <stdio.h>
int main(){
    char Name[100];
    fgets(Name, 100,stdin);
    printf("You entered: %s", Name);
    return 0;
}