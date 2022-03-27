#include <stdio.h>
void print1 (int *ptr, int rows);

int main()
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력

    int one[] = {0, 1, 2, 3, 4};//one이라는 int형 배열 생성 및 {0, 1, 2, 3, 4} 입력
    printf("one = %p\n", one);//이름을 이용한 one의 주소 출력
    printf("&one = %p\n", &one);//one의 주소 출력
    printf("&one[0] = %p\n", &one[0]);//one의 주소 출력
    printf("\n");
    print1(&one[0], 5);//배열 one의 첫번째 인자 주소와 5를 함수 print1에 전달
    return 0;
}

void print1 (int *ptr, int rows)//one의 주소와 5를 받기
{
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)//i는 0부터 5보다 작을때까지 반복
    printf("%p \t %5d\n", ptr + i, *(ptr + i));//one을 받은 ptr +i의 주소와 그 배열의 값 출력
    printf("\n");
}
