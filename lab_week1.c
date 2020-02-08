#include<stdio.h>
#define bb 100 //กำหนดค่าตัวแปร -------#define name value---------
#define for "sdasad"   // define อะไรก็ได้ ----> แบบนี้จะใช้ for ไม่ได้
float e;
int main(){
    int  a = 400; // long เทียบเท่า int แต่มากกว่า
    char b = 'a';
    char c = 97;
    float f = 0.1245;
    double d = 20.18888;
    char r[0];
    char s = '\0'; // กำหนดค่าcharacterว่าง
    // printf("hello_world");
    // printf("%u", a);
    // printf("%c %d %c %d", b,b,c,c);
    // printf("%f %lf", f, d);
    //printf("%f",e + 1000);
    int ans1 = a*b;
    float ans2 = f/b;
    printf("%d", 2%1);
    //printf("%-10s", for);
    return 0; // ปกติรีเทิร์น0 ใส่ไม่ใส่ก็ได้
}
