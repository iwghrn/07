#include <stdio.h>
static int all_files;  //해당 파일 내로 범위를 제한

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}
