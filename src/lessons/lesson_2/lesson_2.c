#include "stdio.h"
#include "stdbool.h"
#include "./lesson_21.c"

void lesson_2() {
    // su dung noi dung cua file sau khi include
    lesson_21();

    // khai bao bien
    int a = 0;
    char b = 'g';
    bool c = true;
    unsigned int d = 12;

    /**
     * printf("Day la ham duoc in ra tu comment");
    */

    printf("%d, %c, %d, %u \n", a, b, c, d);

    printf("Giá trị của c: %s", c ? "true" : "false");


}