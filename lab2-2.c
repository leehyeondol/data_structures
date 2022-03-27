#include <stdio.h>
int main()
{
int i;// int형 변수 생성
int *ptr;//ptr포인터 생성
int **dptr;//dptr더블 포인터 생성
i = 1234;//i = 1234
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("address of i == %p\n", &i);//i의 주소값 출력
printf("value of ptr == %p\n", ptr);//ptr의 값 출력 
printf("address of ptr == %p\n", &ptr);//ptr의 주소값 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("address of i == %p\n", &i);//i의 주소값 출력
printf("value of ptr == %p\n", ptr);//ptr = &i 이므로 i의 주소값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 주소값 출력
printf("value of *ptr == %d\n", *ptr);//ptr = &i 이므로 *ptr은 i값 1234 출력
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("address of i == %p\n", &i);//i의 주소값 출력
printf("value of ptr == %p\n", ptr);//i의 주소값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 추소값 출력
printf("value of *ptr == %d\n", *ptr);//i의 값 1234 출력
printf("value of dptr == %p\n", dptr);//dptr = &ptr이므로 ptr의 주소값 출력
printf("address of dptr == %p\n", &dptr);//dptr의 주소값 출력
printf("value of *dptr == %p\n", *dptr);//ptr의 값 출력 == i의 주소값 출력
printf("value of **dptr == %d\n", **dptr);//더블 포인터 이므로 i의 값 출력 ==1234
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//i의 값 출력. *ptr = 7777이므로 7777
printf("value of *ptr == %d\n", *ptr);//i의 값 출력. 포인터 이므로 7777
printf("value of **dptr == %d\n", **dptr);//i의 값 출력. 더블포인터 이므로 7777
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);//i의 값 출력.**dptr = 8888이므로 8888
printf("value of *ptr == %d\n", *ptr);//i의 값 출력. 포인터 이므로 8888
printf("value of **dptr == %d\n", **dptr);//i의 값 출력. 더블 포인터이므로 8888

printf("[----- [lee hyeondo] [2019038085] -----]");
return 0;
}
