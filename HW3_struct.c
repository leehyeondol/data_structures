#include <stdio.h>
struct student1 {//구조체student1생성
    char lastName;//lsatName 변수 생성
    int studentId;//sudentID 변수 생성
    char grade;//grade 변수 생성
};
typedef struct {    // typedef를 이용하여 student2 구조체 생성
    char lastName;//lsatName 변수 생성
    int studentId;//sudentID 변수 생성
    char grade;//grade 변수 생성
} student2;
int main() {
    struct student1 st1 = {'A', 100, 'A'};//구조체 student1을 이용하여 st1 생성. {'A', 100, 'A'} 값 입력.
    printf("st1.lastName = %c\n", st1.lastName);//구조체 st1의 lastName출력 
    printf("st1.studentId = %d\n", st1.studentId);//구조체 st1의 studentId출력
    printf("st1.grade = %c\n", st1.grade);//구조체 st1의 grade출력

    student2 st2 = {'B', 200, 'B'};//구조체 student2을 이용하여 st2 생성. {'B', 200, 'B'} 값 입력.
    printf("\nst2.lastName = %c\n", st2.lastName);//구조체 st2의 lastName출력
    printf("st2.studentId = %d\n", st2.studentId);//구조체 st2의 studentId출력
    printf("st2.grade = %c\n", st2.grade);//구조체 st2의 grade출력

    student2 st3;//구조체 student2을 이용하여 st3 생성.
    st3 = st2;//st2의 값들을 st3에 입력
    printf("\nst3.lastName = %c\n", st3.lastName);//구조체 st3의 lastName출력. st2와 같다.
    printf("st3.studentId = %d\n", st3.studentId);//구조체 st3의 studentId출력. st2와 같다.
    printf("st3.grade = %c\n", st3.grade);//구조체 st3의 grade출력. st2와 같다.

    /* 비교 가능한지 체크 */
    if(st3 == st2)  //전체 구조의 동등성 검사 불가. 오류. strcmp사용하여야 함. 
        printf("equal\n");//equal 출력.
    else//아니면
        printf("not equal\n");//not equal 출력.
        
    return 0;
}
