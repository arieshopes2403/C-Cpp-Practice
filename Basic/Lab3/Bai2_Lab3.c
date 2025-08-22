/*Bài 3.2:
Yêu cầu: Viết chương trình C sử dụng câu lệnh scanf() và printf() để nhập thông tin
từ bàn phím khi chương trình đang chạy và hiển thị thông tin vừa nhận trên màn
hình.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nhap[20];
    scanf("%s", nhap);
    printf("Name: %s\n", nhap);
    return 0;
}
