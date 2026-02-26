/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    char str[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap vao mot chuoi: ");
    scanf(" %[^\n]", str);   // Nhap ca dau cach

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // Neu la chu cai
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

            // Kiem tra nguyen am
            if(c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u' || c == 'y' ||
               c == 'A' || c == 'E' || c == 'I' || 
               c == 'O' || c == 'U' || c == 'Y') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("So nguyen am: %d\n", nguyenAm);
    printf("So phu am: %d\n", phuAm);

    return 0;
}