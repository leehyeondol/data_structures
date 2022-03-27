#include<stdio.h>
#include<stdlib.h>


void main()
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력

    int **x;//이중 포인터 생성
    printf("sizeof(x) = %lu\n", sizeof(x));//변수 x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));//*x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));//**x의 크기 출력
}