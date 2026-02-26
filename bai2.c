/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    char username[50];
    char password[50];

    char userDung[] = "admin";
    char passDung[] = "123456";

    int i;
    int dungUser = 1; 
    int dungPass = 1;

    printf("Nhap username: ");
    scanf("%s", username);

    printf("Nhap password: ");
    scanf("%s", password);

    // So sánh username
    for(i = 0; userDung[i] != '\0'; i++) {
        if(username[i] != userDung[i]) {
            dungUser = 0;
            break;
        }
    }

    // Nếu độ dài khác cũng sai
    if(username[i] != '\0') {
        dungUser = 0;
    }

    // So sánh password
    for(i = 0; passDung[i] != '\0'; i++) {
        if(password[i] != passDung[i]) {
            dungPass = 0;
            break;
        }
    }

    if(password[i] != '\0') {
        dungPass = 0;
    }

    if(dungUser == 1 && dungPass == 1) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}