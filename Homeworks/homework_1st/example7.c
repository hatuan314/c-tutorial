/*
 * Viết chương trình nhập vào số giây từ 0 đến 86399, đổi số giây nhập vào thành dạng "gio:phut:giay", mỗi thành phần là một số nguyên có 2 chữ số.
 */

#include <stdio.h>

int hourToSeconds = 3600;
int minuteToSeconds = 60;

int main() {
    int hours;
    int minutes;
    int seconds;
    int totalSeconds;
    printf("Nhap vao so giay:\t");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / hourToSeconds;
    minutes = (totalSeconds - hours * hourToSeconds) / minuteToSeconds;
    seconds = totalSeconds - hours * hourToSeconds - minutes * minuteToSeconds;

    printf("hh:mm:ss ===> %02d:%02d:%02d", hours, minutes, seconds);
    return 0;
}