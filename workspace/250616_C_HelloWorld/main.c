#include <stdio.h>
#include <string.h>

/*
// 곱하기
int main()
{
    int input_dansu = 1;

    while(1)
    {
        printf("write dansu(0:exit):");

        scanf("%d", &input_dansu);
        if(input_dansu == 0) break;

        for (int i = 0; i < 9; i++)
        {
            printf("%d X %d = %d\n", input_dansu, i+1, (input_dansu * (i + 1)));
        }
    }
    
    return 0;
}*/
/*
// 더하기
int sum(double, char);

int main(){
    int a = 0, b = 0;
    while(1)
    {
        printf("type two nums(0 0:exit):");
        scanf("%d %d", &a, &b);
        if ((a==0)&&(b==0)) break;
        printf("%d + %d = %d\n", a, b, sum((double)a,(char)b));
    }   
    
     
}


int sum(double a, char b)
{
    return a + b;
}
*/
/*
int main()
{
    char str[80] = "applejam";

    printf("1st:%s\n", str);
    printf("write str:");
    scanf("%s", str);
    str[3] = 1;
    printf("after str: %s\n", str);

    return 0;
}
*/
/*
int main()
{
    char str1[8] = "cat";
    char str2[8];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s", str1, str2);

    return 0;
}
*/
/*
int main()
{
    char str[200];
    int count = 0;
    printf("write str:");
    gets_s(str, 200);
    printf("input string:%s\n", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if((str[i] >= 65) && (str[i] <= 90)) {
            str[i] += 32;
            count += 1;
        }
    }
    printf("output string:%s\n", str);
    printf("count:%d", count);

    return 0;
    
}*/
/*
int main()
{
    int a;
    int* pa;
    int b;

    int** test;
    int*** test2;

    pa = &a;
    *pa = 10;
    test = &pa;
    *test = &b;
    *pa = 10;
    test2 = &test;
    ***test2 = 50;

    printf("테스트 %d, %p, %d, %d, %d",a, pa, **test, ***test2, b);

    return 0;
}*/
/*
void swap(int*, int*);

int main(){
    int a = 10, b = 20;

    printf("before swap result:%d, %d\n", a, b);
    
    swap(&a, &b);

    printf("after swap result:%d, %d\n", a, b);

    return 0;
}

void swap(int* pa, int* pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

}
*/
/*
int main()
{
    printf("apple이 저장된 시작 주소 값:%p\n", "apple");
    printf("두 번째 문자의 주소 값:%p\n", "apple" + 1);
    printf("첫 번째 문자:%c\n", *"apple");
    printf("두 번째 문자:%s\n", &(*("apple"+1)));
    printf("배열로 표현한 다섯 번째 문자:%c\n", "apple"[4] - 32);
}*/
/*
int main()
{
    char *parr[8];

    parr[0] = "dog";
    parr[1] = "dog";
    parr[2] = "dog";
    parr[3] = "dog";
    parr[4] = "dog";
    parr[5] = "dog";
    parr[6] = "dog";

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", parr[i]);
    }

        printf("%d + %d = %d", a, b, func(sum(a, b)));
    return 0;
}
*/
/*
void func(int (*pvf)(int,int), int, int, int);
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int (*pf)(int,int);
    int sel = 0;
    int a = 0, b = 0;

    while(1)
    {
        printf("원하는 연산을 입력하세요.(0 : +, 1 : -, 2 : *, 3 : /, 7 : 종료):");
        scanf("%d", &sel);
        printf("두 정수를 입력하세요:");
        scanf("%d %d", &a, &b);

        switch(sel)
        {
            case 0:
                func(sum, sel, a, b);
                break;
            case 1:
                func(sub, sel, a, b);
                break;
            case 2:
                func(mul, sel, a, b);
                break;
            case 3:
                func(div, sel, a, b);
                break;
        }
        if(sel == 7)
        {
            func(sum, sel, 0, 0);
            break;
        }
    }

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
void func(int (*pvf)(int a, int b), int sel, int a, int b)
{
    switch (sel)
    {
    case 0:
    case 1:
    case 2:
    case 3:
        printf("a = %d, b = %d result = %d\n", a, b, pvf(a, b));
        break;
    case 7:
        printf("종료합니다.");
        break;
    default:
        break;
    } 
}
*/
/*
struct Student
{
    int num;
    double grade;
};

int main()
{
    struct Student student;

    student.num = 2;
    student.grade = 2.5;
    printf("학년 : %d, 점수 : %.1lf", student.num, student.grade);

    return 0;
}*/

enum {F, C, B, A};

struct Profile
{
    int id;
    char name[8];
    int korean;
    int english;
    int math;
};
typedef struct Profile PF;

struct Student
{
    PF profile;
    double avg;
    char grade;
};
typedef struct Student ST;

int main()
{
    PF list[5] = {
        {315, "홍길동", 80, 75, 90},
        {316, "이순신", 80, 75, 90},
        {317, "서하윤", 80, 75, 90},
        {318, "유관순", 80, 75, 90},
        {319, "박신혜", 80, 75, 90},
    };
}