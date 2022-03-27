#include <stdio.h>
#define MAX_SIZE 100 //MAX_SIZE 는 100
float sum(float [], int);
float input[MAX_SIZE], answer;//input[MAX_SIZE]인 배열 생성, answer 변수 생성
int i;

void main(void)
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력
    
    for(i=0; i < MAX_SIZE; i++)//100회 반복
    {
        input[i] = i;//input배열에 0부터 100까지 입력
    }
        /* for checking call by reference */
    printf("address of input = %p\n", input);//input의 주소 출력 
    answer = sum(input, MAX_SIZE);//answer에 함수 sum의 리턴값 입력. sum에 input과 100 넘겨줌
    printf("The sum is: %f\n", answer);//answer값 출력
}

float sum(float list[], int n)//sum함수. 배열 input의 주소와 MAX_SIZE인 100 받음
{
    printf("value of list = %p\n", list);//list배열의 주소 출력. input과 같음
    printf("address of list = %p\n\n", &list);//list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)//100회 반복
        tempsum += list[i];//list의 값 모두 tempsum에 더해줌.
    return tempsum;// 리턴
}