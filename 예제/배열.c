/* #include <stdio.h>

int main(void){
    int i, j;
    int result1=0;
    int result2=0;

    int a[3][2]={0};
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++){
        result1+=a[i][0];
        result2+=a[i][1];
        
    }
    printf("국어 평균: %d\n", result1/3);
    printf("영어 평균: %d\n", result2/3);
    return 0;
} */

/* #include <stdio.h>
int main(void){
    int a[5][2]={{78,89},{93,100}, {20,30}, {44,55}, {88,12}};
    
    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

} */

/* #include <stdio.h> 
int main(void){  //초기화 할 때 배열의 크기를 비워두면 안됨, 컴파일러 오류 뜸
    int score[][]={{20,100},{70,35},{30,70},{80,80},{90,25}};
    return 0; 
}

#include <stdio.h>
int main(void){  //맨 처음 인덱스만 비우두는 것은 허용
    int score[][2]={{20,100},{70,35},{30,70},{80,80},{90,25}};
    return 0; 
}

 */

/*  해결 X

사용자에게서 총 9개의 숫자를 입력 받아, 3 X 3 배열을 초기화 하시오.
3 X 3 표 형태로 출력하시오. 

입력 예시1 -> 9 8 7 6  5 4 3 2 1

출력 예시
9 8 7
6 5 4
3 2 1

*/ 

/* 다차원 배열 (실습8) -> 배열 강의자료 48p

1) 3 X 3 배열을 선언하고 모두 0으로 초기화 하시오
2) 배열의 값을 3 X 3 표 형태로 출력하시오.
3) 사용자로부터 값을 바꾸고 싶은 행과 열 그리고 새로운 값을 받는다.
4) 사용자가 입력한 정보를 토대로 배열의 값을 바꾸시오.
5) 배열의 값을 3 X 3 표 형태로 한번 더 출력하시오.

입력예시 -> 1 2 7

출력예시
0 0 0
0 0 0
0 0 0

0 7 0
0 0 0
0 0 0

#include <stdio.h>

int main(void){
    int a[3][3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    a[n1-1][n2-1]=n3;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
} */

/* 

#include <stdio.h>
int main(void){ 
    int a[2][3][2]={{{20,100},{70,36},{30,50}}, { {30,100},{80,40},{40,60}}};
    int i,j,k;
    for(int i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d][%d]=%d\n", i,j,0, a[i][j][0]);
        }
    }
    return 0;

} */
