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
    printf("���� ���: %d\n", result1/3);
    printf("���� ���: %d\n", result2/3);
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
int main(void){  //�ʱ�ȭ �� �� �迭�� ũ�⸦ ����θ� �ȵ�, �����Ϸ� ���� ��
    int score[][]={{20,100},{70,35},{30,70},{80,80},{90,25}};
    return 0; 
}

#include <stdio.h>
int main(void){  //�� ó�� �ε����� ���δ� ���� ���
    int score[][2]={{20,100},{70,35},{30,70},{80,80},{90,25}};
    return 0; 
}

 */

/*  �ذ� X

����ڿ��Լ� �� 9���� ���ڸ� �Է� �޾�, 3 X 3 �迭�� �ʱ�ȭ �Ͻÿ�.
3 X 3 ǥ ���·� ����Ͻÿ�. 

�Է� ����1 -> 9 8 7 6  5 4 3 2 1

��� ����
9 8 7
6 5 4
3 2 1

*/ 

/* ������ �迭 (�ǽ�8) -> �迭 �����ڷ� 48p

1) 3 X 3 �迭�� �����ϰ� ��� 0���� �ʱ�ȭ �Ͻÿ�
2) �迭�� ���� 3 X 3 ǥ ���·� ����Ͻÿ�.
3) ����ڷκ��� ���� �ٲٰ� ���� ��� �� �׸��� ���ο� ���� �޴´�.
4) ����ڰ� �Է��� ������ ���� �迭�� ���� �ٲٽÿ�.
5) �迭�� ���� 3 X 3 ǥ ���·� �ѹ� �� ����Ͻÿ�.

�Է¿��� -> 1 2 7

��¿���
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
