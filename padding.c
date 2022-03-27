#include <stdio.h>

struct student {// 구조체 student 제작
    char lastName[13]; // 13 bytes 이름이라는 배열 13칸 생성
    int studentId; // 4 bytes 학생아이디라는 변수 생성
    short grade; // 2 bytes 성적이라는 변수 생성
};

int main()
{
    printf("[----- [lee hyeondo] [2019038085] -----]\n");//이름 학번 출력
    
    struct student pst;//구조체 student를 pst라는 이름으로 생성
    printf("size of student = %ld\n", sizeof(struct student));//구조체의 크기 출력 24
    printf("size of int = %ld\n", sizeof(int));//int의 크기 출력
    printf("size of short = %ld\n", sizeof(short));//short의 크기 출력
    return 0;
}