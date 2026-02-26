/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    char str[5][100];
    char temp[100];
    int i, j, k;

    // Nhập 5 chuỗi
    for(i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Sắp xếp
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {

            k = 0;

            // So sánh từng ký tự
            while(str[i][k] != '\0' && str[j][k] != '\0') {
                if(str[i][k] > str[j][k]) {
                    
                    // Đổi chỗ hai chuỗi
                    int t = 0;
                    while(str[i][t] != '\0') {
                        temp[t] = str[i][t];
                        t++;
                    }
                    temp[t] = '\0';

                    t = 0;
                    while(str[j][t] != '\0') {
                        str[i][t] = str[j][t];
                        t++;
                    }
                    str[i][t] = '\0';

                    t = 0;
                    while(temp[t] != '\0') {
                        str[j][t] = temp[t];
                        t++;
                    }
                    str[j][t] = '\0';

                    break;
                }
                else if(str[i][k] < str[j][k]) {
                    break;
                }
                k++;
            }
        }
    }

    // In kết quả
    printf("\nDanh sach sau khi sap xep:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}