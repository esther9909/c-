# include <stdio.h>

/* while문 실습1
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

/* while문 실습2
int main(void){
    char c='A';
    while(c<='Z'){
        printf("%c", c);
        c++;
    }
} */

/* while문 실습3
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

/* while문 실습4
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


/* (실습5) 사용자에게 정수 값들을 반복해서 입력 받아(종료 조건까지),
이 중에서 가장 작은 값을 출력하는 프로그램을 작성하시오.
? 종료조건: 0 입력
? 처음 입력되는 정수는 0이 아니라고 가정하고, 종료 조건으로
입력되는 0은 비교 대상에서 제외한다. */

/* do while문을 이용하여 1부터 10까지의 합을 구하는 예제
int main(void)
{
    int i=1, sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);

    printf("1부터 10까지의 합은 %d입니다. \n", sum);
    return 0;
} */

/* do while문을 이용, 음의 정수가 입력되기 전까지 입력 받은 정수의 합
int main(void){
    int x, sum=0;
    do{
        sum+=x;
        scanf("%d", &x);
    }while(x>0);
    printf("입력한 정수의 합: %d", sum);
    return 0;

} */

/* do while문을 문자가 입력되기 전까지 입력 받은 정수의 합 예제

int main(void) {
    int i, sum;
    i = 0;
    sum = 0;

    do {
    sum += i;
    printf("정수를 입력하세요: ");
    } while ( scanf("%d", &i) );

    printf("입력한 정수의 합은 %d입니다 \n", sum);
    return 0;
}  */

/* do while 문 반복 횟수 구하는 예제

int main(void){
    int cnt=1;
    do{
        printf("반복 %d\n", cnt);
        cnt++;
    }while(cnt<5);
    printf("총 반복횟수: %d", cnt-1);
} */

// (실습12) for 문을 이용하여 1부터 10까지의 홀수의 합, 짝수의 합을 구하기 X

// (실습13) 정수를 입력 받아 그 정수에 해당하는 요일(1이면 일요일, 2이면 월요일, …, 7이면 토요일)에 1일이 시작하는 달력을 출력

/* (실습14) 중첩 for문 이용

int main(void){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
} */

/* (실습14) 중첩 for문 이용
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

/* 중첩 for문 이용하여 다음과 같이 출력
    1 2 3 4 5
    6 7 8 9
    10 11 12
    13 14
    15
*/

/* (실습16) 1부터 n까지의 합이 최초로 100이 넘을 때의 n값과 합을
구하는 프로그램을 작성하시오. 단, n까지의 합은 무한반복 안에
구현하고 합이 100을 넘으면 break 문을 이용하여 무한반복을
벗어나도록 하시오

int main(void){
    int i=1, sum;
    while(1){
        sum+=i;
        if(sum>100)
            break;
        i++;
    }
    printf("i값: %d\n", i);
    printf("1부터 i까지의 합: %d\n", sum);
} */

/* (실습17) 입력 받은 정수의 합을 구하는 프로그램을 작성하시오. 단,
무한반복을 사용하고 입력 받은 정수가 0이면 무한반복을
벗어나도록 하시오)

int main(void){
    int n, sum=0;
    do{
        scanf("%d", &n);
        sum+=n;
    }while(n>0);
    printf("입력 받은 정수의 합: %d", sum);
} */

int main(void){
    int i;
    printf("1부터 10 사이의 짝수만 출력\n");
    for(i=1; i<=10; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n", i);
    }
}