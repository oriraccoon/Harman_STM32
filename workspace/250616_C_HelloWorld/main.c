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