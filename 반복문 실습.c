# include <stdio.h>

/* while�� �ǽ�1
int main(void){
  int i,j=0;
  scanf("%d", &i);
  while(j<3){
    printf("hello world\n");
    j++;
  }
   return 0;
}
 */

/* while�� �ǽ�2
int main(void){
    char c='A';
    while(c<='Z'){
        printf("%c", c);
        c++;
    }
} */

/* while�� �ǽ�3
int main(void){
    int a=1, sum;
    while(sum<=100){
        sum+=a;
        if(sum>=100){
            printf("%d", a);
        }
        a++;
    }
    return 0;
} */

/* while�� �ǽ�4
int main(void){
    int i=1;
    int a;
    scanf("%d", &a);
    while(i<=9){
        printf(" %d * %d = %d\n", a, i, a*i);
        i++;
    }
    return 0;
} */


/* (�ǽ�5) ����ڿ��� ���� ������ �ݺ��ؼ� �Է� �޾�(���� ���Ǳ���),
�� �߿��� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
? ��������: 0 �Է�
? ó�� �ԷµǴ� ������ 0�� �ƴ϶�� �����ϰ�, ���� ��������
�ԷµǴ� 0�� �� ��󿡼� �����Ѵ�. */

/* do while���� �̿��Ͽ� 1���� 10������ ���� ���ϴ� ����
int main(void)
{
    int i=1, sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);

    printf("1���� 10������ ���� %d�Դϴ�. \n", sum);
    return 0;
} */

/* do while���� �̿�, ���� ������ �ԷµǱ� ������ �Է� ���� ������ ��
int main(void){
    int x, sum=0;
    do{
        sum+=x;
        scanf("%d", &x);
    }while(x>0);
    printf("�Է��� ������ ��: %d", sum);
    return 0;

} */

/* do while���� ���ڰ� �ԷµǱ� ������ �Է� ���� ������ �� ����

int main(void) {
    int i, sum;
    i = 0;
    sum = 0;

    do {
    sum += i;
    printf("������ �Է��ϼ���: ");
    } while ( scanf("%d", &i) );

    printf("�Է��� ������ ���� %d�Դϴ� \n", sum);
    return 0;
}  */

/* do while �� �ݺ� Ƚ�� ���ϴ� ����

int main(void){
    int cnt=1;
    do{
        printf("�ݺ� %d\n", cnt);
        cnt++;
    }while(cnt<5);
    printf("�� �ݺ�Ƚ��: %d", cnt-1);
} */

// (�ǽ�12) for ���� �̿��Ͽ� 1���� 10������ Ȧ���� ��, ¦���� ���� ���ϱ� X

// (�ǽ�13) ������ �Է� �޾� �� ������ �ش��ϴ� ����(1�̸� �Ͽ���, 2�̸� ������, ��, 7�̸� �����)�� 1���� �����ϴ� �޷��� ���

/* (�ǽ�14) ��ø for�� �̿�

int main(void){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
} */

/* (�ǽ�14) ��ø for�� �̿�
int main(void){
    int i,j,k;
    for(i=1; i<=5; i++){
        for(j=0; j<i; j++){
            printf("*");
        }

        for(k=5; k>i; k--){
            printf("~");
        }

        printf("\n");
    }
}
 */

/* ��ø for�� �̿��Ͽ� ������ ���� ���
    1 2 3 4 5
    6 7 8 9
    10 11 12
    13 14
    15
*/

/* (�ǽ�16) 1���� n������ ���� ���ʷ� 100�� ���� ���� n���� ����
���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, n������ ���� ���ѹݺ� �ȿ�
�����ϰ� ���� 100�� ������ break ���� �̿��Ͽ� ���ѹݺ���
������� �Ͻÿ�

int main(void){
    int i=1, sum;
    while(1){
        sum+=i;
        if(sum>100)
            break;
        i++;
    }
    printf("i��: %d\n", i);
    printf("1���� i������ ��: %d\n", sum);
} */

/* (�ǽ�17) �Է� ���� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��,
���ѹݺ��� ����ϰ� �Է� ���� ������ 0�̸� ���ѹݺ���
������� �Ͻÿ�)

int main(void){
    int n, sum=0;
    do{
        scanf("%d", &n);
        sum+=n;
    }while(n>0);
    printf("�Է� ���� ������ ��: %d", sum);
} */

int main(void){
    int i;
    printf("1���� 10 ������ ¦���� ���\n");
    for(i=1; i<=10; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n", i);
    }
}