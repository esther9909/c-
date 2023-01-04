#include <stdio.h>

/* 5장 3절 문제1
void main(){
    int n;
    scanf("%d", &n);
    if(n<0){
        printf("cold, indoor");
    }else if(n>=0 && n<40){
        printf("moderate, outdoor");
    }else{
        printf("hot, indoor");
    }
}
*/

/* 5장 3절 문제2
void main(){
    int n,m;
    scanf("%d %d", &n, &m);
    if(n*n==m){
        printf("%d*%d=%d",n,n,m);
    }else if(m*m==n)
    {
        printf("%d*%d=%d",m,m,n);
    }else{
        printf("none");
    }
}
*/

/* 5장 4절 문제3
void main(){
    int i, sum;
    int n[5];
    for(i=0; i<5; i++){
        scanf("%d", &n[i]);
    }
    for(i=0; i<5; i++){
        if(n[i]>0){
            sum=sum+n[i];
        }
    }
    printf("%d", sum);
}
*/

// 5장 4절 문제4 X


/* 5장 4절 문제5
void main(){
    int n;
    scanf("%d", &n);

    if(n%(2*3*5)==0){
        printf("A");
    }
    else if(n%(2*3)==0){
        printf("B");
    }
    else if(n%(2*5)==0){
        printf("C");
    }
    else if(n%(3*5)==0){
        printf("D");
    }
    else if(n%2==0|| n%3==0 || n%5==0){
        printf("E");
    }
    else{
        printf("N");
    }
}
*/ 

/* 5장 4절 문제 6
void main(){
    int n[3];
    int i, max, min;
    for(i=0; i<3; i++){
        scanf("%d", &n[i]);
    }
    min=n[0];
    for(i=1; i<3; i++){
        if(min>n[i]){
            min=n[i];
        }
    }
    max=n[0];
    for(i=1; i<3; i++){
        if(max<n[i]){
            max=n[i];
        }
    }
    printf("%d %d", max,min);
}
*/

//5장 4절 문제7 X

/* 5장 4절 문제8 (중첩 if-elseif-else문 사용)
void main(){
    int n;
    scanf("%d", &n);
    if(n%4==0){
        if(n%100==0){
            if(n%400==0)
                printf("leap year");
            else
                printf("common year");
        }
        else
            printf("leap year");
    }
    else{
        printf("common year");
    }  
}
*/ 



