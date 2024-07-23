1. Nội dung đạt được
- khai báo #include
    ```
    #include "stdio.h"
    #include "lesson_2.c"
    #include <main.c>
    ```
- comment
    ```
    // inline comment

    /**
     * multiple line
     * comment
    */
    ```
- kiểu dữ liệu và format
    - Kiểu số nguyên (integers):

        ```
        int: %d hoặc %i
        unsigned int: %u
        long: %ld
        unsigned long: %lu
        long long: %lld
        unsigned long long: %llu
        short: %hd
        unsigned short: %hu
        ```

    - Kiểu số thực (floating-point numbers):

        ```
        float: %f
        double: %lf
        long double: %Lf
        Khoa học (scientific notation) cho float và double: %e hoặc %E
        Gọn gàng nhất giữa e và f (hoặc E và F): %g hoặc %G
        In ra số lượng phần tử đằng sau dấu thập phân: %.f
        ```

    - Ký tự và chuỗi (characters and strings):

        ```
        char: %c
        char * (string): %s
        ```

    - Con trỏ (pointers):

        ```
        void * (generic pointer): %p
        ```

    - Kiểu bool (C99):

        ```
        bool (C99): In trực tiếp giá trị số (1 hoặc 0) bằng %d

        bool (C99): Sử dụng toán tử ba ngôi bằng %s
        ```

    - Ký hiệu đặc biệt:

        ```
        %%: In ký tự %
        ```
- cách đặt tên biến - khai báo hằng số
    - camelCase
        ```
        int myNumber = 12;
        ```
    - snake_case
        ```
        var my_char = 'd';
        ```
    - UPPERCASE
        ```
        const float PI = 3.14;
        #define ITEM_NUMBER = 21;
        ```