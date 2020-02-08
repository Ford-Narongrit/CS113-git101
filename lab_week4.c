#include <stdio.h>
int addTen(int x)  // ต้องประกาศ prototype ก่อน
{
    x = x +10;
    return x; 
}
int addTwenty();
int x =1000;
int main()
{
    int x = 50;
    int y = addTen(x);
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwemty in main = %d\n",addTwenty());
    printf("x in main = %d\n",x);
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x);
    x = x +20;
    return x; 
} // ในภาษา c ถ้าหาไม่เจอจะไปหาใน file  ต้องปรกาศก่อนเสมอถึงเรียนใช้ได้
// memory มันจะกำหนมดเนื้อที่แบ่งกันให้ , ถ้ามีการกำหนดค่า มันจะไปจองที่ ให้ค่าที่ประกาศตามจำนวนบิต
// ถ้าไม่กำหนดค่า ในglobal จะให้ค่าเป็น 0   ถ้าเป็นค่าใน main() ถ้าไม่ได้กำหนดค่าจะให้ค่ามั่วๆ ออกมา จาก memmory address
// ใน fn ถ้ามีการประกาศตัวแปร จะไปจองเนื้อที่ โดยค่าจะไป copy จากตัวคนเรียนไปหาfn เป็น pass by value
// ใน บรรทัดสุดท้าย return จะทำการเคลีย เนื้อที่ที่จองใน fn ออกทั่งหมด ถ้าต้องการค่าที่ออกจาก fn ไปใช้ต่อก็ต้องประกาศตัวแปรมาเก็บค่า
//local < Global ถ้าไม่เจอจะไปหาในที่ที่ใหญ่กว่า 
//ถ้าfn ไม่ได้ประกาศค่าใน () จะไปเปลี่ยนค่าตัวแปรที่หาเจอใน Global เลย
// ตัวแปร global หลังจากที่กำหนดแล้วข้างล่างมันจะสามารถมาเปลี้ยนตัวแปรได้ทั้งหมด ไม่ควรประกาศ global หากไม่จำเป็น