/*
POINTER
The function is declared with a void return type, so there is no value to return
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>


void update(int *a,int *b) {
    // Complete this function

    /*
    tức là tôi có 1 hàm update, tôi đưa vào 2 biến con trỏ a và b. Hàm này sẽ cập nhật và hiểu thị giá trị
    mới của a và b. Tiếp đến, tạo ra 2 biến temp a, temp b để lưu lại giá trị của a và b
    sau đó thì cộng và trị tuyệt đối thôi
    */
    int temp_a, temp_b;
    temp_a = *a;
    temp_b = *b;
    // *a = *a + *b;
    // *b = abs((*b)*2 - *a);
    *a = temp_a + temp_b;
    *b = abs(temp_a - temp_b);

        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}