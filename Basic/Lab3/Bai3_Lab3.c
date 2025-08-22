/*Yêu cầu: Viết chương trình nhập tên của bạn rồi hiển thị trên màn hình với câu
chào:
Hello [name]. How are you?*/

#include <stdio.h>

int main() {
    char name[20]; 
    printf("What is your name? "); 
    scanf("%s", name); 
    printf("Hello %s. How are you?\n", name); 
    return 0; 
}