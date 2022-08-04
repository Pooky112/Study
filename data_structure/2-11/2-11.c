#include <stdio.h>

int main(){
    char *ptrArray[2];
    char **ptrptr;
    int i;

    ptrArray[0]="Korea";
    ptrArray[1]="Seoul";

    ptrptr = ptrArray;
    printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);
    printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u", ptrArray[0]);
    printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c", *ptrArray[0]);
    printf("\n ptrArray[0]의 참조 문자열 (*ptrArray) = %s \n", *ptrArray);

    printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);
    printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u", ptrArray[1]);
    printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c", *ptrArray[1]);
    printf("\n ptrArray[1]의 참조 문자열 (*ptrArray) = %s \n", *(ptrArray+1));

    printf("\n ptrptr 주소 (&ptrArray[2]) = %u", &ptrptr);
    printf("\n ptrArray[2]의 값 (ptrArray[2]) = %u", ptrptr);
    printf("\n ptrArray[2]의 1차 참조값 (*ptrArray[2]) = %u", *ptrptr);
    printf("\n ptrArray[2]의 참조값 (*ptrArray[2]) = %c", **ptrptr);
    printf("\n ptrArray[2]의 참조 문자열 (*ptrArray) = %s \n", *ptrptr);

    printf("\n\n *ptrArray[0] : ");
    for(i=0; i<5; i++) printf("%c",*(ptrArray[0]+i));
    printf("\n **ptrptr : ");
    for(i=0; i<5; i++) printf("%c", *(*(ptrptr)+i));

    return 0;
}