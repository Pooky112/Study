#include <stdio.h>

int main(){
    int i,j,k;
    char student[2][3][20];
    for( i = 0; i <2; i++){
        printf("\n 학생 %d의 이름 : ", i + 1);
        gets(student[i][0]);
        printf("\n 학생 %d의 학과 : ",i + 1);
        gets(student[i][1]);
        printf("\n 학생 %d의 학번 : ",i + 1);
        gets(student[i][2]);
    }

    for(i=0; i<2; i++){
        printf("\n\n 학생 %d", i+1);
        for(j=0; j<3; j++){
            printf("\n\t");
            for(k=0; student[i][j][k]; k++){
                printf("%c", student[i][j][k]);
            }
        }
        
    }
    
    printf("\n%c", student[0][1][2]);
    getchar();
    
}