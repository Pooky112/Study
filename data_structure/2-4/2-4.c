#include <stdio.h>

int main(){
    char str[20] = "Data structure!";
    int i;
    printf("\n문자 배열 str[] : ");
    for( i = 0; str[i]; i++){
        printf("%c", str[i]);
    }
    getchar();

}