#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력

    int list[5];//배열 list 5칸 생성
    int *plist[5] = {NULL,};//포인터 배열 plist생성 및 초기화
    plist[0] = (int *)malloc(sizeof(int));//malloc을 이용해 plist[0]에 동적할당
    list[0] = 1;//list[0]에 1입력
    list[1] = 100;//list[1]에 100입력
    *plist[0] = 200;//동적할당된 plist[0]에 200입력
    printf("value of list[0] = %d\n", list[0]);//list[0]의 값 출력
    printf("address of list[0] = %p\n", &list[0]);//list[0]의 주소 출력
    printf("value of list = %p\n", list);//이름을 이용해 list[0]의 주소 출력
    printf("address of list (&list) = %p\n", &list);//list[0]의 주소 출력
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);//list[1]의 값 출력
    printf("address of list[1] = %p\n", &list[1]);//list[0]의 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1));//포인터를 이용해 list[1]의 값 출력
    printf("address of list+1 = %p\n", list+1);//포인터를 이용해 list[1]의 주소 출력
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]의 값 출력
    printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소 출력
    printf("&plist = %p\n", &plist);//plist[0]의 주소 출력
    printf("plist = %p\n", plist);//이름을 이용해 plist[0]의 주소 출력
    printf("plist[0] = %p\n", plist[0]);//동적할당된 plist[0]출력. 포인터 배열. 200이 입력된 주소 출력.
    printf("plist[1] = %p\n", plist[1]);//NULL
    printf("plist[2] = %p\n", plist[2]);//NULL
    printf("plist[3] = %p\n", plist[3]);//NULL
    printf("plist[4] = %p\n", plist[4]);//NULL
    free(plist[0]);//free
}
