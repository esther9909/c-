//  <C���α׷��� �� �ǽ�> 7�� �迭 �ǽ� ����


/* 7��3�� [ ���� 1 ] 
�迭�� 5���� ������ �Է� �޾Ƽ� �����Ͻÿ�. 
- 5���� ��պ��� ū ������ ��� ����Ͻÿ�. 

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


/* 7��3�� [ ���� 3 ]  
����ڿ��Լ� ���� �ټ� ���� �Է� �޴´�. ù ��° ū ���� �� ��° ū ���� ���� ����Ͻÿ� 

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


/* 7��3�� [ ���� 4 ] 
�迭�� 10���� ���ڸ� �Է� �޾Ƽ� �����Ͻÿ�. 
- ���ڴ� 1 Ȥ�� 2 Ȥ�� 3 ���� �ϳ��̴�. 
- �� ������ ���� ��ŭ ��ǥ�� ����Ͻÿ�. 

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
7��3�� [ ���� 8 ] 
�迭�� 5���� ������ �Է� �޾Ƽ� �����Ͻÿ�. 
- ù ��° ���ҿ� �� ��° ���Ҹ� ���Ͽ� ù ��° ���Ұ� �� ��° ���Һ��� ũ�� 
  ���� ��ȯ�Ͽ� �����Ͻÿ�. 
- �� ��ȯ ������ ù ��° ���Һ��� ������ �ٷ� �� ���ұ��� �ݺ��Ͻÿ�. 
- ���� : ���� ū ���� �� �ڷ� �̵��Ѵ�. 

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


/* [ ���� 9 ] 
�迭�� 5���� ������ �Է� �޾Ƽ� �����Ͻÿ�. 
- [ ���� 8 ]�� �۾��� N-1�� �ݺ��Ͽ�, ���� ���� ������ ���� ū ������ 
  ������������ �����Ͻÿ�. ���⼭ N=5 �̴�. 
  
  
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

  
/* 7��5�� [ ���� 10 ] 
����ڿ��Լ� �� 9���� ���ڸ� �Է� �޾�, 3 X 3 �迭�� �ʱ�ȭ �Ͻÿ�.
3 X 3 �迭���� �밢�� ���ҵ��� ���� ����Ͻÿ�. 

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


/* 7��4�� [ ���� 11 ] 
 �л� 3���� ����, ���� ������ �ִ�.
 - �� �ڷḦ �����ϱ� ���� 2���� �迭�� ���� �Ͻÿ�.
 - �л� �� ����� ���� ������ ����ڷκ��� �Է� �����ÿ�. 
 - �л� �� ����� ���� ������ ���� ���� ����Ͻÿ�. 

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



/*  7��5�� [ ���� 12 ] 
 ����ڿ��Լ� 0~5 ������ ���� �� �� �Է� �޾�, 
 �� ���ڿ� �ش��ϴ� ��� ����Ͻÿ�. 
 - 2���� �迭�� ����Ͻÿ�. 
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

