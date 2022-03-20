#include <stdio.h>
int main()
{
char charType;//char형 변수 생성
int integerType;//int형 변수 생성
float floatType;//float형 변수 생성
double doubleType;//double형 변수 생성
printf("Size of char: %ld byte\n",sizeof(charType));//변수 charType의 크기 출력 1
printf("Size of int: %ld bytes\n",sizeof(integerType));//변수 intgerType의 크기 출력 4
printf("Size of float: %ld bytes\n",sizeof(floatType));//변수 floatTypte의 크기 출력 4
printf("Size of double: %ld bytes\n",sizeof(doubleType));//변수 doubleType의 크기 출력 8
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));//char의 크기 출력 1
printf("Size of int: %ld bytes\n",sizeof(int));//int의 크기 출력 4
printf("Size of float: %ld bytes\n",sizeof(float));//float의 크기 출력 4
printf("Size of double: %ld bytes\n",sizeof(double));//double의 크기 출력 8
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));//char형 포인터의 크기 출력 4
printf("Size of int*: %ld bytes\n",sizeof(int*));//int형 포인터의 크기 출력 4
printf("Size of float*: %ld bytes\n",sizeof(float*));//float형 포인터의 크기 출력 4
printf("Size of double*: %ld bytes\n",sizeof(double*));//double형 포인터의 크기 출력 4
printf("[----- [lee hyeondo] [2019038085] -----]");
return 0;
}
