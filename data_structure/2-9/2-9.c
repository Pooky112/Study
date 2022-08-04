#include <stdio.h>

int main(){
    int i;
    char str1[20]= "Dreams come true!", str2[20],*ptr1,*ptr2;

    ptr1=str1;
    printf("\n str1의 주소 = %u \t ptr 1 = %u",str1, ptr1);
    printf("\n str1 = %s \n ptr1 = %s", str1, ptr1);
    printf("\n\n %s", ptr1 +7);
    ptr2=&str1[7];
    printf("\n %s \n\n", ptr2);

    for(i=16; i>=0; i--){

        putchar(*(ptr1+i));
    }
    for(i=16; i>=0; i--){

        printf("\n%d",i);
    }

    putchar('\n');
    putchar(*(ptr1+3));

    for(i=0; i<20; i++){
        str2[i]=*(ptr1+i);
    }

    printf("\n\nstr1 = %s",str1);
    printf("\nstr2 = %s",str2);

    *ptr1= 'P';
    *(ptr1+1)='e';
    *(ptr1+2)='a';
    *(ptr1+3)='c';
    *(ptr1+4)='h';
    printf("\n\n string1 = %s\n", str1);

    getchar();
    
}