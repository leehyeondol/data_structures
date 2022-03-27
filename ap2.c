#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력
    
    int list[5];//배열 list 5칸 만들기
    int *plist[5];//포인터 배열 plist 5칸 만들기
    list[0] = 10;//list[0]에 10 입력
    list[1] = 11;//list[1]에 11 입력
    plist[0] = (int*)malloc(sizeof(int));//포인터 배열[0]에 malloc으로 동적할당 
    printf("list[0] \t= %d\n", list[0]);//list[0] 출력 10
    printf("address of list \t= %p\n", list);// 이름을 이용하여 list[0]의 주소 출력
    printf("address of list[0] \t= %p\n", &list[0]);//list[0] 주소 출력
    printf("address of list + 0 \t= %p\n", list+0);//list[0] 주소 출력
    printf("address of list + 1 \t= %p\n", list+1);//list[1] 주소 출력
    printf("address of list + 2 \t= %p\n", list+2);//list[2] 주소 출력
    printf("address of list + 3 \t= %p\n", list+3);//list[3] 주소 출력
    printf("address of list + 4 \t= %p\n", list+4);//list[4] 주소 출력
    printf("address of list[4] \t= %p\n", &list[4]);//list[4] 주소 출력
    free(plist[0]);
}