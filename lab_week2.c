#include <stdlib.h>
#include <stdio.h>
char name [20];
int number;
char chr,chr1;
int main()
{
    //printf("Enter name : ");
    // gets(name);
    // fgets(name, 20, stdin); กำหนดขนาดได้
    // getchar(chr); ขนาด 1 เท่านั้น เขียนไปเท่าไหร่ ออกแค่ตัวแรก
    //fgets(name, 20, stdin);
    //printf("%s",name);
    //fgets(number, 5, stdin);
    //int i = atoi(number); // อาเรทูอินทิเจอร์
    //printf("number = %s, i =%d",number , i);
    //number = 1234 *ที่หายไปคือในตอนเก็บเราจะใช้ ที่เก็บที่สุดท้ายในการเก็บ /0 /n

    //chr = getchar();
    //chr1 = getchar(); // การกด enter ทำให้ getchar รับ /n
    //*ถ้าต้องการให้ /n หายให้ดูดทิ้งโดย ขั้น getchar()อีกตัว
    //atol(); อาเรทู ลอง
    //atof(); อาเลทู float


    //ลอง print output
    fgets(number, 5, stdin);
    int i = atoi(number); // ถ้าใส่ตัวที่แปรงไม่ได้จะแปลงเป็น 0 ให้อัตโนมัติ
    puts(number);
    putchar(100);
    putchar('u');

    //บูลีน ภาษา c ไม่มี กำหนด type อย่างเดัยว
    // ไม่มี true false
    //ให้ค่า false
    int found = 0;
    float isExist = 0.0;
    char isOline = '\0';

    //การหาค่าความจิง
    fgets(number, 5, stdin);
    int i = atoi(number);
    if(i > 0 && i <= 10) //สุดท้ายค่าที่ออกมาจะเป็น int 
    {
        printf("%d\n", i > 0 && i <= 10);
    }else if(i <= 20 || !found){
        printf("else if\n");
    }else{
        printf("else\n");
    }


//loop
    fgets(number, 5, stdin);
    int i = atoi(number);
    int count = 0;
    while(count < i){
        printf("count = %d\n",count);
        count++; //ตอนจบกระบวนการมีค่าเท่ากัน
        //++count; //มีความเร็วที่มากกว่า
        //ถ้าเกิด infloop ให้กด  ctrl + c ส่งอินเทอร์หรับไปขัด
    }
    for (int j = 0; j<i ; j++){//(ทำก่อนเข้าloopครั่งเดียว,หาค่า TF ก่อนเข้า,ถ้าT จะทำตามอันสุดท้ายแล้วจบloopรอบนั้น)
        printf("j = %d\n",j);
    
    }
    //การเขียน infloop
    while (1){} //ควร
    for(;;){} //ไม่ควร

}