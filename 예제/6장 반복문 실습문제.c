/* 6장2절 [ 문제 1 ] 
 - 하나의 양의 정수 N을 입력 받아 N의 약수를 출력하는 프로그램을 작성하시오.
 - while 문 이용
 - 출력의 각 수는 하나의 공백으로 구분하고, 맨 마지막에는 공백 없음
 */


/* 6장3절 [ 문제 2 ] 

 - 하나의 정수 N을 반복해서(종료 조건 시까지) 입력 받아 N의 합을 출력하는
   프로그램을 작성하시오.
 - 종료 조건: 0 입력
 - while 문 이용
 
#include <stdio.h>
 
int main(void){
    int n, sum=0;
    scanf("%d", &n);
    while(n!=0){
        sum+=n;
        scanf("%d", &n);
    }
    printf("%d", sum);
    return 0;
}

*/

/* 6장3절 [ 문제 3 ] 
- 하나의 기준 정수를 입력 받고, 다음 예시와 같이 정답을 맞힐 때 까지 
  정수를 입력 받아 대소 관계를 출력하는 숫자 맞추기 게임 프로그램을 작성
- do while 문 이용 

#include <stdio.h>

int main(void){
    int result, n;
    scanf("%d", &result);
    do{
        scanf("%d", &n);
        if(n<result){
            printf("%d >?\n", n);
        }
        else{
            printf("%d <?\n", n);
        }
    }while(result!=n);
    
    printf("%d", result);
}
*/

/* 6장4절 [ 문제 4 ]  해결 X
두 개의 양의 정수 N과 M을 입력 받아 두 정수의 최대공약수를 출력하는 
프로그램을 for 문을 이용해서 작성해보고, 다시 while 문을 이용하여 작성해보시오. */

/* [ 문제 5-1 ] 
양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 삼각형을 
출력하는 프로그램을 for 문을 중첩 이용하여 작성하시오. 

*
**
***
****
*****

int main(void){
    int i,j;
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}
 */

/* [ 문제 5-2 ] 
양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 
삼각형을 출력하는 프로그램을 for 문을 중첩 이용하여 작성하시오.

*****
****
***
**
* 

int main(void){
    int i,j;
    int n;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
}

*/

/* [ 문제 5-3 ] 
양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 삼각형을 
출력하는 프로그램을 for 문을 중첩 이용하여 작성하시오

입력: 5

*
***
*****
*******
*********

int main(void){
    int i,j;
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=0; j<i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

 */

/* [ 문제 5-4 ] 
양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 삼각형을 
출력하는 프로그램을 for 문을 중첩 이용하여 작성하시오.

입력: 5

*********
*******
*****
***
*

int main(void){
    int i,j;
    int n;
    scanf("%d", &n);
    for(i=n; i>=1; i--){
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

 */

/* 6장5절 [ 문제 5 ] 해결 X
양의 정수 N을 입력 받아, 아래 예시와 같이 높이가 N인 삼각형을 출력하는
프로그램을 for 문을 중첩 이용하여 작성하시오

 - 자릿수에 맞게 공백문자 출력

     입력: 5
 
        *
       ***
      *****
     *******
    ********* 

*/


/* 6장4절 [ 문제 8 ] 

정수 M, N을 입력받는다. 
for 문을 사용하여 M!(펙토리얼) 부터 N!(펙토리얼)까지 출력하는 프로그램을 
작성하시오.

- 2중 for 문 이용
- 1단계: 먼저 5!=120 출력을 완성한다.
- 2단계: 그다음 5!=1*2*3*4*5=120 출력을 완성한다.
- 3단계: 그다음 출력 예시1 과 같이 출력한다.

출력예시

2!=1*2=2
3!=1*2*3=6
4!=1*2*3*4=24
5!=1*2*3*4*5=120
6!=1*2*3*4*5*6=720
7!=1*2*3*4*5*6*7=5040
8!=1*2*3*4*5*6*7*8=40320
9!=1*2*3*4*5*6*7*8*9=362880
10!=1*2*3*4*5*6*7*8*9*10=3628800

int main(void){     // 기능은 구현했는데 완벽한 출력은 나오지 못함
    int m,n;
    int i,j;
    int result=1;
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++){
        printf("%d!=", i);        
        for(j=1; j<=i; j++){
            printf("%d*", j);
            result*=j;
        }
        printf("=%d\n", result); 
        result=1;
    }

}

 */

/* [ 문제 9-1 ] 해결 X
하나의 양의 정수 N을 입력 받아, N에서 숫자 3이 총 몇 번 나타나는지를 
출력하는 프로그램 작성하시오.
 - N=33 일 때, 2개의 3이 나타난다

 입력예시 131 -> 출력예시 1
 입력예시 303 -> 출력예시 2
 입력예시 31323 -> 출력예시 3
 */


/* 6장5절 [ 문제 9 ] 해결 X
하나의 양의 정수 N을 입력 받아, 1부터 N까지의 정수에서 숫자 3이 총 몇 번
나타나는지를 출력하는 프로그램 작성하시오.
 - 중첩 반복문 (for 문, while 문 사용) 
 - N=33 일 때, 3, 13, 23, 30,/ 31, 32, 33, 총 7개의 수에서 8개의 3이 나타난다. 
 (∵ 숫자 33에는 3이 두 개 있으므로) 
 */


/* [ 문제 10-1 ]   해결 X
10이상의 양의 정수 N을 입력 받아 각 자리수의 합을 출력하는 프로그램을 작성하시오. 
- 예) 6234 à 6+2+3+4=15
 */


/*6장5절 문제 10부터 끝까지 해결 x


