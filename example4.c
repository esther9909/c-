// <c���α׷��� �� �ǽ�> 4�� ���İ� ������ �ǽ� ����

#include <stdio.h>

/*4�� 2�� ����2
void main(){
    int a;
    scanf("%d", &a);

    int h,m,s;
    h=a/3600;
    m=(a%3600)/60;
    s=(a%3600)%60;

    printf("%d:%d:%d", h,m,s);
}
*/

/*
4�� 2�� ���� 3
void main(){
    int n;
    scanf("%d", &n);
    int ttho, tho, hun, ten, one;
    ttho=n/10000;
    tho=(n%10000)/1000;
    hun=((n%10000)%1000)/100;
    printf("%d", hun);
}
*/

/* 
4�� 3�� ���� 4
void main(){
    int n;
    scanf("%d", &n);
    int ttho, tho, hun, result;
    ttho=n/10000;
    tho=(n%10000)/1000;
    hun=((n%10000)%1000)/100;
    switch(hun){
        case 1:
        case 2:
        case 3:
        case 4:
        hun=0;
        break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        hun=0;
        ++tho;
        break;
    }
    result=10000*ttho+1000*tho+100*hun;
    printf("%d", result);
}
*/

/* 
4�� 3�� ���� 5
void main(){
    float n, r, s;
    scanf("%f", &n);
    r=n/(2*3.14);
    s=3.14*r*r;
    printf("%.f", s);

}
*/
/*
4�� 5�� ����6
void main(){
    int n;
    scanf("%d", &n);
    if(n>=20 && n<=30){
        printf("1");
    }else{
        printf("0");
    }
}
*/

/* 4�� 5�� ���� 7
void main(){
    char c;
    scanf("%c", &c);
    if(c>='a' && c<='z' || c>='A' && c<='Z')
    {
        printf("1");
    }
    else{
        printf("0");
    }
}
*/

/* 4�� 6�� ����8
void main(){
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("even");
    }
    else
        printf("odd");
}
*/

/* 
4�� 6�� ���� 9
void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    if(n>m){
        printf("%d",n);
    }
    else
        printf("%d", m);
}
*/

/* 4�� 6�� ���� 10 
void main(){
    int n,m;
    scanf("%d %d", &n, &m);
    if(n>m){
        printf("%d\n", n/m);
        printf("%d", n%m);
    }
    else{
        printf("%d\n", m/n);
        printf("%d", m%n);
    }
}
*/







