#include <stdio.h>
#include <stdlib.h>
int main()
{
//    int x = 100; //ได้ 3 อย่าง ตัวแปร ค่าตัวแปร และ ที่อยู่
//    int a = 0144; //มีค่า 100 ในฐาน16
//    int b = 0x64; //มีค่า 100 ในฐาน16
//    printf("x = %d\n",x);
//    printf("reference x = %lu\n", &x); //จะได้ค่า ที่อยู่ออกมา
//    printf("reference x = %p\n", &x); // %p จะออกค่าที่อยู่เป็น ฐาน 16 (pointer)

//printf("-----------------------------------\n");
//อาเรย์
//int number[]  = {3,4,5,6,7}; //array ขนาด 5
//int number[100];
//int number[100] = {3,4,5,6,7};
//printf("index 1 = %d\n",number[1]);
//printf("reference number[1] = %p\n", &number[1]);
//printf("reference number[0] = %p\n", &number[0]);
//printf("reference number = %p\n", &number); //หาที่อยู่ number จาก array ที่ 0 ได้่
//printf("reference number = %p\n", &number +1 );//ถ้า pointer +1 จะเป็นการ+ที่อยู่ จะได้เป็นค่าที่อยู่ ของarrayถัดไป โดยในที่นี้ค่าของ numberเป็นint มีค่า4 บิตพอบวกแล้วจะเพิ่มอีก 4 
//+ เท่าขนาด type เช่น char+1 ,int+4
//ข้อควรระวัง
//int number[]  = {3,4,5,6,7};
//number[2000] = 2000
//printf("index 1 = %d\n",number[2000]);
//printf("reference number[1] = %p\n", &number[2000]);
//จากตรงนี้นอกจากจะสร้างได้แล้วยังเปลี่ยนค่าในที่อยู๋ที่เกินไปได้ด้วย ไม่เหมือนภาษาอื่น
//ถ้าเราทำให้มันเป็น inf แล้วมันไปเปลี่ยนค่าในที่อยู่อื่นนอกจากที่ตั้งไว้แล้ววิ่งไปเลขลบมันจะไปทำให้ค่าบ้างค่าของคอมเป็น 0 ทำให้ memory พัง
//printf("------------------------------------------\n");
//int number[]  = {3,4,5,6,7}; 
//int *ptr = &x; //ประกาศแล้วให้ค่า
//int *arrPtr; // ประกาศก่อนให้ค่า
//arrPtr = number; // 00     //การให้ค่า ไม่ต้องมี * (ถ้าประกาศไว้แล้ว)
//arrPtr +=2; // เปลี่ยนที่อยู่ถัดไป 2 
//*arrPtr = *arrPtr + 10;//เปลี่ยนค่าที่อยู่ปัจจุบัน +10
//printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);
//printf("number[2] = %d\n",number[2]); //ที่ที่อยู่ 2 เปลีย่นค่าเป็น 15 เพราะเรานำค่าไป +10 ที่บรรทัด36
//int number[]  = {3,4,5,6,7}; 
//for (int *ptr = number; ptr <= &number[4];ptr++)
//{
//    printf("[%p] = %d\n",ptr,*ptr);
//}
//int *ptr2 = number;
//printf("------------------------------------------\n");
//for(int i = 0;i < 5; i++)
//{
//    printf("[%p] = %d\n",ptr2 + i,*(ptr2 + i));
//}
//char input[100];
//int count = 0;
//char c;
//while ((c = getchar())!= '\n')
//{
//    input[count] = c;
//    ++count;
//}//ถ้าวนรับ เอง getchar เราต้องปิดด้วย /0 เอง มันไม่เหมือน กับ fgets
//input[count] = '\0';
//for(char *cPtr = input ; *cPtr != '\0' ;cPtr++){
//    printf("%c\n",*cPtr);
//}

//scanf()
char c;
int i ;
char s[100];
scanf("%d-%c-%s",&i,&c,s); //ตัวเลข 4 บิต  คาเรค 1 ตัว char 100
printf("%d %c %s",i,c,s);
}