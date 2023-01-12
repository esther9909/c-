// 8장3절 [ 문제 1 ] 양의 정수 N을 입력 받아, 1부터 N까지의 합을 출력하는 프로그램을 작성하시오

/* #include <stdio.h>
int add(int x, int y){
    return x+y;
}

int main(void){
    int n;
    int sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=add(i,0);
    }
    printf("%d", sum); 
} */

// 8장3절 [ 문제 2 ] 두 개의 양의 정수 A과 B을 입력 받아, A부터 B까지의 합을 계산하는 프로그램을 작성하시오.
/* 
#include <stdio.h>

int sum(int n){
    int sum;
    sum=n*(n+1)/2;
    return sum;
}

int main(void){
    int a,b, result=0;
    scanf("%d %d", &a, &b);
    result=sum(b)-sum(a-1);
    printf("%d", result);
    return 0;
} */


//8장3절 [ 문제 3 ] 하나의 양의 정수 N을 입력 받아 다음 수식의 결과를 출력하는 프로그램을 작성하시오.

/* #include <stdio.h>

int sum(int n){
    int sum;
    sum=n*(n+1)/2;
    return sum;
}

int main(void){
    int n, result=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        result+=sum(i);
    }
    printf("%d", result);
    return 0;
} */

// 8장3절 [ 문제 4 ] 2~9 사이의 정수 N을 입력 받아, 예시와 같이 숫자 N으로 사각형을 출력하는 프로그램을 작성하시오.

/* #include <stdio.h>

void print_row1(int x){
    for(int i=0; i<x; i++){
        printf("%d", x);
    }

}

void print_row2(int x){
    for(int i=0; i<x; i++){
        if(i==0 || i==x-1)
            printf("%d",x);
        else{
            printf(" ");
        }
    }

}


int main(void){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            print_row1(n);
            printf("\n");
        }
        else{
            print_row2(n);
            printf("\n");
        }
    }
}
 */

/* 8장3절 [ 문제 5 ] 양의 정수를 반복해서 입력 받아(종료 조건 시까지), 예시와 같이 트리 모양을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void print_triangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    scanf_s("%d", &n);
    while (n > 0) {
        print_triangle(n);
        scanf_s("%d", &n);
    }
}

8장3절 [ 문제 6 ] 하나의 정수 x를 입력 받아 다음 함수의 결과를 출력하는 프로그램을 작성하시오

#include <stdio.h>

int func1(int x) {
	int f = 2 * x * x - 5 * x + 1;
	return f;
}

int main(void) {
	int n;
	scanf_s("%d", &n);
	int result=func1(n);
	printf("%d", result);
}


8장3절 [ 문제 7 ] 하나의 정수 x와 2차 함수 f(x)의 계수를 나타내는 3개의 정수를 입력 받아, 예시와 같이 함수 값을 계산하는 프로그램을 작성하시오.

#include <stdio.h>

int func2(int x, int a, int b, int c) {
	int f = a * x * x + b * x + c;
	return f;
}

int main(void) {
	int x, a, b, c;
	scanf_s("%d", &x);
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", func2(x, a, b, c));
}

8장3절 [ 문제 8 ] 하나의 정수 x와 2차 함수 f(x)와 g(x)의 계수를 나타내는 6개의 정수를 입력받아, 합성함수 g(f(x))를 계산하는 프로그램을 작성하시오.

#include <stdio.h>

int func2(int x, int a, int b, int c) {
	int f = a * x * x + b * x + c;
	return f;
}

int main(void) {
	int x, a, b, c;
	int f, g;
	scanf_s("%d", &x);
	scanf_s("%d %d %d", &a, &b, &c);
	f = func2(x, a, b, c);

	scanf_s("%d %d %d", &a, &b, &c);
	g = func2(f, a, b, c);
	printf("%d", g);
}
 */

/*
8장4절 [ 문제 9 ] 정수를 반복해서 입력 받아(종료 조건 시까지), 가장 큰 값과 두 번째로 큰 값을 출력하는 프로그램을 작성하시오

#include <stdio.h>

int max1, max2;

void update_max(int x) {
	if (x == max1) {
		max2 = x;
	}
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	if (max1 > x && max2 < x) {
		max2 = x;
	}
}
int main(void) {
	int n, tmp;

	scanf_s("%d", &n);
	max1 = n;
	scanf_s("%d", &n);
	max2 = n;

	if (max2 > max1) {
		tmp = max1;
		max1 = max2;
		max2 = tmp;
	}
	while (n != 0) {
		scanf_s("%d", &n);
		update_max(n);
	}
	printf("%d %d", max1, max2);
 }*/