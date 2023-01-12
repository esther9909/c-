//  <C프로그래밍 및 실습> 7장 배열 실습 문제


/* 7장3절 [ 문제 1 ] 
배열에 5개의 정수를 입력 받아서 저장하시오. 
- 5개의 평균보다 큰 정수를 모두 출력하시오. 

#include <stdio.h>
int main(void){
  int a[5];
  int sum=0;
  int avg;
  for(int i=0; i<5; i++){
    scanf("%d", &a[i]);
    sum+=a[i];
  }
  avg=sum/5;
  for(int i=0; i<5; i++){
    if(a[i]>avg){
      printf("%d\n", a[i]);
    }
  }
}
*/


/* 7장3절 [ 문제 3 ]  
사용자에게서 정수 다섯 개를 입력 받는다. 첫 번째 큰 수와 두 번째 큰 수를 각각 출력하시오 

#include <stdio.h>
int main(void){
  int a[5];
  int i;
  int max;
  for(i=0; i<5; i++){
    scanf("%d", &a[i]);
  }
  max=a[0];
  for(i=1; i<5; i++){
    if(a[i]>max)
      max=a[i];
  }
  printf("%d\n", max);
}
*/


/* 7장3절 [ 문제 4 ] 
배열에 10개의 숫자를 입력 받아서 저장하시오. 
- 숫자는 1 혹은 2 혹은 3 중의 하나이다. 
- 각 숫자의 개수 만큼 별표를 출력하시오. 

#include <stdio.h>
int main(void){
  int a[10];
  int cnt[3]={0};

  for(int i=0; i<10; i++){
    scanf("%d", &a[i]);
  }
  for(int i=0; i<10; i++){
    if(a[i]==1)
      cnt[0]++;
    else if(a[i]==2)
      cnt[1]++;
    else if(a[i]==3)
      cnt[2]++;
    else 
      break;
  }
  
  for(int i=0; i<3; i++){
    printf("%d: ", i+1);
    for(int j=0; j<cnt[i]; j++){
      printf("*");
    }
    printf("\n");
  }
}
*/


/* 
7장3절 [ 문제 8 ] 
배열에 5개의 정수를 입력 받아서 저장하시오. 
- 첫 번째 원소와 두 번째 원소를 비교하여 첫 번째 원소가 두 번째 원소보다 크면 
  서로 교환하여 저장하시오. 
- 이 교환 연산을 첫 번째 원소부터 마지막 바로 전 원소까지 반복하시오. 
- 참고 : 제일 큰 수가 맨 뒤로 이동한다. 

#include <stdio.h>
int main(void){
  int a[5];
  int tmp;
  for(int i=0; i<5; i++){
    scanf("%d", &a[i]);
  }
  for(int j=0; j<5; j++){
    if(a[j]>a[j+1]){
      tmp=a[j];
      a[j]=a[j+1];
      a[j+1]=tmp;
    }
  }
  for(int i=0; i<5; i++){
    printf("%d\n",a[i]);
  }
}
*/


/* [ 문제 9 ] 
배열에 5개의 정수를 입력 받아서 저장하시오. 
- [ 문제 8 ]의 작업을 N-1번 반복하여, 가장 작은 수부터 가장 큰 수까지 
  오름차순으로 정렬하시오. 여기서 N=5 이다. 
  
  
#include <stdio.h>
int main(void){
  int a[5];
  int tmp;
  for(int i=0; i<5; i++){
    scanf("%d", &a[i]);
  }

  for(int i=1; i<=4; i++){
    for(int j=0; j<5; j++){
      if(a[j]>a[j+1]){
        tmp=a[j];
        a[j]=a[j+1];
        a[j+1]=tmp;
      }
    }
  }
  for(int i=0; i<5; i++){
    printf("%d\n",a[i]);
  }
}
*/

  
/* 7장5절 [ 문제 10 ] 
사용자에게서 총 9개의 숫자를 입력 받아, 3 X 3 배열을 초기화 하시오.
3 X 3 배열에서 대각선 원소들의 합을 출력하시오. 

#include <stdio.h>
int main(void){
  int a[9];
  int i;
  int sum=0;
  for(i=0; i<9; i++){
    scanf("%d", &a[i]);
  }
  for(int i=0; i<9; i=i+4){
    sum+=a[i];
  }
  printf("%d",sum);
}
*/


/* 7장4절 [ 문제 11 ] 
 학생 3명의 국어, 영어 성적이 있다.
 - 이 자료를 저장하기 위한 2차원 배열을 선언 하시오.
 - 학생 별 국어와 영어 성적을 사용자로부터 입력 받으시오. 
 - 학생 별 국어와 영어 성적의 합을 각각 출력하시오. 

#include <stdio.h>

int main(void){
  int a[3][2]={0};
  int sum[3]={0};
  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i=0; i<3; i++){
    sum[i]+=a[i][0]+a[i][1];
    printf("%d\n", sum[i]);
  }
}
*/



/*  7장5절 [ 문제 12 ] 
 사용자에게서 0~5 까지의 숫자 세 개 입력 받아, 
 각 숫자에 해당하는 영어를 출력하시오. 
 - 2차원 배열을 사용하시오. 
 char x[6][5] = { 'Z', 'E', 'R', 'O', '-', 'O', 'N', ... }; 

#include <stdio.h>
int main(void){
  char x[6][5]={{'Z','E','R','O','-'}, {'O','N','E','-','-'}, {'T','W','O','-','-'}, {'T','H','R','E','E'},{'F','O','U','R','-'},{'F','I','V','E','-'}};

  int a[3];
  for(int i=0; i<3; i++){
    scanf("%d", &a[i]);
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      printf("%c", x[a[i]][j]);
    }
    printf("\n");
  }
}
*/

