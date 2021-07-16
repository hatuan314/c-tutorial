//#include <stdio.h>
//
//float pi = 3.14;
//float S;
//float V;
//float R;
//
//int main ()
//{
//    float a;
//    printf ("Nhap vao so a : ");
//    scanf ("%f",&a);
//    S = 4*pi*R*R;
//    V = (4/3)*pi*R*R*R;
//    printf ("Dien tich hinh cau = %.2f", S);
//    printf ("\nThe tich hinh cau = %.2f", V);
//    return 0;
////bai 4//
//}

//#include <stdio.h>
//int main() {
//    int ngay,thang,nam;
//    printf("Nhap ngay: ");
//    scanf("%d",&ngay);
//    printf("Nhap thang: ");
//    scanf("%d",&thang);
//    printf("Nhap nam: ");
//    scanf("%d",&nam);
//    printf("Ngay thang nam vua nhap la: %.2d/%.2d/%.2d" ,ngay,thang,nam%100);
//    return 0;
//// bai 6//
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, tong, hieu, tich, thuong;
//    printf("Nhap vao so a :");
//    scanf("%d", &a);
//    printf("Nhap vao so b :");
//    scanf("%d", &b);
//    tong = a + b;
//    hieu = a - b;
//    tich = a * b;
//    thuong = a / b;
//    printf("tong = %d", tong);
//    printf("\nhieu = %d", hieu);
//    printf("\ntich = %d", tich);
//    printf("\nthuong = %d", thuong);
//    return 0;
//// Bai 3 //
//}

//nhap so giay
/*
 * Bai 7
 */
#include <stdio.h>

int main() {
    int sogiay;
    int giay, gio, phut;
    scanf("%d", &sogiay);
    if ((sogiay >= 0) && (sogiay <= 86399)) {
        giay = sogiay % 60;
        phut = sogiay % 3600 / 60;
        gio = sogiay / 3600;
        printf("\n gio:phut:giay %02d:%02d:%02d",
               gio,
               phut,
               giay);
    }
    getchar();
}